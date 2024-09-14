/* Overloading of pre-increment and post-increment operator */
//#include<iostream>
//using namespace std;
//class Complex 
//{
//	int real,img;
//	public:
//		Complex() 
//		{
//			real = img = 0;
//		}
//		Complex(int real, int img) 
//		{
//			this->real = real;
//			this->img = img;
//		} 
//		Complex operator++() 
//		{
//			++this->real;
//			++this->img;
//			return (*this);
//		} 
//		Complex operator++(int)
//		{
//			Complex temp = (*this);
//			++this->real; //++this->real = real; does not give error
//			++this->img;  //++this->img = img; does not give error
//			return temp;
//		} 
//	void display() 
//	{
//		if(img<0)
//		{
//			cout<<"The complex number is:"<<" "<<real<<img<<"i"<<endl;
//		} 
//		else
//		{
//			cout<<"The complex number is:"<<" "<<real<<"+"<<img<<"i"<<endl;
//		}
//	}
//		
//}; 
//int main() 
//{ 
//  Complex c1(2,3);  //if c2 = c1++ is there it is resolved as c2 = c1.operator++(0); "0" is passed by the
//  Complex c2;       //compiler
//  c2 = ++c1; // This call is resolved as c2 = c1.operator++();
//  c1.display(); // c1 is passed implicitly
//  c2.display();
//	return 0;
//} 

/*Overloading of pre-decrement and post-decrement operator*/
//#include<iostream>
//using namespace std;
//class Complex
//{ 
//int real,img;
//public:
//Complex()
//{
//	real = img = 0;
//	}	
//Complex( int real, int img) 
//{
//	this->real = real;
//	this->img = img;
//} 
//Complex operator--() 
//{
//	--this->real;
//	--this->img;
//	return (*this);
//} 
//Complex operator--(int) 
//{   
//     Complex temp = (*this);
//	  --this->real;
//	  --this->img;
//	  return temp;
//} 
//	void display() 
//	{
//		if(img<0)
//		{
//			cout<<"The complex number is:"<<" "<<real<<img<<"i"<<endl;
//		} 
//		else
//		{
//			cout<<"The complex number is:"<<" "<<real<<"+"<<img<<"i"<<endl;
//		}
//	}
//};
//int main() 
//{ 
//  Complex c1(2,3);
//  Complex c2;
//  c2 = --c1;
//  c1.display();
//  c2.display();
//	return 0;
//}

/* Operator overloading of assignment(=) operator= function */
//#include<iostream>
//#include<cstring>
//using namespace std;
//class String1
//{
//  int len;
//  char*ptr;
//  public:
//  String1() 
//  {
//  	cout<<"In default constructor of class String1."<<endl;
//	  }	
//  String1& operator=(String1&s) 
//  {
//  	len = s.len;
//  	delete[]ptr;
//  	ptr = new char[len+1];
//  	strcpy(ptr,s.ptr);
//  	return (*this);
//  } 
//  String1 (char*sptr) 
//  {
//  	len = strlen(sptr);
//  	ptr = new char[len+1];
//  	strcpy(ptr,sptr);
//  } 
//void display()
//{
//	cout<<"The length of the string is:"<<" "<<len<<endl;
//	cout<<"The  string is:"<<" "<<ptr<<endl;
//} 
//~String1() 
//{
//	cout<<"Destructor is called !"<<endl;
//}
//}; 
//int main()
//{ 
//   String1 s1("abcd");
//   String1 s2("xyzw");
//   s2 = s1;
//   s2.display();
//	return 0;
//} 

/* Overloading operator= function using friend function. */

