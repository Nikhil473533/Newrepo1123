/* A simple program of adding two numbers of different types using templates.*/
//#include<iostream>
//using namespace std;
//template<class N>
//N sum(N &a, N &b)
//{
//	N result = a+b;
//	return result;
//} 
//int main() 
//{
//	int a = 5,b = 6;
//	float i = 3.4f, j = 4.5f;
//    cout<<"Sum of the two integers is:"<<sum(a,b)<<endl;
//	cout<<"Sum of the two floats is:"<<sum(i,j)<<endl;
//	return 0;
//}  

/* A simple program of comparing two numbers of different types(two are integers and two are floats)using templates.*/
//#include<iostream>
//using namespace std;
//template<class N>
//N myMax(N &a, N&b)
//{
//return a>b ? a:b;	
// } 
//int main()
//{
//	int a = 4, b = 6;
//	float i = 3.45f, j = 4.56f;
//	cout<<"The greatest integer is:"<<myMax<int>(a,b)<<endl;
//	cout<<"The greatest float is:"<<myMax<float>(i,j)<<endl;
//	return 0;
//}

/* Function templates with multiple parametters */
//#include<iostream>
//using namespace std;
//template<class N, class M>
//float sum(N &a, M &b)
//{ 
//    float res = a+b;
//   return res;
//}
//int main() 
//{ 
//int a = 6;
//float b = 6.77f;
//   cout<<sum(a,b);
//	return 0;
//} 

/* Another Example of function template with multiple parameters. */
//#include<iostream>
//using namespace std;
//template<class Employee, class Department>
//float sum(Employee e, Department d)
//{
//    float res = e+d;
//	return res;	
// } 
//int main()
//{ 
//int a;
// float b;
// cout<<"Enter the Integer:"<<endl;
// cin>>a;
// cout<<"Enter the float:"<<endl;
// cin>>b;
// cout<<"The sum is:"<<sum(a,b)<<endl;
//	return 0;
//} 

/* Oveloading a function template */
//#include<iostream>
//using namespace std;
//template<class Car>
//void display(Car c)
//{
//	cout<<"The passsed value is:"<<c<<endl;;
//} 
//template<class Car, class Sedan>
//float mult(Car c, Sedan s)
//{
//	float res = c*s;
//	return res;
//} 
//int main() 
//{
//	display(45);
//	cout<<"The product is:"<<mult(3.45,5)<<endl;
//	return 0;
//} 

/*  Class Template */ 
//#include<iostream>
//using namespace std;
//template<class Fun>
//class Car
//{
//	public:
//	Fun a = 56;
//	Fun b = 67;
//   void sum()
//   {
//   	cout<<"The sum is:"<<a+b<<endl;
//   }
//};
//int main()
//{
//	Car <int>c;
//	c.sum();
//	return 0;
//} 

/* Another example of class template */
//#include<iostream>
//using namespace std;
//template<class Employee>
//class Holiday
//{ 
//private:
//	Employee a;
//	Employee b;
//	public:
//	Holiday() {
//	
//	 a = 45;
//	 b = 67;
//}
//	Employee mult()
//	{
//		Employee c = a*b;
//		return c;
//	}
//};
//int main()
//{
//	Holiday<int> h1;
//	cout<<"The product is:"<<h1.mult();
//	return 0;
//}  

/* Class templates with multiple parameters */
//#include<iostream>
//using namespace std;
//template<class A, class B>
//class X
//{ 
//   
//	A a;
//	B b;
//	public:
//	X(A f, B g)
//	{
//		a = f;
//		b = g;
//	} 
//	void show(){
//	
//	cout<<"The value of a and b is:"<<" "<<a<<" "<<"and"<<" "<<b<<endl;
//}
//};
//int main() 
//{ 
//    X<int,int> a(34,56);
//	return 0;
//}

/* show() method defined outside the class*/
//#include<iostream>
//using namespace std;
//template<class A, class B>
//class X
//{ 
//   
//	A a;
//	B b;
//	public:
//	X(A f, B g)
//	{
//		a = f;
//		b = g;
//	}  
//	void show();
//}; 
//
//template<class A, class B>
//void X<A,B>::show(){
//	
//	cout<<"The value of a and b is:"<<" "<<a<<" "<<"and"<<" "<<b<<endl;
//}
//int main() 
//{ 
//    X<int,int> a(34,56);
//	return 0;
//}

