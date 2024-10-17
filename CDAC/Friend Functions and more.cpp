/* Simple program to demostrate the working of friend functions */

//#include<iostream>
//using namespace std;
//class Car 
//{ 
//int i; 
//protected:
//float t;
//public:
//Car()
//{ 
//i = 10; 
//t = 6.78f;
//} 
//friend class Sedan;
//}; 
//class Sedan 
//{ 
//public:
//	void display(Car&r)
//	{
//		cout<<"The value of private variable i is:"<<" "<<r.i<<endl;
//		cout<<"The value of protected variable t is:"<<" "<<r.t<<endl;
//	}
// }; 
//int main()
//{ 
//Car obj;
//Sedan obj2;
//obj2.display(obj);
//return 0;
//} 

/* Friend function as a global function*/

//#include<iostream>
//using namespace std;
//class Father 
//{ 
//int g;
//protected:
//float r; 
//public:
//Father() 
//{ 
//g  = 78; 
//r = 7.65f;
//} 
//friend void Child(Father&);
//}; 
//void Child(Father& r)
//{
//cout<<"The value of private member g is:"<<" "<<r.g<<endl;
//cout<<"The value of protected member r is:"<<" "<<r.r<<endl;	
//}
//int main() 
//{  
//Father f1;
//Child(f1);
//return 0;
//} 

/* Member function of another class as a friend class*/ 

//#include<iostream>
//using namespace std;
//class India;
//class Country
//{ 
//public:
// void show(India&);
//}; 
//class India 
//{ 
//int y;
//protected:
//float f;
//public:
//India() 
//{ 
//y = 9;
//f = 8.76f;
//} 
//friend void Country::show(India&); 
//}; 
//void Country::show(India&s) 
//{ 
//cout<<"The value of private member y is:"<<" "<<s.y<<endl;
//cout<<"The value of protected member f is:"<<" "<<s.f<<endl;
//} 
//int main() 
//{ 
//India i1;
//Country c1;
//c1.show(i1);
//return 0;
//} 

/* Example: */ 

//#include<iostream> 
//using namespace std;
//class Box 
//{  
//int length;
//public:
//Box() 
//{ 
//length = 5;
//}
//friend int printlength(Box&);
//}; 
//int printlength(Box& c) 
//{ 
//c.length += 10; 
//return c.length; 
//} 
//int main() 
//{ 
//Box f;
//cout<<"The length of the box is:"<<printlength(f)<<endl;
//return 0;
//}
 
/* Friend function friendly with two classes */ 

//#include<iostream> 
//using namespace std;
//class Mercedes;
//class Car 
//{ 
//int g;
//public:
//Car() 
//{
//	g = 19;
//} 
//friend void driver(Car,Mercedes); //Here we can also write friend void driver(Mercedes&, Car&);
//}; 
//class Mercedes
//{
//int f;
//public: 
//Mercedes()
//{ 
//  f = 34;
//}	
//friend void driver(Car,Mercedes); //Here we can also write friend void driver(Mercedes&,Car&)
//};
//void driver(Car c,Mercedes m) //Here we can also write void driver(Mercedes&, Car&){ }
//{ 
//cout<<"The value of private variable g is:"<<" "<<c.g<<endl;
//cout<<"The value of protected variable d is:"<<" "<<m.f<<endl;
//}
//int main() 
//{ 
//Car c1;
//Mercedes m1;
//driver(c1,m1);
//	return 0;
//} 
//
///* The above program can be written with '&' format specifier*/ 
//
//#include<iostream> 
//using namespace std;
//class Mercedes;
//class Car 
//{ 
//int g;
//public:
//Car() 
//{
//	g = 19;
//} 
//friend void driver(Car&,Mercedes&);
//}; 
//class Mercedes
//{
//int f;
//public: 
//Mercedes()
//{ 
//  f = 34;
//}	
//friend void driver(Car&,Mercedes&);
//};
//void driver(Car& c,Mercedes& m) 
//{ 
//cout<<"The value of private variable g is:"<<" "<<c.g<<endl;
//cout<<"The value of protected variable d is:"<<" "<<m.f<<endl;
//}
//int main() 
//{ 
//Car c1;
//Mercedes m1;
//driver(c1,m1);
//	return 0;
//} 

/* Adding values of attributes of different  classes using friend functions and 
initializer list */ 

//#include<iostream>
//using namespace std;
//class Intel;
//class Proccessor
//{ 
//private:
//int a;
//public:
//Proccessor() : a(10) {} 
//friend int add(Proccessor,Intel);
//};
//class Intel
//{ 
//private:
//	int b;
//	public:
//	Intel() : b(30) {} 
//friend int add(Proccessor, Intel);
//}; 
//int add(Proccessor s, Intel t)
//{
//	return s.a + t.b; 
//} 
//int main(){
//
//Proccessor p1;
//Intel i1; 
//int c;
//c = add(p1,i1);
//cout<<c<<endl; 
//}

/* Program to swap two values using friend functions. */

/*
#include <iostream>
using namespace std;
class Swap
{
int a, b,temp;
public:
Swap()
{
    a = 23;
    b = 46;
    temp = 0;
}
friend void trueswap(Swap&);
};
 void trueswap(Swap&obj)
{
cout<<"Objects before swapping:"<<" "<<obj.a<<" "<<"and"<<" "<<obj.b<<endl;
 obj.temp = obj.a;
 obj.a = obj.b;
 obj.b = obj.temp;
 cout<<"Objects after swapping:"<<" "<<obj.a<<" "<<"and"<<" "<<obj.b<<endl;
    }
int main() {
Swap s1;
trueswap(s1);
    return 0;
} */