//#include<iostream>
//using namespace std;
//class Complex
//{
//int real,img;
//public:
//Complex() { 
//cout<<"default called !"<<endl;
//}	
//Complex(int real ,int img) 
//{
//	this->real = real;
//	this->img = img;
//} 
//	void display() 
//	{
//		if(img<0)
//		{
//			cout<<"The complex number is:"<<" "<<real<<img<<"i"<<endl;
//		} 
//		else
//		{
//			cout<<"The complex number is:"<<" "<<real<<"+"<<img<<"i"<<endl;
//		}
//	} 
//Complex operator+(int num) // To resolve operator+(5)
//{
//	Complex temp;
//	temp.real = real+num;
//	temp.img = img+num;
//	return temp;
//} 
//friend Complex operator+(int, Complex&);
//}; 
//Complex operator+(int num, Complex& obj)
//{ 
//    Complex t1;
//  t1.real = obj.real +num;
//  t1.img = obj.img +num;
//  return t1;	
//} 
//int main() 
//{ 
//    Complex c1(2,3);
//    Complex c2;
//    c2 = c1+5; // it is resolved as c2 =operator+(c1,5)
//    c2.display();
//	return 0;
//} 

/* Overloading "==" operator */

// #include<iostream>
// #include<cstring>
// using namespace std;
// class Car
// {
// 	int price;
// 	string name;
// 	public:
// 	Car()
// 	{
// 		cout<<"In Default!"<<endl;
// 		}
// 	Car(int a, string name)
// 	{
// 	  price = a;
// 	  this->name = name;
// 	}
// 	bool operator==(Car&obj)
// 	{
// 	   if(name==obj.name &&price==obj.price)
// 	   {
//              return true;
// 		   }
//        else{
//        	return false;
// 	   }
// 	}
// };
// int main()
// {
// Car c1(560000,"ABCD");
// Car c2(456999,"XYZW");
// if(c1 == c2)     // resolved as c1 = c1.operator==(c2);
// {
// 	cout<<"Similar"<<endl;
// }
// else
// {
// 	cout<<"Dissimilar"<<endl;
// }
// 	return 0;
// }

/* Overloading "<<" insersion and ">>" extraction operator. */

// #include <iostream>
// using namespace std;
// class Complex
// {
//   int real,img;
//   public:
//   Complex()
//   {
//       real = 0;
//       img = 0;
//   }
//   friend void operator<<(ostream&out, Complex& c);
//   friend void operator>>(istream&in,Complex& d);
// };
// void operator<<(ostream&out,Complex& c)
// {
//   out<<"The complex number is:"<<" "<<c.real<<"+"<<c.img<<"i"<<endl;
// }
// void operator>>(istream&in,Complex& d)
// {
//    cout<<"Enter the real part:"<<endl;
//    in>>d.real;
//    cout<<"Enter the imaginary part:"<<endl;
//    in>>d.img;
// }
// int main() {
// Complex c1;
// cin>>c1;
// cout<<c1;
//
//     return 0;
// }

/* Overloading operator+ using friend functon */
// #include<iostream>
// using namespace std;
// class Date
// {
//     int dd,mm,yy;
//     public:
//     Date()
//     {
//         dd=mm==yy==0;
//     }
//     Date(int d, int m, int y)
//     {
//         dd = d;
//         mm = m;
//         yy = y;
//     }
// friend void operator+(Date& f, int h);
// friend void operator-(Date& g, int d);
// };
// void operator-(Date& g, int d)
// {
//     g.dd = g.dd-d;
//     g.mm = g.mm-6;
//     g.yy = g.yy-d;
//     cout<<"The modified date is:"<<" "<<g.dd<<"/"<<g.mm<<"/"<<g.yy<<endl;
// }
// void operator+(Date&f, int h)
// {
//     f.dd = f.dd+h;
//     f.mm = f.mm+h;
//     f.yy = f.yy+4;
//      cout<<"The modified date is:"<<" "<<f.dd<<"/"<<f.mm<<"/"<<f.yy<<endl;
// }
// int main()
// {
// int day,mnth,year;
// cout<<"Enter the day:"<<endl;
// cin>>day;
// cout<<"Enter the mnth:"<<endl;
// cin>>mnth;
// cout<<"Ebter the year:"<<endl;
// cin>>year;
// Date e(day,mnth,year);
// e-1; //resolved as e = e.operator-(1);
// e+2;
//     return 0;
// }

