/*the first inclusion statement *#include<stdio.h>* refers to the indication that we are including the standard input-output library of the C programming language. Other inclusion statements should be disussed later on next programs. Follow this series completely to know more about C programming*/

#include<stdio.h>

/*this is the main() function which initiates a C program. You should only use it once (at the beginning) in your program*/
main()
{ /*opening braces which indicate the initialisation of the main function*/
    printf("Hello, Mysef Souradipta Patra, a Full Stack Developer who knows Python, HTML, CSS, JS and C. This is a free C programming series Through codes which you can get open-source on my Github repo named \"C Tutorial\". I hope you will like it and it will be helpful for you to learn C programming language. Thank you!"); /*prints the sentence written under the braces*/
    /*The semicolon for ending each statement inside the main function is absolutely necessary*/
    
    return 0; /*this returns OFF or 0 to the operating system such that the OS knows the program has finished executing.*/
} /*closing braces indicate the ending of the main function*/

/*There are many kinds of main() functions in C programming, these are:
1. main() - The standard main function without any parameters
2. main(int argc, char *argv[]) - Main function with command-line arguments or parameters
3. main(void) - Main function with no parameters the word *void* indicates that the function does not take any parameters
4. void main() - Main function with no parameters (alternative syntax)
5. int main() - Main function that returns an integer value (most common form)
6. int main(void) - Main function with no parameters that returns an integer value
7. int main(int argc, char *argv[]) - Main function with command-line arguments that returns an integer value
8. void main(void) - Main function with no parameters (alternative syntax)*/

/*I prefer using the standard form of main function which is *main()*, as it is more widely accepted and compatible with various compilers. It also allows for returning an integer value to indicate the success or failure of the program execution.*/
