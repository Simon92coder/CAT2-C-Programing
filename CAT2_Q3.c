/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Description: program to read, process,write a list of intergers to a file
Date: 11/6/2025
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int numbers[10];
    int sum = 0;
    float average;
    int i=0;

    // Prompt to user to enter 10 integers and write to "input.txt"
    inputFile = fopen("C:\\Users\\pc\\Desktop\\c programs\\input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening input.txt for writing.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(inputFile, "%d\n", numbers[i]);
    }
    fclose(inputFile);

    // Reading  from "input.txt", calculate sum and average, write to "output.txt"
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading.\n");
        return 1;
    }

    for ( i = 0; i < 10; i++) {
        fscanf(inputFile, "%d", &numbers[i]);
        sum += numbers[i];
    }
    fclose(inputFile);

    average = sum / 10.0;

    outputFile = fopen("C:\\Users\\pc\\Desktop\\c programs\\output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing.\n");
        return 1;
    }

    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);
    fclose(outputFile);

    // Displaying contents of both files
    inputFile = fopen("C:\\Users\\pc\\Desktop\\c programs\\input.txt", "r");
    //Error handling
    if (inputFile == NULL) {
        printf("Error opening input.txt for display.\n");
        return 1;
    }

	//Printing contents of input file
    printf("\nContents of input.txt:\n");
    int value;
    int count = 1;
    while (fscanf(inputFile, "%d", &value) == 1) {
        printf("Integer %d: %d\n", count++, value);
    }
    fclose(inputFile);

    outputFile = fopen("C:\\Users\\pc\\Desktop\\c programs\\output.txt", "r");
    //Error handling
    if (outputFile == NULL) {
        printf("Error opening output.txt for display.\n");
        return 1;
    }

	//Printing output file contents
    printf("\nContents of output.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), outputFile)) {
        printf("%s", line);
    }
    fclose(outputFile);

    return 0;
}

