#include <stdio.h>
#include <ctype.h>
#include <string.h>

char keywords[][10] = {"int", "float", "if", "else", "while", "for", "return", "char", "double", "void"};
char operators[] = "+-*/=%<>!&|";

int isKeyword(char *word) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    for (int i = 0; operators[i] != '\0'; i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    FILE *f;
    char ch, buffer[100];
    int i = 0;

    f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Cannot open input file.\n");
        return 1;
    }

    printf("Keywords: ");
    while ((ch = fgetc(f)) != EOF) {
        if (isalpha(ch)) {
            buffer[i++] = ch;
            while (isalnum(ch = fgetc(f)) || ch == '_') {
                buffer[i++] = ch;
            }
            buffer[i] = '\0';
            i = 0;
            if (isKeyword(buffer))
                printf("%s ", buffer);
            else
                printf("\nIdentifier: %s", buffer);
            if (!isspace(ch))
                ungetc(ch, f);
        } else if (isOperator(ch)) {
            printf("\nOperator: %c", ch);
        }
    }
    fclose(f);
    printf("\n");
    return 0;
}
