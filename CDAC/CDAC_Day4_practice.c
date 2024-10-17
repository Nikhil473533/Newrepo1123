/*A simple c program to understand Bubble Sort.*/

// #include <stdio.h>

// // Function to perform bubble sort
// void bubbleSort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n-1; i++) {
//         // Last i elements are already in place
//         for (j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 // Swap arr[j] and arr[j+1]
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     printf("Unsorted array: \n");
//     printArray(arr, n);

//     bubbleSort(arr, n);

//     printf("Sorted array: \n");
//     printArray(arr, n);
    
//     return 0;
// }

/*Simple c program to demonstrate selection sort.*/  

// #include <stdio.h>

// // Function to perform selection sort
// void selectionSort(int arr[], int n) {
//     int i, j, minIndex, temp;
    
//     // One by one move the boundary of the unsorted part
//     for (i = 0; i < n-1; i++) {
//         // Find the minimum element in the unsorted array
//         minIndex = i;
//         for (j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
        
//         // Swap the found minimum element with the first element
//         temp = arr[minIndex];
//         arr[minIndex] = arr[i];
//         arr[i] = temp;
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     printf("Unsorted array: \n");
//     printArray(arr, n);

//     selectionSort(arr, n);

//     printf("Sorted array: \n");
//     printArray(arr, n);
    
//     return 0;
// }

/*A simple Employee Structure*/ 

// #include<stdio.h> 
// #include<string.h>
// typedef struct Employee{
// int code;
// float salary;
// char name[10]; 
// }emp; 
// int main(){ 
// emp e1,e2,e3;
// e1.code = 100;
// e1.salary = 4567.89f;
// strcpy(e1.name,"Nikhil");
// printf("Code of the employee is: %d\n",e1.code);
// printf("Salary of the employee is: %.2f\n",e1.salary);
// printf("Name of the employee is: %s\n",e1.name);
// return 0;
// }

/*The Same program can be written in slightly different way.*/ 

// #include<stdio.h> 
// #include<string.h>
// typedef struct Employee{
//     int code;
//     float salary;
//     char name[17];
// }emp;
// int main(){ 
// emp e1;
// printf("Enter the code of Employee e1:\n");
// scanf("%d",&e1.code);
// printf("Enter the salary of Employee e1:\n");
// scanf("%f",&e1.salary);
//  printf("Enter the name of Employee e1:\n");
// scanf("%s",e1.name);
// printf("The code of employee e1 is: %d\n",e1.code);
// printf("The salary of employee e1 is: %.2f\n",e1.salary);
// printf("The name of employee e1 is: %s\n",e1.name);

// return 0;
// }

/*In the above code it is not possible to make name a multi word string. That can be 
achieved by the following program. */ 

// #include <stdio.h>
// #include <string.h> // For strcspn function

// typedef struct {
//     int code;
//     float salary;
//     char name[100]; // Assuming the name length to be 100 characters
// } emp;

// int main() {
//     emp e1;
    
//     printf("Enter the code of Employee e1:\n");
//     scanf("%d", &e1.code);
    
//     printf("Enter the salary of Employee e1:\n");
//     scanf("%f", &e1.salary);
    
//     // Clear the input buffer before reading the string
//     getchar();
    
//     printf("Enter the name of Employee e1:\n");
//     fgets(e1.name, sizeof(e1.name), stdin);
    
//     // Remove the newline character if present
//     e1.name[strcspn(e1.name, "\n")] = '\0';
    
//     printf("Code of the employee is: %d\n", e1.code);
//     printf("Salary of the employee is: %.2f\n", e1.salary);
//     printf("Name of the employee is: %s\n", e1.name);
    
//     return 0;
// } 
/*Using the below program wee can enter the code for 100 employees  */

// #include<stdio.h>
// typedef struct Employee{
//     int code;
//     float salary;
//     char name[10];
// }emp;
// int main(){ 
// emp facebook[100];
// for(int i = 0; i<100;i++){
// //     printf("Enter the code:\n");
// //     scanf("%d",&facebook[i].code);
// facebook[i].code = i;
// printf("%d\n",facebook[i].code);
// }
// return 0;
// }

/*Initialization of arrays*/ 
// #include<stdio.h>
// typedef struct Employee{
//     int code;
//     float salary;
//     char name[10];
// }emp;
// int main(){ 
// emp e1 = {100,345.67,"Nikhil"}; 
// emp e2 = {};// All the elements of variable e1 are initialized to 0.
// printf("The Name of the Employee is: %s\n",e1.name);
// printf("The code of the Employee is: %d\n",e1.code);
// printf("The salary of the Employee is: %.2f\n",e1.salary);

// printf("The Name of the Employee is: %s\n",e2.name);
// printf("The code of the Employee is: %d\n",e2.code);
// printf("The salary of the Employee is: %.2f\n",e2.salary);

// return 0;
// }

/*Pointers to Structures*/ 

// #include<stdio.h>
// typedef struct Employee{
//     int code;
//     float salary;
//     char name[10];
// }emp;
// int main(){ 
// emp e1; 
// emp*ptr = &e1;
// //ptr = &e1; 
// (*ptr).code=100; // Here (*ptr)=e1 so (*ptr).code is same as e1.code
// printf("%d\n",e1.code);
// return 0;
// } 

/*Here we can also use arrow operator instead of writting (*ptr) as follows */ 

// #include<stdio.h>
// typedef struct Employee{
// int code;
// float salary;
// char name[10];
// }emp;
// int main(){ 
// emp e1;
// emp*ptr = &e1;
// ptr->code = 100;
// printf("Code is: %d",ptr->code);
// return 0;
// } 

/*Passing structure to a function.*/ 

// #include<stdio.h> 
// #include<string.h>
// typedef struct Employee{
// int code;
// float salary;
// char name[10];
// }emp; 
// void structure(emp);
// int main(){ 
// emp e1; 
// e1.code =100;
// e1.salary= 345.67;
// strcpy(e1.name,"Nikhil");
// structure(e1);
// return 0;
// } 
// void structure(emp a){
// emp*ptr;
// ptr = &a;
// printf("The code is: %d\n",ptr->code);
// printf("The salary is: %.2f\n",ptr->salary);
// printf("The name is: %s\n",ptr->name);
// }