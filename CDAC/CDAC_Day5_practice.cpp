/*Q.1) Write a cpp program to print date on the console. Take the day, month and year
as input from the user.*/
// #include<iostream>
// using namespace std;
// class MyDate{
//     int dd,mm,yy;
// public:
// void setdate(int a, int b, int c){
//   dd = a;
//   mm = b;
//   yy = c;
// } 
// void getdate();
// }; 
// void MyDate::getdate(){
//     cout<<"The date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
// }
// int main(){
// MyDate d1; 
// d1.setdate(1,2,1999);
// d1.getdate();
// return 0;
// } 

//Another way of writting the same program 

// #include<iostream>
// using namespace std;
// class MyDate{
//     int dd,mm,yy;
//     public:
//     void setdate(){
//         cout<<"Enter the date:"<<endl;
//         cin>>dd>>mm>>yy;
//     }
//   void getdate(){
//     cout<<"The date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
//   } 
//   void changeday(int); 
//   void display();
// }; 
// void MyDate:: changeday(int a){
//    dd = a;
// } 
// void MyDate::display(){
//     cout<<"The changed day is:"<<dd<<endl;
// }
// int main(){
// MyDate d2;
// d2.setdate();
// d2.getdate();
// d2.changeday(12);
// d2.display();
// return 0;
// } 

/*Q.2) Write a cpp program to display a complex number using functions.*/ 

// #include<iostream>
// using namespace std;
// class Complex{
//     int real,img;
//     public:
//     void setdata(){
//         cout<<"Enter the real and imaginary part:"<<endl;
//         cin>>real>>img;
//     } 
//    void getdata(); 
//    void changeimg(int);
// }; 
// void Complex::getdata(){
//     cout<<"The complex Number is:"<<real<<"+"<<img<<"i"<<endl;
// } 
// void Complex:: changeimg(int c){
//        img = c; 
//        cout<<"The changed imaginary part is:"<<img<<endl;
// }
// int main(){
// Complex a;
// a.setdata();
// a.getdata();
// a.changeimg(5);
// return 0;
// }  

/*Q.3) Write a swap function in cpp format to swap two values. */ 

// #include<iostream>
// using namespace std;
// void swap(int*,int*);
// int main(){
// int a = 10, b = 20;
// cout<<"The value before swap is:"<<" "<<a<<"and"<<" "<<b<<endl;
// swap(&a,&b); 
// cout<<"The value after swap is:"<<" "<<a<<"and"<<" "<<b<<endl;
// return 0;
// }
// void swap(int*i,int*j){
//     int temp;
//     temp = *i;
//     *i = *j;
//     *j = temp;
// } 

/*Q.4) Show that a constant object can only call a  constant function. */ 

// #include<iostream>
// using namespace std;
// class Man{
// int i ;
// public: 
// int n;
// Man(int val) : n(val) {} // 
// int geti(int)const;
// void printi();
// }; 
// int Man::geti(int a)const{
//     int i = a; 
//     return i;
// }
// int main(){
// const Man obj(10);
// obj.geti(5); 
// cout<<obj.geti(5)<<endl;
// return 0;
// }

/*Q.5) Write a program using Boolean Datatype.*/ 

// #include<iostream>
// using namespace std;

// int main(){

// bool iscodingfun = true;

// bool isfishtasty = false; 

// cout<<iscodingfun<<endl;
// cout<<isfishtasty<<endl;
// return 0;
// } 

/*Q.6) Write a simple program of refrence variables.*/ 

// #include<iostream>
// using namespace std;
// void swap(int&,int&);
// int main(){

// int a = 5, c =4;
// int &b = a; // If we comment out int &b = a and int &d = c and pass variables
// int &d = c; // a and c to the swap function program still works.
// cout<<"Values of a and c before swapping:"<<a<<" "<<"and"<<" "<<c<<endl;
// swap(a,c); // swap(b,d) produces the same output
// cout<<"Values of a and c after swapping:"<<a<<" "<<"and"<<" "<<c<<endl;
// return 0;
// } 
// void swap(int&h,int&j){ 
// int temp;
// temp = h;
// h=j;
// j=temp;
// }

/*Q.7) Write a cpp program to demonstrate inline function.*/

// #include<iostream>
// using namespace std;
// inline int product(int, int);
// int main(){
// int a = 4, b = 5;
// cout<<"The product of a and b is"<<" "<< product(a,b)<<endl;
// return 0;
// } 
// inline int product(int c, int d){
//     return c*d;
// } 

/*Another inline function problem*/ 

// #include<iostream>
// using namespace std;
// inline int square(int);
// int main(){
// int num = 18;
// cout<<"Square of number"<<num<<"is"<<" "<<square(num)<<endl;
// return 0;
// } 
// inline int square(int a){
//     return a*a;
// } 

/*Q.8) Write a cpp program to demonstrate that static objects can also call non-static 
member functions.*/ 

// #include<iostream>
// using namespace std;
// class Myclass{ 
//     public:
//     static void staticFunction(){
//     cout<<"Static Function is called."<<endl;
//     } 

//     void nonStaticFunction(){
//         cout<<"Non-static Function is clled"<<endl;
//     }
// };
// int main(){
// static Myclass obj;
// obj.staticFunction(); 
// obj.nonStaticFunction();

// return 0;
// } 

/*Q.9) Since static member functions are attributes of the whole class rather than 
a single object, so they can be called without the need to create any object.
Write a program to demostrate this fact.*/ 

// #include<iostream>
// using namespace std;
// class Myclass{
//     public:
//     static void staticFunction(){
//         cout<<"Static Member Function is called !"<<endl;
//     } 
//     void nonStaticFunction(){
//         cout<<"Non-Static Member Function is called !"<<endl;
//     }
// };
// int main(){
// Myclass::staticFunction(); 
// // The line written below produces an error
// //Myclass::nonStaticFunction();
// return 0;
// } 