/* Another Example of operator+() and operator-() overloading */
// #include<iostream>
// using namespace std;
// class Time
// {
//     int hh, mm, ss;
//     public:
//     Time()
//     {
//         hh = mm = ss = 0;
//     }
//     Time( int a, int b, int c)
//     {
//         hh = a;
//         mm = b;
//         ss = c;
//     }
//     friend Time operator+(Time&f, int g);
//     friend Time operator-(Time&s,int d);
//     void display()
// {
//     cout<<"The time is:"<<" "<<hh<<":"<<mm<<":"<<ss<<endl;
// }
// };
// Time operator+(Time&f, int g)
// {
//     f.hh = f.hh + g;
//     f.mm = f.mm + g;
//     f.ss = f.ss + g;
//     return f;
// }
// Time operator-(Time&s, int d)
// {
//     s.hh = s.hh - d;
//     s.mm = s.mm - d;
//     s.ss = s.ss - d;
//     return s;
// }
//
// int main()
// {
//     int hrs,min,sec;
//     cout<<"Enter hrs:"<<endl;
//     cin>>hrs;
//      cout<<"Enter min:"<<endl;
//     cin>>min;
//      cout<<"Enter sec:"<<endl;
//     cin>>sec;
//     Time t1(hrs,min,sec);
//     t1-1;
//     t1.display();
//     return 0;
// }


/* Use of static function */
// #include<iostream>
// using namespace std;
// class Account
// {
//   int accno;
//   string name;  // Here used string instead og char[10] and then using strcpy() function to copy the string.
//   static float rateofinterest;
//   public:
//   Account()
//   {
//       accno = 0;
//       name = "abc";
//   }
//   Account(int a, string name)
//   {
//       accno = a;
//       this->name = name;
//   }
//   void display()
//   {
//       cout<<"The name is:"<<" "<<name<<endl;
//       cout<<"The Account Number is:"<<" "<<accno<<endl;
//       cout<<"The rate of interest is"<<rateofinterest<<endl;
//   }
// };
// float Account::rateofinterest = 5.66f;
// int main()
// {
//     Account a1(10024,"Nikhil");
//     Account a2(10025,"Sanjay");
//     a1.display();
//     a2.display();
//     return 0;
// }
===============================================================================================================
// Excercise 1:
// #include<iostream>
// using namespace std;
// class complex
// {
// 	int real,img;
// 	public:static const int cnt;
// 	private:static const int cnt1;
// 	public:
// 		complex()
// 		{
// 			cout<<"default is invoked\n";
// 			real=5;
// 			img=5;
// 		//	cnt++;//not allowed
// 		}
// 		static int getcnt()
// 		{
// 			return cnt1;
// 		}
// };
// const int complex::cnt=5;//memory alloaction takes place
// const int complex::cnt1=10;
// int main()
// {
// 	complex c1;
// 	cout<<"no of obj created is   "<<complex::getcnt();
// 	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
// 	cout<<complex::cnt;
// 	//cout<<complex::cnt1;
//
// }

/*output:
 default is invoked
no of obj created is   10sizeoof obj is     8
5
*/
// Exercise 2
// #include <iostream>
// using namespace std;
//
// class Test
// {
// 	static int x;
// public:
// 	Test() { x++; }
// 	static int getX() {return x;}
// };
// int Test::x;
// int main()
// {
// 	cout << Test::getX() << " ";
// }
//

// output:
// 0

/* Exercise 3: */
// #include <iostream>
// using namespace std;
//
// class Player
// {
// private:
//     int id;
//     static int next_id;
// public:
//     int getID() { return id; }
//     Player()  {  id = next_id++; }
// };
// int Player::next_id = 1;
//
// int main()
// {
//   Player p1;
//   Player p2;
//   Player p3;
//   cout << p1.getID() << " ";
//   cout << p2.getID() << " ";
//   cout << p3.getID();
//   return 0;
// }
//
// Output:
// 1 2 3

// Excercise 4:
// Which of the following is true?
// a)Static methods cannot be overloaded.
// b)Static data members can only be accessed by static methods.
// c)Non-static data members can be accessed by static methods.
// d)Static methods can only access static members (data and methods)
/*
Answer: option (d)*/

