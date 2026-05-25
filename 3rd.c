/*SAMPLE PROGRAM 2- USING #define AND CALCULATING INTEREST FOR AN AMOUNT FOR EACH YEAR TILL A 10 YEAR TIME PERIOD*/

#define PERIOD 10 /*defining a constant named PERIOD with a value for 10 years*/

#include<stdio.h>

main()
{
    int year;
    float amount, interest, value; /*declaring variables of float data type to store the values of amount, interest and the new amount after adding interest*/

    year = 0; /*initializing the year variable to 0th year*/
    
    printf("Enter the amount and the rate of interest in decimal form (like 0.11 for 11%%): "); /*prompting the user to enter the amount*/
    scanf("%f %f", &amount, &interest); /*taking input from the user and storing it in a variable. don't use precisions for the scanf() function for the float data type like don't use %10.2f, just use %f*/

    while(year <= PERIOD) /*This is a while loop that will run until the year is less than or equal to the period. You will learn loops in C later on in this series, don't worry bros. The comparison with year and PERIOD is done using RELATIONAL OPERATORS which are <, <=, >, >=, ==, != */
    {
        printf("Year %d: %.2f\n", year, amount); /*printing the year and the amount for that year*/
        value = amount + (amount * interest); /*calculating the new amount by adding the interest to the current amount*/
        amount = value; /*storing the new amount in the amount variable*/
        year++; /*incrementing the year variable by 1 (or you can also write year = year + 1)*/
    }
}

/* the output for this code would be like this (i have given input for the amount as 2000 and rate of interest as 0.10):

Enter the amount and the rate of interest in decimal form (like 0.11 for 11%): 2000 0.10
Year 0: 2000.00
Year 1: 2200.00
Year 2: 2420.00
Year 3: 2662.00
Year 4: 2928.20
Year 5: 3221.02
Year 6: 3543.12
Year 7: 3897.43
Year 8: 4287.18
Year 9: 4715.90
Year 10: 5187.48

*/

/*You wull notice that for runnung every program, there creates an executable file  as .exe . This is a special type of file that can be executed directly by the operating system. this is a good feature for C as you don,t need to open the code everytime you want to run the oprogram. you have to jyst click on the executable file to run it. You can delete the executable file (.exe) after running the program, that would cause no effect to the program. No problems will arise from deleting the executable file.*/
