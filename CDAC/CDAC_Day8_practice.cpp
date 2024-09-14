/*Q.1) Program demonstrating creation of arrays of objects.*/ 

// #include<iostream>
// using namespace std;
// class Employee{
//     int code;
//     float salary;
//     char name[15];
//     public:
//  void setdata(){
//     cout<<"Enter the code, salary and name of the employee:"<<endl;
//     cin>>code>>salary>>name;
//  } 
//  void show(){
//     cout<<"The code of the employee is:"<<code<<endl<<"The salary of the employee is:"
//     <<salary<<endl<<"The Name of the employee is:"<<name<<endl;
//  }
// };
// int main(){
// Employee e1[3];
// for(int i = 0; i<3; i++){
//     e1[i].setdata();
// } 
// for(int i = 0; i<3; i++){
//     e1[i].show();
// }
// return 0;
// } 

/*Q.2) Write a program to pass objects as arguments to functions*/ 

// #include<iostream>
// using namespace std;
// class complex{
//     int real,img;
//     public:
//     complex(){};
//     //complex(int a, int b){};
//    void setdata(int r, int i){
//     real = r;
//     img = i; 
//    cout<<"The complex number is"<<" "<<real<<"+"<<img<<"i"<<endl; 
//    } 
// void setdatabysum(complex i,complex j){
//     real = i.real + j.real;
//     img =  i.img + j.img; 
//     cout<<"The complex number is"<<" "<<real<<"+"<<img<<"i"<<endl;
// }
// };
// int main(){
// complex c1,c2,c3; 
// c1.setdata(2,3);
// c2.setdata(4,5);
// c3.setdatabysum(c1,c2);
// return 0;
// } 

/*Q.3) Simple cpp program to demonstrate the use of friend functions.*/ 

// #include<iostream>
// using namespace std;
// class box{
//     double width;
//     public: 
//   box(double w) : width(w) {}; 
//   friend void show(box);
// }; 
// void show(box c){
//     cout<<"The width is:"<<c.width<<endl;
// }
// int main(){
// box b(10.5);
// show(b);
// return 0;
// } 

/*Q.4) Another program involving friend functions*/ 

// #include<iostream>
// using namespace std;
// class complex{
//     int real,img;
//     public:
//     void setdata(int a,int b){
//         real = a;
//         img = b;
//     } 
//     friend complex sumcomplex(complex, complex); 

//     void printnumber(){
//     cout<<"The Complex Number is:"<<" "<<real<<"+"<<img<<"i"<<endl;
// }
// }; 

// complex sumcomplex(complex f, complex g){
//     complex o3;
//    o3.setdata((f.real+g.real),(f.img+g.img));
//     return o3;
// } 

// int main(){
// complex c1,c2,c3;
// c1.setdata(1,2);
// c2.setdata(3,4); 
// c3 = sumcomplex(c1,c2);
// c3.printnumber();
// return 0;
// }