/*SAMPLE PROGRAM 3 - USING USER-DEFINED FUNCTIONS FOR OUR PROGRAM*/
/*BUILDING A SIMPLE CALCULATOR WITH USER-DEFINED FUNCTIONS*/

/*We have used standard math operations and functions like +, -, *, / in "2nd.c" program. But we did not use user-defined functions that can be created according to our choice. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h> /*including the standard library header file for using the system("pause") function described later in this program*/


/*DECLARING FUNCTION PROTOTYPES BEFORE MAIN SO THE COMPILER KNOWS THEY EXIST*/
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divide(float a, float b);


int main()
{
    int choice; /*declaring a variable of integer data type to store the user's choice for the type of operations they want to perform*/
    float a, b; /*declaring variables of float data type to store the values of a and b*/
    float sum, difference, product, quotient; /*declaring variables of float data type to store the results of the operations*/

    printf("           ||                                   ||            \n");
    printf("           ||   ~SAMPLE CALCULATOR PROJECT~     ||            \n");
    printf("           ||                                   ||            \n");

    printf("What Kind of Operations do you want to perform\n"); /*prompting the user to choose the type of operations they want to perform*/
    printf("1. Basic Math Operations (like +, -, *, /)\n"); /*option 1 for basic math operations*/
    printf("2. Power and Square Root Operations (like ^, sqrt())\n"); /*option 2 for power and square root operations*/
    printf("3. Trigonometric Functions (like sin(), cos(), tan())\n"); /*option 3 for trigonometric functions*/
    printf("Enter your choice (1, 2 or 3): "); /*prompting the user to enter their choice for the type of operations they want to perform*/
    scanf("%d", &choice); /*taking input from the user and storing it in variable choice*/

    /*USING CONDITIONAL STATEMENT if, else if, and else. You will learn later about Conditionals in this tutorial*/
    
    if (choice == 1) /*if the user's choice is 1, then the program will perform basic math operations*/
    {
        printf("Enter two numbers (like 5 10): "); /*prompting the user to enter two numbers*/
        scanf("%f %f", &a, &b); /*taking input from the user and storing it in variables a and b*/
        printf("\n\n"); /*printing a new line for better readability of the output*/

        
        printf("What among these four operations you would choose to perform?\n"); /*prompting the user to choose the specific operation they want to perform among the basic math operations*/
        printf("1. Addition (+)\n"); /*option 1 for addition*/
        printf("2. Subtraction (-)\n"); /*option 2 for subtraction*/
        printf("3. Multiplication (*)\n"); /*option 3 for multiplication*/
        printf("4. Division (/)\n"); /*option 4 for division*/
        printf("Enter your choice (1, 2, 3 or 4): "); /*prompting the user to enter their choice for the specific operation they want to perform among the basic math operations*/
        
        
        scanf("%d", &choice); /*taking input from the user and storing it in variable choice*/
        
        if (choice == 1)
        {
            sum = add(a, b); /*calling the add function to calculate the sum of a and b and storing it in variable sum*/
            printf("Sum: %.2f\n", sum); /*printing the sum of a and b*/
        }
        else if (choice == 2)
        {
            difference = sub(a, b); /*calling the sub function to calculate the difference of a and b and storing it in variable difference*/
            printf("Difference: %.2f\n", difference); /*printing the difference of a and b*/
        }
        else if (choice == 3)
        {
            product = mul(a, b); /*calling the mul function to calculate the product of a and b and storing it in variable product*/
            printf("Product: %.2f\n", product); /*printing the product of a and b*/
        }
        else if (choice == 4)
        {
            quotient = divide(a, b); /*calling the divide function to calculate the quotient of a and b and storing it in variable quotient*/
            printf("Quotient: %.2f\n", quotient); /*printing the quotient of a and b*/
        }
    }
    else if (choice == 2) /*if the user's choice is 2, then the program will perform power and square root operations*/
    {
        printf("Enter a number (like 5): "); /*prompting the user to enter a number*/
        scanf("%f", &a); /*taking input from the user and storing it in variable a*/
        printf("\n\n"); /*printing a new line for better readability of the output*/


        printf("What among these two operations you would choose to perform?\n"); /*prompting the user to choose the specific operation they want to perform among the power and square root operations*/
        printf("1. Power (^)\n"); /*option 1 for power operation*/
        printf("2. Square Root (sqrt())\n"); /*option 2 for square root operation*/
        printf("Enter your choice (1 or 2): "); /*prompting the user to enter their choice for the specific operation they want to perform among the power and square root operations*/
        
        scanf("%d", &choice); /*taking input from the user and storing it in variable choice*/

        if (choice == 1)
        {
            printf("Enter the exponent (like 3): "); /*prompting the user to enter the exponent for the power operation*/
            scanf("%f", &b); /*taking input from the user and storing it in variable b*/

            float result = pow(a, b); /*calculating a raised to the power of b using the pow function from math.h library and storing it in variable result*/
            printf("%.2f raised to the power of %.2f is: %.2f\n", a, b, result); /*printing the result of a raised to the power of b*/
        }
        else if (choice == 2)
        {
            float result = sqrt(a); /*calculating the square root of a using the sqrt function from math.h library and storing it in variable result*/
            printf("Square root of %.2f is: %.2f\n", a, result); /*printing the result of square root of a*/
        }
    }
    else if (choice == 3) /*if the user's choice is 3, then the program will perform trigonometric functions*/
    {
        printf("Enter an angle in degrees (like 30): "); /*prompting the user to enter an angle in degrees for the trigonometric functions*/
        scanf("%f", &a); /*taking input from the user and storing it in variable a*/
        printf("\n\n"); /*printing a new line for better readability of the output*/


        printf("What among these three operations you would choose to perform?\n"); /*prompting the user to choose the specific operation they want to perform among the trigonometric functions*/
        printf("1. Sine (sin())\n"); /*option 1 for sine function*/
        printf("2. Cosine (cos())\n"); /*option 2 for cosine function*/
        printf("3. Tangent (tan())\n"); /*option 3 for tangent function*/
        printf("Enter your choice (1, 2 or 3): "); /*prompting the user to enter their choice for the specific operation they want to perform among the trigonometric functions*/
        
        scanf("%d", &choice); /*taking input from the user and storing it in variable choice*/

        // Converting angle from degrees to radians
        float radians = a * (3.14159265358979323846f / 180.0f); /*converting the angle from degrees to radians using the formula: radians = degrees * (pi / 180)*/

        if (choice == 1)
        {
            float result = sin(radians); /*calculating the sine of the angle in radians using the sin function from math.h library and storing it in variable result*/
            printf("Sine of %.2f degrees is: %.2f\n", a, result); /*printing the result of sine of the angle in degrees*/
        }
        else if (choice == 2)
        {
            float result = cos(radians); /*calculating the cosine of the angle in radians using the cos function from math.h library and storing it in variable result*/
            printf("Cosine of %.2f degrees is: %.2f\n", a, result); /*printing the result of cosine of the angle in degrees*/
        }
        else if (choice == 3)
        {
            float result = tan(radians); /*calculating the tangent of the angle in radians using the tan function from math.h library and storing it in variable result*/
            printf("Tangent of %.2f degrees is: %.2f\n", a, result); /*printing the result of tangent of the angle in degrees*/
        }
        else
        {
            printf("Invalid choice! Please enter either 1, 2 or 3."); /*if the user's choice is neither 1 nor 2, then an error message will be displayed*/
        }
    }
    system("pause"); /*pausing the program so that the user can see the output before the program terminates for seeing the result. VERY IMPORTANT HERE AS C COMPILERS ARE MUCH MUCH FASTER THAN THE HUMAN EYE CAN DETECT. THE system("pause") FUNCTION IS USED TO PAUSE THE PROGRAM AND WAIT FOR THE USER TO PRESS A KEY BEFORE TERMINATING.*/
    return 0;
}

/*USER DEFINED FUNCTIONS USED HERE FOR BASIC MATH OPERATIONS*/

// Function to add two numbers
float add(float a, float b) /*changed data types to float to match the variables in main*/
{
    return a + b;
}

// Function to subtract two numbers
float sub(float a, float b) /*changed data type to float to match the variables in main*/
{
    return a - b;
}

// Function to multiply two numbers
float mul(float a, float b) /*changed data types to float to match the variables in main*/
{
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) 
{
    return a / b;
}

/*In this program, we have created user-defined functions for addition, subtraction, multiplication, and division...*/

/*In this program, we have created user-defined functions for addition, subtraction, multiplication, and division. We have also used the pow() and sqrt() functions from the math.h library to perform power and square root operations. The user can choose which type of operations they want to perform and the specific operation within that type. The program will then execute the chosen operation and display the result.*/

/*You can use this program as a reference for creating your own scientific simple calculator too.*/