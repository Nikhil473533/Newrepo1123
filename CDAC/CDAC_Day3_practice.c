/*Q.1)Write a program to determine whether the number entered by the user is an Armstrong
Number or not.*/ 
// #include<stdio.h>
// #include<math.h>
// int main(){ 
// int a,rem1,rem2,rem3,original;
// printf("Enter the Number:\n");
// scanf("%3d",&a); //Used width Specification to accept only three digit number. 
// original = a;
// //Used the Following meethod to seperate the ones, tens and the hundereds digit
// //The entered number is going to be 3 digit number so the process was repeated 3 times.
//  rem1 = a%10;
// a = a/10;
// rem2 = a%10;
// a = a/10; 
// rem3 = a%10;
// a = a/10; 
// if(pow(rem1,3)+pow(rem2,3)+pow(rem3,3)==original){ 
//     printf("The Entered Number is a Armstrong Number.\n");
// } 
// else{
//     printf("The Entered Number is not Armstrong Number.\n");
// }
// return 0;
// } 
/*Q.2) Write a program to check whether the entered number is prime number or not.*/ 

// #include<stdio.h>
// int main(){ 
//     int a, isprime =1;
//     printf("Enter the number:\n");
//     scanf("%d",&a);
//     if(a<=1){
//         printf("Entered Number is not a prime Number.\n");
//         return 0;
//     } 
//     for(int i = 2; i<a; i++){ 
//         if(a%i==0){
//             isprime = 0;
//             break;
//         }  
//     }
//         if(isprime){ 
//             printf("The Entered Number is Prime Number.\n");
//         }
//        else{
//         printf("The Entered Number is not a prime number.\n");
//        } 
//     }

/*Q.3) Write a program to print the fibonacci series till the nth term.*/ 
// #include<stdio.h>

// int main(){ 
// int num1 = 0, num2 =1, n;
// printf("Enter the nth term:\n");
// scanf("%d",&n);
// printf("%d\t%d",num1,num2);
// for(int i = 2; i<n; i++){ 
//     int num3 = num1+num2;
// printf("%d\t",num3);
// num1 = num2;
// num2 = num3;
// } 
// return 0;
// } 

/*Q.4) Write a program to print the multiplication tables of numbers 5 to 10.*/ 
// #include<stdio.h>

// int main(){ 
// for(int n=5; n<=10; n++){  
//     printf("The Multiplication Table of %d is:\n",n);
//     for(int i=1; i<=10; i++){ 
//     printf("%dX%d=%d\n",n,i,n*i);
//     } 
//     printf("==========================\n");
// }
// return 0;
// }

/*Q.5) Write a program to print the following pattern on the console:
                    *
                    **
                    ***
                    **** */ 
// #include<stdio.h>

// int main(){ 
// for(int row=1; row<=4; row++){
//     for(int col=1; col<=row; col++){
//         printf("*\t");
//     } 
//     printf("\n");
// }
// return 0;
// } 

/*Q.6) Write a program to print the following pattern on the console:
                       1
                       23
                       456
                       78910
                       11121314 */ 
// #include<stdio.h>

// int main(){ 
// int num =1;
// for(int row=1; row<=5; row++){
//     for(int col=1; col<=row;col++){
//         printf("%d\t",num); 
//         num++;
//     } 
    
//     printf("\n");
// }
// return 0;
// } 

/*Q.7) Write a program to print the following pattern on the console:
                       1
                       22
                       333
                       4444
                       55555  */ 

// #include<stdio.h>

// int main(){ 
// int num =1;
// for(int row=1; row<=5; row++){
//     for(int col=1; col<=row;col++){
//         printf("%d\t",num); 
//     } 
//     num++;
//     printf("\n");
// }
// return 0;
// } 

/*Q.8) Write a program to print the following pattern on the console:
                       1
                       12
                       123
                       1234
                       12345  */ 

// #include<stdio.h>

// int main(){ 

// for(int row=1; row<=5; row++){
//     for(int col=1;col<=row;col++){
//         printf("%d",col);
        
//     } 
//     printf("\n");
// }
// return 0;
// }  

/*Q.9) Write a program to print the following pattern on the console:
                         AAAAA
                         BBBB
                         CCC
                         DD
                         E*/

// #include<stdio.h>

// int main(){ 
// char ch = 'A';
// for(int row=5; row>=1;row--){
//     for(int col=1;col<=row;col++){
//         printf("%c",ch);
//     } 
//         ch++;
//     printf("\n");
// }
// return 0;
// }

