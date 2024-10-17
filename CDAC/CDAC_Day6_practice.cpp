/*Q.1) Write a CPP program to demonstrate static function and keyword.*/ 
//  #include<iostream>
// using namespace std;
// class MyClass{
//     static int count;
//     public:
//     MyClass(){ 
//         cout<<"Inside Default constructor."<<endl; 
//         count++;
//     }
//     MyClass(int, int); 
//     void display(){
//         cout<<"The value inside count is"<<" "<<count<<endl;
//     } 
//   static void Staticfunction(){
//   cout<<"Static Function is called by static object"<<endl; 
//    }
// }; 
// int MyClass::count;
// MyClass::MyClass(int a, int b){
//     cout<<"Inside Parameterized constructor."<<endl;
//     count++;
// } 

// int main(){
// MyClass m1,m2(3,4);
// m1.display(); 
// static MyClass m3;
// m3.Staticfunction();
// m3.display();
// return 0;
// }  

/*Q.1 indicates that a static object like m3 can access both static and non-static 
functions. But static member  functions like "staticfunction" cannot access or modify
non-static objects unless they are explicitly passed as function arguments. The Program 
given below demonstrates this very well.*/ 

// #include<iostream>
// using namespace std;
// class Myclass{
//     static int count;
//     public:
//     Myclass(){
//     cout<<"Inside Default constructor."<<endl;
//     count++; 
//     }
//     void display(){
//         cout<<"The value of count is"<<" "<<count<<endl;
//     } 
//     Myclass(int,int){
//         cout<<"Inside Parameterized Constructor."<<endl; 
//         count++;
//     } 
//     static void staticfunction(Myclass&obj){
//         obj.display();
//         cout<<"Static function accessed non-static member function."<<endl;
//     }

// }; 
// int Myclass:: count;
// int main(){
// Myclass m1,m2(2,4); 
// m1.display();
// static Myclass m3;
// Myclass::staticfunction(m1);
// m3.display();
// return 0;
// }

/*Q.2) Complex Number program using parameterized consturctor.*/ 

// #include<iostream>
// using namespace std;
// class Complex{
//     int real,img;
//     public:
//     void setdata(){
//     cout<<"Enter the real and imaginary part"<<endl;
//     cin>>real>>img; 
//     }  
//     void getdata(){
//         cout<<"The complex number is:"<<" "<<real<<" "<<"+"<<img<<"i"<<endl;
//     } 
//     Complex(){}; 
//   Complex(int , int );

// }; 
// Complex::Complex(int a, int b){
//     real = a;
//     img = b;  
//     cout<<"The complex Number is:"<<real<<" "<<"+"<<img<<"i"<<endl;
//   }
// int main(){
// Complex c1; 
// c1.setdata();
// c1.getdata();

// Complex c2(2,3);


// return 0;
// } 

/*Q.3) Complex Number program*/ 
  
// #include<iostream>
// using namespace std;
// class complex{
//     int real,img;
//     static int count;
//     public:
//     void setdata(){
//         cout<<"Enter real and imaginary parts:"<<endl;
//         cin>>real>>img;
//     } 
//   void show(){
// cout<<"The complex number is:"<<" "<<real<<"+"<<img<<"i"<<" "<<" The count is:"<<count<<endl;
//   } 

//   static int getcount(){
//     count = 5;
//     return count;
//   }
// }; 
// int complex:: count;

// int main(){
// complex c1;
// c1.setdata();
// c1.show();
// cout<<"The value of count is:"<<c1.getcount()<<endl;
// return 0;
// } 

/* In the above program show() function was called before getcount() function so the 
show function displays the value of count as 0. And then when getcount() function is 
called the value of count is set to 5.*/ 

/*Q.4) Another complex number problem*/ 

// #include<iostream>
// using namespace std;
// class complex{

//     int real,img; 
//     static int count;
//     public:
//     complex(){
//         real = 10;
//         img = 20;
//         cout<<"The complex number is:"<<" "<<real<<"+"<<img<<"i"<<endl;
//         count++;
//     }
//     complex(int r,int i){
//         real = r;
//         img = i;  
    
// cout<<"The complex number is:"<<" "<<real<<"+"<<" "<<img<<"i"<<endl;
//         count++;
//     } 
// static int getcount(){
//     return count;
// }
// }; 
// int complex:: count;
// int main(){
// complex c1,c2; 
// complex c3(2,3); 
// cout<<"The value of count is:"<<complex::getcount()<<endl;
// return 0;
// } 

