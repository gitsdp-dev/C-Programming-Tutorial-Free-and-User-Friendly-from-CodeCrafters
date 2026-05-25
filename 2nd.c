/*SAMPLE PROGRAM 1- USING BASIC MATH OPERATIONS LIKE +, -, *, / */

#include<stdio.h>

main()
{
    int a, b, s, d, p, q; /*declaring variables of integer data type to store the values of a and b and the results of the operations*/

    printf("Enter two numbers (like 5 10): "); /*prompting the user to enter two numbers*/
    scanf("%d %d", &a, &b); /*taking input from the user and storing it in variables a and b*/

    s = a + b; /*calculating the sum of a and b and storing it in variable sum*/
    d = a - b; /*calculating the difference of a and b and storing it in variable difference*/
    p = a * b; /*calculating the product of a and b and storing it in variable product*/
    q = a / b; /*calculating the quotient of a and b and storing it in variable quotient*/

    printf("Sum: %d\n", s); /*printing the sum of a and b*/
    printf("Difference: %d\n", d); /*printing the difference of a and b*/
    printf("Product: %d\n", p); /*printing the product of a and b*/
    printf("Quotient: %d\n", q); /*printing the quotient of a and b*/

    return 0; 
}