/* Another example of class templates with multiple parameters.*/ 

//#include<iostream>
//using namespace std;
//template<class T>
//class A
//{
//  T a,b;
//  public:
//  	void show(T,T);
//};
//template<class T>
//void A<T>::show(T a, T b)
//{
//	cout<<"The value of a and b is"<<" "<<a<<"and"<<b<<endl;
//}
//int main() 
//{
//	A<int> s;
//	s.show(45,67);
//	return 0;
//} 

/* Using templates to create arrays. */
// #include<iostream>
// using namespace std;
// template<class N, int size>
// class A
// {
//   public:
//   N arr[size];
//   void populate()
//   {
//   for(int i = 0; i<size;i++)
//       arr[i] = i+1;
//   }
//   void display()
//   {
//       for(int i = 0; i<size; i++)
//       {
//           cout<<arr[i]<<" ";
//       }
//   }
// };
// int main()
// {
//     A <int, 10> t1;
//     t1.populate();
//     t1.display();
//     return 0;
// }

#include<iostream>
using namespace std;

template<class N, int size>
class A
{
  public:
    N arr[size];
    void populate();  // Declaration of populate function
    void display();   // Declaration of display function
};


/* It is the same program as above just that in this program we have defined the pouplate and display functions outside the class definition. */
// #include<iostream>
// using namespace std;
//
// template<class N, int size>
// class A
// {
//   public:
//     N arr[size];
//     void populate();  // Declaration of populate function
//     void display();   // Declaration of display function
// };
//
// // Definition of the populate function outside the class
// template<class N, int size>
// void A<N, size>::populate()
// {
//   for(int i = 0; i < size; i++)
//       arr[i] = i + 1;
// }
//
// // Definition of the display function outside the class
// template<class N, int size>
// void A<N, size>::display()
// {
//   for(int i = 0; i < size; i++)
//   {
//       cout << arr[i] << " ";
//   }
// }
//
// int main()
// {
//     A<int, 10> t1;
//     t1.populate();
//     t1.display();
//     return 0;
// }

/* Write a user defined function that is similar to strlen() */
// #include<iostream>
// using namespace std;
// int ustrlen(char*);
// int main()
// {
//     int len;
//     char ch[10];
//     cout<<"Enter the string:"<<endl;
//     cin>>ch;
//     len = ustrlen(ch);
//     cout<<"The length of the string is:"<<" "<<len<<endl;
//     return 0;
// }
// int ustrlen(char*ch1)
// {
//     int len1 = 0;
//    for(int i = 0; ch1[i]!= '\0'; i++)
//    {
//        len1++;
//    }
//     return len1;
// }

/* Write a user defined function that is similar to strcpy() */
// #include<iostream>
// using namespace std;
// void ustrcpy(char*,char*);
// int main()
// {
//     char ch1[10];
//     char ch2[10];
//     cout<<"Enter the string to be copied:"<<endl;
//     cin>>ch1;
//     ustrcpy(ch2,ch1);
//     cout<<"The copied string is:"<<ch2<<endl;
//     return 0;
// }
// void ustrcpy(char*ch3, char*ch4)
// {
//     int i;
//     for( i = 0; ch4[i]!='\0'; i++)
//     {
//         (ch3[i]) = (ch4[i]);
//         }
//      ch3[i] = '\0';
// }


/* Write a user defined function to concatenate two strings*/
// #include<iostream>
// using namespace std;
// void ustrcat(char*, char*);
// int main()
// {
//     char ch1[20];
//     char ch2[10];
//     cout<<"Enter the first string to be concatenated:"<<endl;
//     cin>>ch1;
//     cout<<"Enter the second string to be concatenated:"<<endl;
//     cin>>ch2;
//     cout<<"Before concatenation the string is:"<<ch1<<endl;
//     ustrcat(ch1,ch2);
//     cout<<"String after concatenation:"<<ch1<<endl;
// }
// void ustrcat(char* ch3, char* ch4)
// {
//     int i, j;
//     while(ch3[i]!='\0')
//     {
//         ch3++;
//     }
//     for(j = 0; ch4[i]!='\0'; j++)
//     {
//         ch3[i] = ch4[j];
//         i++;
//     }
//     ch4[j] = '\0';
// }