/*Q.5) Find the output of this program*/ 

// #include<iostream>
// using namespace std;
// class item
// {
// public:
// 	static int x;
// 	int number;
// public:
// 	void getdata(int a)
// 	{
// 		number=a;
// 		number++;
// 		x++;
// 	}
// 	void getcount()
// 	{
// 		x=10;
// 		cout<<"value is "<<x<<endl;
// 	}
// 	void getcount_1()
// 	{
// 		x++;
// 		cout<<"value is  "<<number<<endl;
// 		cout<<"value is "<<x<<endl;
// 	}
// };
// int number=9;
// int item::x;
// int main()
// {
// 	item a;
// 	a.getcount();
// 	a.getdata(100);
// 	a.getcount_1();
// 	cout<<number<<endl;
// 	cout<<a.number;
// } 

// Correctly found the output of this program 

/*Q.6) Function Overloading program 1*/ 

// #include<iostream>
// using namespace std;
// int sum(int,int);
// int sum(int ,int, int);
// int main(){
// int a = 5, b = 6, c = 7;
// sum(a,b);
// sum(a,b,c); 
// cout<<"The sum of a and b is:"<<" "<<sum(a,b)<<endl;
// cout<<"The sum of a, b and c is:"<<" "<<sum(a,b,c)<<endl;
// return 0;
// } 
// int sum(int c, int d){
//     return c+d;
// } 
// int sum(int e, int f, int g){
//     return e+f+g;
// } 

/* In the above program the sum() function is overloaded because the number of arguments
is different in both the function declarations.*/ 

/*Q.7) Function overloading program 2*/ 

// #include<iostream>
// using namespace std;
// int mult(int,int);
// //float mult(int,int); --> This line gives error because we cannot overload functions
//                             // based on return type 
// int mult(float,float);                            
// int main(){
// int i = 3, j = 5;
// float g = 5.66f, h = 6.77f;
// mult(i,j);
// mult(g,h);
// cout<<"The product of i and j is:"<<mult(i,j)<<endl;
// cout<<"The product of g and h is:"<<mult(g,h)<<endl;
// return 0;
// } 
// int mult(int d, int e){
//     return d*e;
// } 
// int mult(float v, float w){
// return v*w;
// } 

/*In the above program function mult() is overloaded because in both the function 
declarations the types of arguments accepted by both the functions is different.*/ 

/*Q.8) Function overloading program 3*/ 

// #include<iostream>
// using namespace std;
// float sum(float ,float );
// float sum(float , float );
// int main(){
// float i = 5.67f, j = 4.56f, g = 6.87f,h = 9.87f;
// sum(i,j);
// sum(g,h);
// cout<<"The sum of i and j is:"<<" "<<sum(i,j)<<endl;
// cout<<"The sum of g and h is:"<<" "<<sum(g,h)<<endl;

// return 0;
// } 
// float sum(float a, float b){
//     return a+b;
// }  

/*Q.9) Program to understand how function overloading works.*/ 

// #include<iostream>
// using namespace std;
// void overloadedfunction(int);
// void overloadedfunction(double);
// int main(){
// char ch = 'A'; 
// float r = 4.56f;
// overloadedfunction(ch);
// overloadedfunction(r);

// return 0; 
// } 
// void overloadedfunction(int a){
//     cout<<"Function with integer argument:"<<" "<<a<<endl;
// } 
// void overloadedfunction(double a){
//     cout<<"Function with double argument:"<<" "<<a<<endl;
// } 

/*In the program given above a character and a float value is passed to the "overloaded
function". The compiler first looks for a function that takes character and float
arguments respectively (i.e, the compiler tries to find a function definition that exactly
matches the passed function arguments.), but the compiler can't find an exact match, so
it promotes the character argument to an integer argument and the float argument to a 
double argument. This promotion is allowed but the converse is not true.*/  


