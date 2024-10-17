/*Here we have used the the sizeof() function to print the size occupied by 
integer data-type in bytes. */
// #include<stdio.h>

// int main(){ 
// int a =10;
// //sizeof(a); 
// printf("The size of int a: %zu bytes.\n",sizeof(a));
// return 0;
// } 

// #include<stdio.h>

// int main(){ 
// const int a = 10; 
// // const int b; --> These two lines gives me error because an integer that is defined as constant needs 
// // b=5;             to be declared and assigned value in the same statement/line. Here b is declared 
// return 0;          // constant and in the next line is assigned value. This is giving us error.
// } 

/* Here we have used the unary minus operator to change the value of variable a.*/
// #include<stdio.h>

// int main(){ 
// int a = 5;
// a= -a;
// printf("The value of a is: %d\n",a);
// return 0;
// } 


/*Increment and Decrement Operator in working*/ 
// #include<stdio.h>

// int main(){ 
// int a = 10; // Here the pre-increment operator ++a first increases the value of a by 1
// int b = ++a; // and then the value of a becomes 11 and then it is stored in variable b.
// printf("The Value of variable a is: %d\n",a);
// printf("The Value of variable b is: %d\n",b);
// return 0;
// }  


// #include<stdio.h>

// int main(){ 
// int a = 10; // Here the post-increment operator a++ does increase the value of a by 1
// int b = a++; // like the pre-increment operator. Here the output is:
// printf("The Value of variable a is: %d\n",a); // The value of variable a is: 11                                                
// printf("The Value of variable b is: %d\n",b); // The value of variable b is: 10 
// return 0;
// } 

// /*Explanation of the above program*/ 
// #include<stdio.h>

// int main(){ 
//     int a = 10; // Initialize a with 10
//     int b = a++; // Post-increment: assign the current value of a to b, then increment a
//     printf("The Value of variable a is: %d\n",a); // The value of a is now 11
//     printf("The Value of variable b is: %d\n",b); // The value of b is the original value of a, which is 10
//     return 0;
// } 

// #include<stdio.h>

// int main(){ 
// int a = 10;
// printf("%d %d %d",a,++a,a++);
// return 0;
// } 
// Explanation of output of above program.
/*This behavior is due to the unspecified order of evaluation of function arguments in
 C, and it can vary between different compilers or even different runs. To avoid such 
 confusion, it's best to avoid modifying a variable multiple times in a single statement.
*/ 

/*Character Arithmatic*/ 

// #include<stdio.h>

// int main(){ 
// char ch = 'A'; // Here the addition of the ASCII value of A and B takes place and that
// char ch1 = 'B'; // is why 131 is printed as output of the printf statement. 
// printf("The value of A+B is: %d",ch+ch1);
// return 0;
// } 

// Write a program to check whether the entered character is lower case or not. 

// #include<stdio.h>

// int main(){ 
// char ch;
// printf("Enter the character:\n"); 
// scanf("%c",&ch);
// if(ch >= 97 && ch<=122){ 
//     printf("The entered character is a lower case character.\n");
// } 
// else{
//     printf("The character is not a lower case character.\n");
// }
// return 0;
// } 

//Write a program to accept marks of 5 students in intger format from the user and
//calculate the average in float format. 

// #include<stdio.h>

// int main(){ 
// int arr[6]; 
// int*ptr; 
// float sum=0.0f,avg = 0.00f; 

// ptr = &arr[0];
// for(int i = 0; i<5; i++){
//     printf("Enter the marks of student %d:\n",i);
//     scanf("%d",&arr[i]);
// } 
// for(int i = 0; i<5; i++){
//  sum = sum+(*ptr);
//  ptr++;
// }  
// avg = ((sum)/(5));
// printf("The Average of marks is: %f\n",avg);
// return 0;
// } 

// // Simplified version of the above code 

// #include <stdio.h>

// int main() {
//     int arr[5]; // Array to store marks of 5 students
//     float sum = 0.0f, avg = 0.0f;

//     // Accept marks from the user
//     for (int i = 0; i < 5; i++) {
//         printf("Enter the marks of student %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     // Calculate the sum of the marks
//     for (int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }

//     // Calculate the average
//     avg = sum / 5;

//     // Print the average
//     printf("The average marks of the 5 students is: %.2f\n", avg);

//     return 0;
// } 
 
/*Width Specification in c*/ 
//
//Definition:
/* In C, width specification is used in formatted input/output functions
 (like printf and scanf) to control the minimum number of characters to be printed or 
 read. This can be particularly useful for aligning output in a tabular format or 
 ensuring that input is read correctly.
*/  

/* Width Specification in printf: 
When using printf, the width specification ensures that the output is at least a certain
 number of characters wide. If the data to be printed is shorter than the specified 
 width, the output will be padded with spaces (by default) to meet the width requirement.
*/ 
//Width Definition: An integer specifying the minimum number of characters to be printed. 

// Code Example: 

// #include <stdio.h>

// int main() {
//     int num = 42;
//     float pi = 3.14159;
//     char str[] = "Hello";

//     // Printing with width specification
//     printf("Number: %5d\n", num);    // Output: "Number:    42"
//     printf("Float: %10.2f\n", pi);   // Output: "Float:       3.14"
//     printf("String: %10s\n", str);   // Output: "String:      Hello"

//     return 0;
// }
/* In the above Example: 
"%5d" prints the integer num with minimum width of 5 characters. Since 42 is only 2 
chaaracters long, it is paddedd with 3 spaces on the left. 

"%10.2f" prints float pi with minimum width of 10 characters and 2 digits after the 
decimal point. The 3.14 is padded with spaces to meet the width requirement. 

"%10s prints string str with a minimum width of 10 characters. The String Hello is 
padded with spaces on the left."
*/ 

// Width Specification in scanf 

/* When using scanf() width specification limits the number of characters to be read for
a particular input field. This can help to prevent buffer overflow and ensure that only
the desired amount of data is read.  */ 

// Code Example: 

// #include <stdio.h>

// int main() {
//     char buffer[10];

//     // Reading with width specification
//     printf("Enter a string: ");
//     scanf("%9s", buffer);  // Reads up to 9 characters, leaving space for the null terminator

//     printf("You entered: %s\n", buffer);

//     return 0;
// }
/* In this Example: 
"%9s" tells scanf to read upto 9 characters in the buffer array.This ensures that the 
input does not exceed the size of the buffer array (10 characters including the null
terminator.)*/ 

/*In Summary we can say that: 
printf width specification: Ensures that the output is at least a certain number of 
characters wide, padding with spaces if necessary.

scanf width specification: Limits the number of characters read from the input, helping
to prevent buffer overflow.*/