/* Another approach for the same program. */

// #include<iostream>
// using namespace std;
// class Swap
// {
//   int a;
//   public:
//   Swap() : a(10) {}
//   Swap(int num)
//   {
//       a = num;
//   }
//  friend void trueswap(Swap&, Swap&);
// };
// void trueswap(Swap& d, Swap& f)
// {
// cout<<"The values before swapping:"<<" "<<d.a<<" "<<"and"<<" "<<f.a<<endl;
//     int temp = 0;
//     temp = d.a;
//     d.a = f.a;
//     f.a = temp;
//    cout<<"The values after swapping:"<<" "<<d.a<<" "<<"and"<<" "<<f.a<<endl;
// }
// int main()
// {
// Swap obj1(10), obj2(20);
// trueswap(obj1, obj2);
//     return 0;
// }

/* Namespaces */

/* A simple program related to namespaces */

// #include<iostream>
// using namespace std;
// namespace ns1
// {
//     void func1()
//     {
//         cout<<"In func1 of namespace ns1."<<endl;
//     }
// }
// namespace ns2
// {
//     void func1()
//     {
//         cout<<"In func1 of namespace ns2."<<endl;
//     }
// }
// int main()
// {
//    ns1::func1();
//    ns2::func1();
//     return 0;
// }

/* Another program related to namespaces */

// #include<iostream>
// using namespace std;
// namespace sp1
// {
// class Manager
// {
//   int a;
//   public:
//   Manager()
//   {
//       a = 10;
//   }
//   void show(Manager&obj)
//   {
//     obj.a = 90;
//     cout<<"The value of a is:"<<" "<<obj.a<<endl;
//   }
// };
// } // No semicolon after the curly bracket, junst like a func//definition
// using namespace sp1;
// int main()
// {
//     Manager m1,m2;
//     m2.show(m1);  // Here we can also write m1.show(m1); the program won't give any error.'
//     return 0;
// }
/* In the above program we can see that since we have used directive "using namespace sp1" the main() function calls the show() function defined in namespace sp1.*/

/* Nesting of namespaces*/

/*#include<iostream>
using namespace std;
namespace sp1
{
    class Car
    {
      int a;
      public:
      Car()
      {
         a = 10;
      }
     void show()
     {
         cout<<"In show function of namespace sp1."<<endl;
         cout<<"The value of a is:"<<" "<<a<<endl;
     }
    };
    namespace sp2
    {
        class Sedan
        {
          int b;
          public:
          Sedan()
          {
              b = 20;
          }
          void show()
          {
              cout<<"In show function of namespace sp2."<<endl;
              cout<<"The value of b is:"<<" "<<b<<endl;
          }
        };
    }
}
using namespace sp1::sp2; // This line gives us access to namespace sp2
int main()                // when writting the name of the second namespace we have not used the keyword
{                         // "namespace" again
    Sedan s1;
    s1.show();
    return 0;
}*/

/* The output of the above program is:
 *
In show function of namespace sp2.
The value of b is: 20
*/

/* In the above program we can also access a which is an attribute of class Car. Here is how the program would looks like. */

 // #include<iostream>
// using namespace std;
// namespace sp1
// {
//     class Car
//     {
//       int a;
//       public:
//       Car()
//       {
//          a = 10;
//       }
//      void show()
//      {
//          cout<<"In show function of namespace sp1."<<endl;
//          cout<<"The value of a is:"<<" "<<a<<endl;
//      }
//     };
//     namespace sp2
//     {
//         class Sedan
//         {
//           int b;
//           public:
//           Sedan()
//           {
//               b = 20;
//           }
//           void show()
//           {
//               cout<<"In show function of namespace sp2."<<endl;
//               cout<<"The value of b is:"<<" "<<b<<endl;
//           }
//         };
//     }
// }
// using namespace sp1; // This line gives us access to namespace sp1
// int main()
// {
//     Car c1;
//     c1.show();
//     return 0;
// }

/* Defining a function outside a namespace. */
/*
#include<iostream>
using namespace std;
namespace ns1
{
    class greek;
}
class ns1::greek
{
    int i;
    public:
    greek() : i(10) {}
    void show()
    {
        cout<<"The value of i is:"<<" "<<i<<endl;
    }
};
int main()
{
    ns1::greek g1;
    g1.show();
    return 0;
}*/

/* Declaring methods outside the namespace.*/
// #include<iostream>
// using namespace std;
// namespace ns1
// {
// void show(); // not a method of class A
//     class A
//     {
//       int a;
//       public:
//       A() : a(10) {}
//       void show(); // Is a method of class A
//     };
// }
// void ns1:: A::show()
// {
//     cout<<"The value of a is:"<<" "<<a<<endl;
// }
// void ns1:: show()
// {
//     cout<<"ns1::show()"<<endl;
// }
// int main()
// {
//     ns1::A obj1;
//     ns1::show();
//     obj1.show();
//     return 0;
// }
/* The ouyput of the program is:

 ns1::show()
The value of a is: 10
 */