/* Explaination regarding "this" pointer: 
When an object is created in C++, each such object gets its own copy of the non-static 
instance variables. These instance variables are stored in memory locations specific to 
that object.
      When an object is used to call a non-static member function, the compiler 
implicitly passes a pointer to that object (referred to as the "this" pointer) to the 
member function. This "this" pointer allows the member function to access and modify 
the instance variables of the object that invoked the function.
  
Detailed Breakdown:

Instance Variables (Non-Static):
Each object of a class has its own copy of the non-static instance variables. 
These variables are unique to each object and are stored separately in memory.

Static Variables:
Static variables, on the other hand, are shared among all objects of the class. There 
is only one copy of a static variable, no matter how many objects are created.

"this" Pointer:
In every non-static member function, there is an implicit parameter called "this". The 
"this" pointer holds the address of the object that called the member function. It allows
 the function to know which specific object's instance variables to access or modify.

Function Call Mechanism:
When you call a non-static member function on an object, the compiler passes the 
address of the calling object (this) to the function. The function then uses this 
pointer to work with the object's instance variables. 

 The "this" pointer is a constant pointer. The this pointer is of type MyClass* const, 
 meaning it is a constant pointer to an object of type MyClass. 
*/

//Q,10) Code example: 

// #include <iostream>
// using namespace std;

// class MyClass {
// private:
//     int instanceVar;

// public:
//     MyClass(int val) : instanceVar(val) {}

//     void display() {
//         // 'this' is implicitly passed to 'display()'
//         cout << "Instance variable value: " << this->instanceVar << endl;
//     }

//     void modify(int newVal) {
//         // Using 'this' to modify the instance variable of the calling object
//         this->instanceVar = newVal;
//     }
// };

// int main() {
//     MyClass obj1(10);  // Object obj1 with instanceVar = 10
//     MyClass obj2(20);  // Object obj2 with instanceVar = 20

//     obj1.display();  // Output: Instance variable value: 10
//     obj2.display();  // Output: Instance variable value: 20

//     obj1.modify(100);  // Modifies instanceVar of obj1
//     obj1.display();    // Output: Instance variable value: 100
//     obj2.display();    // Output: Instance variable value: 20

//     return 0;
// }  

/* Q.11) Another program of "this" pointer.*/ 

// #include<iostream>
// using namespace std;
// class test{
//     int a,b; 
//     public:
//     void show(){
//         a = 10;
//         b = 20;
//     cout<<"The address of object t1 is:"<<" "<<this<<endl;
//     cout<<"The values of a and b are:"<<" "<<this->a<<" "<<(*this).b<<endl;
//     }
// };  // Here I can write }t1; and comment out the line where i have declared t1 in main()
// int main(){ // method and the output of the program remains the same.
// test t1;
// cout<<"The address of object t1 is:"<<" "<<&t1<<endl;
// t1.show();
// return 0;
// }  

/*Q.12) Another program of "this" pointer.*/ 

// #include<iostream>
// using namespace std;
// class Myclass{
//     private:
//     float a,b;
//     public:
//     void setdata(float a, float b){
//      (*this).a = a;
//       this->b = b;
//     } 
// void display();
// }t1; 
// void Myclass::display(){
//     cout<<"The values of a and b are:"<<" "<<a<<" "<<"and"<<" "<<b<<endl;
// }
// int main(){
//     t1.setdata(4.55f, 6.78f); 
//     t1.display();
// } 

/*
 Here the data members (i.e, the private variables) and the local variables declared 
in setdata() function have the same name so, that is why we used the "this" pointer
to assign the values passed to the local variables to the data members. If we had not 
done so the local variables a and b (which are parameters of the setdata function) would
 be assigned to themselves, and the instance variables a and b of the class would 
 remain uninitialized or retain their previous values. 

 Since the instance variables a and b would remain uninitialized (and their values 
 would be undefined in a real scenario), the cout statement inside display() would 
 likely print garbage values (undefined behavior) or possibly zeros if the variables 
 are zero-initialized by the compiler (but this isn't guaranteed).
*/

/*Q.13) Another program using this pointer */ 

// #include<iostream>
// using namespace std;
// class date{
//     private:
//     int dd,mm,yy;
//     public:
//     date(){
//     this->dd=this->mm=this->yy = 0; 
//     }
//     date(int a, int b, int c){
//         this->dd = a;
//         this->mm = b;
//         this->yy = c;
//      } 
// void display(){
//     cout<<"The date is:"<<" "<<dd<<"/"<<mm<<"/"<<yy<<endl;
// }
// } d1(1,2,1999); 
// int main(){
 
// d1.display();
// return 0;
// }






