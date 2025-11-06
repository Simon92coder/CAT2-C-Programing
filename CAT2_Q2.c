/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Description: program to compute money earned.
Date: 11/6/2025
*/

//Preprocessor dierective
#include <stdio.h>

//Main function
int main(){
	
	//Variable declaration 
	float hours_worked, hourly_wage, overtime;
	float gross_pay, taxes, net_pay;
	
	//Prompt to the user to enter hours worked in a week
	printf("Please enter the hours worked for the week: \n");
	scanf("%f", &hours_worked);
	
	//Prompt to the user to enter hourly wage
	printf("Please enter the wage per hour: \n");
	scanf("%f", &hourly_wage);
	
	//If function to calculate gross pay
	if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        overtime = (hours_worked - 40) * hourly_wage * 1.5;
        gross_pay = (40 * hourly_wage) + overtime;
    }

    // Calculation of taxes
    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = (0.15 * 600) + (0.2 * (gross_pay - 600));
    }
	
	//Calculation of net pay
	net_pay = gross_pay - taxes;
    
	
	//printing the results
	printf("Payment summary.\n");
	printf("------------------------------------------\n");
	printf("The gross pay is Ksh %.2f\n", gross_pay);
	printf("The taxes charged are Ksh %.2f\n", taxes);
	printf("The net pay is Ksh %.2f\n", net_pay);
	printf("-------------------------------------------\n");
	
	return 0;
}