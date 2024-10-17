/*Find out which number is the biggest of the three numbers using ternary operators.*/
// #include<stdio.h>

// int main(){
// int a = 4,b = 5,c = 6;
// (a>b&&a>c) ? printf("a is the biggest number."): printf("a is not the biggest number.");
// return 0;
// }

// #include<stdio.h>

// int main(){
//     int a = 4, b = 5, c = 6;
//     int biggest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//     printf("The biggest number is %d.\n", biggest);
//     return 0;
//}
/* Genreal program when the values of a, b and c are not known
#include<stdio.h>

int main(){
    int a, b, c;

    // Prompt the user to enter values for a, b, and c
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Determine the biggest number
    int biggest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Print the biggest number
    printf("The biggest number is %d.\n", biggest);

    return 0;
}
*
// #include <stdio.h>
// int a = 5;
// void show();
// int main()
// {
//     int a = 4;
//     printf("The value of a is: %d\n", a);
//     show();
//     return 0;
// }
// void show()
// {
//     printf("The value of a is: %d\n", a);
// } 

/*Program to add first 10 natural Number.*/ 

// #include<stdio.h>

// int main(){ 
// int n,sum =0;
// printf("Enter the number:\n");
// scanf("%d",&n);
// for(int i = 1; i<=n ; i++){ 
// sum = sum + i;
// } 
// printf("The summation is: %d\n",sum);

// return 0;
// } 

/*Write a program to print factorial of a number.*/ 

// #include<stdio.h>

// int main(){ 
// int n,fact = 1;
// printf("Enter the number:\n");
// scanf("%d",&n);
// for(int i = 0 ; i<n ; i++){
//     fact = fact * (n-i);
// } 
// printf("The Factorial of the number is: %d\n",fact);
// return 0;
// }  

/*Write a program to print even numbers between 1 to 20 using continue keyword.*/ 

// #include<stdio.h>

// int main(){ 
// for(int i = 1 ; i<=20 ; i= i+1){
//    if(i%2!=0){
//     continue;
//    } 
//    printf("%d\n",i);
// }
// return 0;
// } 

/*Write a program to print the addition of even and odd numbers between 1 to 20.*/ 

// #include<stdio.h>

// int main(){ 
// int sum1 = 0,sum2 = 0; 
// for(int i = 0; i<= 20; i++){
// if(i%2!=0){
//     sum1 = sum1 +i;
// } 
// else if(i%2==0){ 
//     sum2 = sum2 +i;
// }
// } 
// printf("The sum of the even numbers is: %d\n",sum2);
// printf("The sum of the odd numbers is: %d\n",sum1);

// return 0;
// } 

/*Accept marks of 5 students for 5 subjects and display their respective averages.*/ 

// #include<stdio.h>

// int main(){ 
// int sub1,sub2,sub3,sub4,sub5,sum=0; 
// float avg = 0.00f;
// for(int stdu = 1; stdu<=5; stdu++){ 
//     printf("Enter the marks for five subjects:\n"); 
//     scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5); 
//     sum = sub1+sub2+sub3+sub4+sub5;
//     avg = (float)sum/5; 
//     printf("The Average of %dth student is: %.2f\n",stdu,avg);
// }
// return 0;
// } 

/*The above program can be written using integer arrays as well*/ 

// #include <stdio.h>

// int main() {
//     int marks[5][5]; // 5 students and 5 subjects
//     int sum = 0;
//     float avg = 0.00f;

//     for (int stdu = 0; stdu < 5; stdu++) {
//         printf("Enter the marks for five subjects for student %d:\n", stdu + 1);
//         for (int subj = 0; subj < 5; subj++) {
//             scanf("%d", &marks[stdu][subj]);
//         }
//     }

//     for (int stdu = 0; stdu < 5; stdu++) {
//         sum = 0;
//         for (int subj = 0; subj < 5; subj++) {
//             sum += marks[stdu][subj];
//         }
//         avg = (float)sum / 5;
//         printf("The Average of %dth student is: %.2f\n", stdu + 1, avg);
//     }

//     return 0;
// } 