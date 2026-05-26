/*
*BASIC STRUCTURE OF A C PROGRAM*

                                            ~~C PROGRAM STRUCTURE~~

Documentation Section: This section is used to provide information about the program, such as the purpose of the program, the author, and any other relevant details. It is usually written in the form of comments at the beginning of the program.

----------------------------------------------------------------------------------------------------------------------------

Link Section: This section is used to include any necessary header files that provide access to functions and definitions needed for the program. For example, #include<stdio.h> is used to include the standard input/output library, which allows us to use functions like printf() and scanf().

----------------------------------------------------------------------------------------------------------------------------

Definition Section: This section is used to define any constants, macros, or global variables that will be used throughout the program. It is usually placed after the link section and before the main function.

----------------------------------------------------------------------------------------------------------------------------

Global Declaration Section: This section is used to declare any global variables that will be accessible throughout the program. It is usually placed after the definition section and before the main function.

----------------------------------------------------------------------------------------------------------------------------

main() Function Section: This is the entry point of the program where the execution starts. It contains the main logic of the program and is defined as int main() in C. The main function can call other functions, perform calculations, and handle user input/output.

main()
{
    // Declaration part
    //Logical Execution Part
    
    system ("pause"); //This is used to pause the program before it terminates, allowing the user to see the output before the program closes. It is important to use this in C programs as they can execute very quickly, and without it, the output may disappear before the user can read it.
    
    return 0; //Return Termination Statement
}

----------------------------------------------------------------------------------------------------------------------------

Subprograms Section: This section is used to define any additional functions that are called from the main function. These functions can perform specific tasks and help to organize the code better. They are defined after the main function and can be called from within the main function or from other functions as needed.

Function 1
{
    // Function body
}
Function 2
{
    // Function body
}
Function 3
{
    // Function body
}
---------------------------------------------------------------------------------------------------------------------------

                                        ~~END OF BASIC STRUCTURE OF A C PROGRAM~~

*/