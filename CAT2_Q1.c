/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Description: program to declare and initialize a 2D array.
Date: 11/6/2025
*/

//Perprocessor directive
#include <stdio.h>

//Main function
int main() {
	
	//Variable declaration and initialization
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };
    int i=0;
    int j=0;

	//display message
    printf("Scores:\n");
    
    //loop to display values
    for (i = 0; i < 2; i++) {           // rows
        for (j = 0; j < 4; j++) {       // columns
            printf("%d\t", scores[i][j]);    //printing the scores
        }
        printf("\n");
    }

    return 0;
}