/*Q.10) Write a program to print the following pattern on the console:
                         A
                         BC
                         DEF
                         GHIJ
                         KLMNO*/ 

// #include<stdio.h>

// int main(){ 
// char ch = 'A';
// for(int row=1;row<=5;row++){
//     for(int col=1;col<=row;col++){ 
//         printf("%c",ch);
//         ch++;
//     } 
//     printf("\n");
// }
// return 0;
// } 

/*Q.11) Write a program to print the following pattern on the console:
                         AAAAA
                         BBBB
                         CCC
                         DD
                         E*/ 

// #include<stdio.h>

// int main(){ 
// char ch='A';
// for(int row=5;row>=1;row--){
//     for(int col=1;col<=row;col++){
//         printf("%c",ch);
//     } 
//     ch++;
//     printf("\n");
// }
// return 0;
// } 

/*Q.12) Write a program to print the following pattern on the console:
                         *****
                         ****
                         ***
                         **
                         * */ 

// #include<stdio.h>

// int main(){ 
// for(int row=5;row>=1;row--){
//     for(int col=1;col<=row;col++){
//         printf("*");
//     } 
//     printf("\n");
// }
// return 0;
// } 

/*Q.13) Write a program to print the following pattern on the console:
                         A
                         BB
                         CCC
                         DDDD
                         EEEEE */ 

// #include<stdio.h>

// int main(){ 
// char ch='A';
// for(int row=1;row<=5;row++){
//     for(int col=1;col<=row;col++){
//         printf("%c",ch);
//     } 
//          ch++;
//     printf("\n");
// }
// return 0;
// } 
/*Q.14) Write a program to add first 10 natural numbers using while loop.*/ 

// #include<stdio.h>

// int main(){ 
// int n=10,i=1,sum=0;
// while(i<=10){
//     sum = sum + i;
//     i++;
// } 
// printf("The sum is: %d\n",sum);
// return 0;
// } 

/*Q.15) Repeat the above question using do-while loop. */ 

// #include<stdio.h>

// int main(){ 
// int n = 10,i=1,sum=0; 
// do{ 
//     sum = sum + i; 
//     i++;
// }while(i<=n); 
// printf("The sum is: %d\n",sum);
// return 0;
// } 

/*Q.16) Write the prime number problem using while loop.*/ 

// #include<stdio.h>

// int main(){ 
// int a,i =2,isprime = 1;
// printf("Enter the Number:\n");
// scanf("%d",&a);
// if(a<=1){
//     printf("The Entered number is not a prime number.\n");
//     return 0;
// } 
// while(i<a){
//     if(a%i==0){
//         isprime=0;
//         break;
//     } 
//     i++;
// } 
// if(isprime){
//     printf("The Entered Number is Prime Number.\n");
// } 
// else{
//     printf("The Entered number is not prime number.\n");
// }
// return 0;
// } 

/*Q.17) Write a program to print the sum of all the numbers occuring in the multiplication
table of any number..*/ 

// #include<stdio.h>

// int main(){ 
// int n,sum=0;
// int mult[10];
// printf("Enter the number:\n");
// scanf("%d",&n);
// for(int i=0;i<10;i++){
// mult[i] = i+1;
// } 
// for(int i = 0 ;i<10; i++){
//     mult[i]=mult[i]*n; 
//     sum = sum + mult[i];
// } 
// printf("The value of sum is: %d\n",sum);
// return 0;
// } 

/*Q.18) Write a program to calculate the factorial of a program using while loop.*/

// #include<stdio.h>

// int main(){ 
// int i = 0, n,fact = 1;
// printf("Enter the number:\n");
// scanf("%d",&n);
// while(i<n){
//     fact = ((fact) * (n-i));
//     i++;
// } 
// printf("Factorial is: %d\n",fact);
// return 0;
// } 

/*Q.19) Write the prime number program using do-while loop.*/ 

// #include<stdio.h>

// int main(){ 
// int a, i=2,isprime=1;
// printf("Enter the number:\n");
// scanf("%d",&a);
// if(a<=1){
//     printf("The entered number is not a prime number.\n");
//     return 0;
// }  
// if(a==2){
//     printf("The Entered number is a prime number.\n");
// }
// do{ 
//     if(a%i==0){
//         isprime=0;
//         break;
//     } 
//     i++;
// }while(i<a); 
// if(isprime){ 
//     printf("The Entered number is prime number.\n");
// }
// else{
//     printf("The Entered number is not a prime number.\n");
// }
// return 0;
// }