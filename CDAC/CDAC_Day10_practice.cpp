/* Program to demonstrate dynamic initialization of objects.*/
#include <iostream>
#include<cstring>
using namespace std;
class Test{
  int n;
  int*ptr;
  public:
  Test(){
      cout<<"Enter the number of elements to be entered:"<<endl;
      cin>>n;
      ptr = new int[n];
  }
  void getdata(){
      cout<<"Enter the actual elements:"<<endl;
      for(int i= 0; i<n; i++){
          cin>>ptr[i];
      }
  }
  void putdata(){
      cout<<"Entered elements are:"<<endl;
      for(int i=0 ;i<n; i++){
          cout<<ptr[i]<<" ";
      }
  }
 void max(){
     int m;
     m = ptr[0];
     for(int i =1; i<n;i++){
         if(m<ptr[i]){
             m = ptr[i];
         }
     }
    cout<<"The maximum number in the string is:"<<m<<endl;
 }

 void min(){
     int minimum;
     minimum = ptr[0];
     for(int i =1; i<n; i++){
         if(minimum>ptr[i]){
             minimum = ptr[i];
         }
     }
cout<<"The minimum value is:"<<minimum<<endl;
 }
 ~Test(){
     cout<<"Destructor called !"<<endl;
     if(ptr){
         delete ptr;
     }
 }
};
int main() {
  Test t1;
  t1.getdata();
  t1.putdata();
  t1.max();
  t1.min();
    return 0;
}

/* program to demonstrate copy constructor*/

#include<iostream>
using namespace std;
class temp{
int x,y;
public:
  temp(int x,int y){
    this->x = x;
    this->y = y;
  }
 void display(){
     cout<<"The value of x is:"<<x<<endl;
     cout<<"The value of y is:"<<y<<endl;
 }
};
int main(){
    temp t1(3,4),t2(t1);
    t1.display();
    t2.display();
}

/*In the above program there was no pointer in the class definition nor was there any dynamic initialization of objects. So therfore, in this case we do not have to write the implementation(definition) of a copy constructor. Because the compiler supplied its own copy constructor.*/

/* Another program of copy constructor*/ //Write destructor in this program otherwise there will be memory leakage.
#include<iostream>
#include<cstring>
using namespace std;
class string1{
  int len;
  char*ptr;
  public:
  string1(char*ch){
      len = strlen(ch);
      ptr = new char[len+1];
      strcpy(ptr,ch);
      cout<<"The string is:"<<ptr<<endl;
  }
  string1(string1&s){
      this->len = s.len;
      ptr = new char[this->len+1];
      strcpy(ptr,s.ptr);
      cout<<"The string is:"<<ptr<<endl;
  }
  ~string1(){
      cout<<"Destructor is called !"<<endl;
      if(ptr){
          delete ptr;
      }
  }
};
int main(){
    string1 s1("Hello_World"),s2(s1);
}

/* In the above program we have explicitly written the implementation or definition of the copy constructor, because we have a pointer in the class definition and also dynamic initialization of objects.*/

/* Another program of copy constructor*/

#include<iostream>
using namespace std;
class test{
    int x;
   public:
  void setdata(){
      x =10;
  }
  void show(){
      cout<<"The value of x is:"<<x<<endl;
  }
};
int main(){
    test t1;
    t1.setdata();
    t1.show();
    test t2(t1);
    t2.show();
}

/* In the above program we have not explicitly written the implementation of the copy constructor, and we have directly called it, the compiler in this case hass supplied its own copy constructor and made a shallow copy of the attributes of the first object. */
