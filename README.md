# Compiler-Design-Basics

*COMPANY* : CODETECH IT SOLUTIONS

*NAME* : KUNAL YADAV

*INTERN ID* : CT04DN1692

*DOMAIN* : C LANGUAGE

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTHOSH KUMAR

As part of my internship, I developed a simple lexical analyzer using the C programming language. The main objective of the task was to design a program capable of reading an input file and identifying three primary lexical elements in a source code snippet: keywords, operators, and identifiers. This task helped reinforce my understanding of compiler design fundamentals, especially the lexical analysis phase.

I used Visual Studio Code (VS Code) as my development environment due to its support for C development, integrated terminal, and syntax highlighting features that helped in writing and testing the program effectively. The project was designed to process a text file simulating a basic C code snippet, where the program would scan each token and classify it based on predefined rules and lists.

The lexical analyzer worked by reading the input file character by character and separating tokens based on delimiters such as spaces, newlines, and special symbols. I used a predefined list of C keywords (e.g., int, float, if, while, etc.) and operators (e.g., +, -, =, *, /, etc.) to compare each token. If a token matched a keyword or operator, it was labeled accordingly; if it did not match any of them and followed the rules of naming (e.g., starting with a letter or underscore), it was classified as an identifier.

One of the initial challenges I faced was ensuring accurate tokenization, especially when dealing with compound operators (like ==, >=, !=) or separating identifiers from keywords that appeared consecutively. I overcame these issues with the help of ChatGPT and GitHub Copilot, which provided suggestions on how to handle different token patterns and edge cases more effectively.

Another issue was handling special characters and ensuring the program didn’t misclassify them. I used conditional checks and character classification functions (like isalpha() and isdigit()) to validate the structure of identifiers and ignore irrelevant characters like whitespaces or newlines.

*INPUT FILR* :

<img width="1339" height="572" alt="Image" src="https://github.com/user-attachments/assets/b00493bb-a4e7-4d83-bad7-fad5034c67b1" />

*OUTPUT* :

<img width="241" height="265" alt="Image" src="https://github.com/user-attachments/assets/ab971f90-c840-4d69-a6ab-f6ff8792f218" />
