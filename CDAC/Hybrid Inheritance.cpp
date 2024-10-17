///*Program demonstrating v table*/
//#include<iostream>
//using namespace std;   
//class Parent{ 
//public: 
//int i;
//	Parent()
//	{  
//	     i = 10;
//		cout<<"In default of class Parent"<<endl;
//	} 
//virtual void show() 
//{ 
//cout<<"In show() of class Parent."<<endl;
//}
//}; 
//class Child : public Parent
//{ 
//public: 
//   int j;
//	Child()
//	{ 
//	 j =20;
//	cout<<"In default of class Child"<<endl; 
//} 
//void show()
//{
//cout<<"In show() of class Child."<<endl;	
//} 
//void print()
//{
//cout<<"In print of class Child."<<endl;	
//}
//}; 
//int main()
//{ 
//    Parent*ptr;
//	Child c1; 
//	ptr = &c1;
//	ptr->show(); 
//	cout<<"The size of baseclass object c1 is:"<<" "<<sizeof(c1)<<endl;
//	//ptr->print(); //This line will give error because print function is not a virtual
//	return 0;       //function and its address was not stored in the v table so the control
//	}               // cannot find its definition in the code segment.  

/* Simple example of multi-level inheritance */

//#include<iostream> 
//using namespace std;
//class Base
//{ 
//public:
//	virtual function1()
//	{
//		cout<<"In function 1 of Base class."<<endl;
//	} 
//	virtual function2()
//	{ 
//	cout<<"In function 2 of Base class."<<endl;
//	} 
//	virtual function3()
//	{ 
//	cout<<"In function 3 of Base class."<<endl;
//	}
//}; 
//class Derived1 : public Base
//{ 
// function2()
//	{ 
//	cout<<"In function 2 of Derived1 class."<<endl;
//	} 
//}; 
//class Derived2 : public Derived1
//{ 
// 	 function3()
//	{ 
//	cout<<"In function 3 of Derived2 class."<<endl;
//	}
//}; 
//int main() 
//{ 
//Base*ptr1 = new Base();
//Base*ptr2 = new Derived1();
//Base*ptr3 = new Derived2(); 
//
//ptr1->function1(); //In func 1 of Base class
//ptr1->function2(); //In func 2 of Base class
//ptr1->function3(); //In func 3 of Base class
//ptr2->function1(); //In func 1 of Base class
//ptr2->function2(); //In func 2 of Derived1 class
//ptr2->function3(); //In func 3 of Base class
//ptr3->function1(); //In func 1 of Base class
//ptr3->function2(); //In func 2 of Derived1 class
//ptr3->function3(); //In func 3 of Derived2 class 
//delete ptr1;
//delete ptr2;
//delete ptr3;
//return 0;	
//}

/* In the above Program in derived1 class function1() and function3() are not overrided and in class derived2 function2() and function1() are not overrided. When say suppose pointer of class derived1 (ptr2) tries to call function1() of derived1 class, but since the definition of function1() is not present in the derived1 class the control looks for it in the base class of class derived1.
 */

/* Multiple Inheritance*/ 

//#include<iostream>
//using namespace std;
//class Grandfather 
//{ 
// public:
// Grandfather()
// { 
//  cout<<"In default constructor of class Grandfather."<<endl; 
// }
//}; 
//class Father 
//{ 
//public: 
//Father(){
//cout<<"In default constructor of class Father."<<endl; 
//} 
//};
//class Child : public Grandfather, public Father
//{ 
//public: 
//Child(){
//cout<<"In default constructor of class Child."<<endl;
//} 
//};
//int main()
//{
//	Child c1;
//	return 0;
//}
 
 /* Another example of multiple inheritance which contains parametrized constructors. */

//#include<iostream>
//using namespace std;
//class Grandfather 
//{ 
//public:
// Grandfather(){
// 	cout<<"In the default constructor of class Grandfather."<<endl;
// } 
// Grandfather(int p){
//cout<<"In the parametrized constructor of class Grandfather."<<endl;
// }
//}; 
//class Father 
//{ 
//public:
//Father(){
// 	cout<<"In the default constructor of class Father."<<endl;
// } 
// Father(int q){
//cout<<"In the parametrized constructor of class Father."<<endl;
// }
//}; 
//class Child : public Grandfather , public Father  
//{ 
//public:
//Child(){
//	cout<<"In the default constructor of class Child."<<endl;
//} 
//Child(int a, int b) : Father(a) , Grandfather (b) 
//{ 
//cout<<"In parameterized constructor of class Child."<<endl;
//}
//}; 
//int main()
//{ 
//Child c1(10,20);
//return 0;
//}

/* Ambiguity problem Program. */
/*
#include<iostream>
using namespace std;
class A
{
public:
A(){
cout<<"In default constructor of class A."<<endl;
}
virtual void show()
{
cout<<"In show() function of class A."<<endl;
}
};
class B
{
public:
B()
{
    cout<<"In default constructor of class B."<<endl;
}
 void show()
{
cout<<"In show() function of class B."<<endl;
}
};
class C : public A, public B
{
public:
C()
{
cout<<"In default constructor of class C."<<endl;
}
};
int main()
{
C c1;
//c1.show(); --> This line produces ambiguity error, because there exists two show() functions
c1.A::show();   // one in class A and other in class B. So the compiler can't decide which show()
c1.B::show();  // function to call.
return 0;
}*/

/* Code example of diamond inheritance */

// #include<iostream>
// using namespace std;
// class Car
// {
//   public:
//   Car()
//   {
//       cout<<"In default constuctor of class Car."<<endl;
//   }
//  Car(int f)
//  {
// cout<<"In parametrized constructor of class Car."<<endl;
//  }
// };
// class Sportscar : public Car
// {
// public:
//   Sportscar()
//   {
//       cout<<"In default constuctor of class Sportscar."<<endl;
//   }
//   Sportscar(int g)
//  {
// cout<<"In parametrized constructor of class Sportscar."<<endl;
//  }
// };
// class Commcar : public Car
// {
// public:
//    Commcar()
//   {
//       cout<<"In default constuctor of class Commcar."<<endl;
//   }
//    Commcar(int h)
//  {
// cout<<"In parametrized constructor of class Commcar."<<endl;
//  }
// };
// class Veyron : public Commcar, public Sportscar
// {
// public:
//     Veyron()
//     {
//         cout<<"In default constructor of class Veyron."<<endl;
//     }
//     Veyron(int d) : Commcar(d), Sportscar(d)
//     {
//      cout<<"In parameterized constructor of class veyron."<<endl;
//     }
// };
// int main()
// {
// Veyron v1(34);
//     return 0;
// }

/* Output of the above program is:
In default constuctor of class Car.
In parametrized constructor of class Commcar.
In default constuctor of class Car.
In parametrized constructor of class Sportscar.
In parameterized constructor of class Veyron.
*/

/* we can also modify the above program so that the control doesn't go to the default constructor of class Car and directly goes to parameterized constructor of class Car. Here is how the modified version would look like.*/

// #include<iostream>
// using namespace std;
// class Car
// {
//   public:
//   Car()
//   {
//       cout<<"In default constuctor of class Car."<<endl;
//   }
//  Car(int f)
//  {
// cout<<"In parametrized constructor of class Car."<<endl;
//  }
// };
// class Sportscar : public Car
// {
// public:
//   Sportscar()
//   {
//       cout<<"In default constuctor of class Sportscar."<<endl;
//   }
//   Sportscar(int g) : Car(g)
//  {
// cout<<"In parametrized constructor of class Sportscar."<<endl;
//  }
// };
// class Commcar : public Car
// {
// public:
//    Commcar()
//   {
//       cout<<"In default constuctor of class Commcar."<<endl;
//   }
//    Commcar(int h) : Car(h)
//  {
// cout<<"In parametrized constructor of class Commcar."<<endl;
//  }
// };
// class Veyron : public Commcar, public Sportscar
// {
// public:
//     Veyron()
//     {
//         cout<<"In default constructor of class Veyron."<<endl;
//     }
//     Veyron(int d) : Commcar(d), Sportscar(d)
//     {
//      cout<<"In parameterized constructor of class veyron."<<endl;
//     }
// };
// int main()
// {
// Veyron v1(34);
//     return 0;
// }

/* The output of this program is:
 *
In default constuctor of class Car.
In parametrized constructor of class Commcar.
In default constuctor of class Car.
In parametrized constructor of class Sportscar.
In parameterized constructor of class veyron.
*/

/* In the output of the above code we can see that the default constructor of class car is executed twice, therefore the most derived class (i.e, class Veyron) has two copies of attributes of class Car. Memory is being allocated twice for two copies of the attributes of the most base class (i.e, class Car). This is a waste of memory and can also cause ambiguities to overcome this problem we use "virtual" keyword. We make class Sportscar and class Commcar as virtual Baseclasses to prevent the most derived class (i.e, class Veyron) to have two copies of attributes of class Car.*/

/* The Implementation of the above mentioned solution for ambiguity problem is given below.*/

// #include<iostream>
// using namespace std;
// class Car
// {
//   public:
//   Car()
//   {
//       cout<<"In default constuctor of class Car."<<endl;
//   }
//  Car(int f)
//  {
// cout<<"In parametrized constructor of class Car."<<endl;
//  }
// };
// class Sportscar : virtual public Car
// {
// public:
//   Sportscar()
//   {
//       cout<<"In default constuctor of class Sportscar."<<endl;
//   }
//   Sportscar(int g) : Car(g)
//  {
// cout<<"In parametrized constructor of class Sportscar."<<endl;
//  }
// };
// class Commcar : virtual public Car
// {
// public:
//    Commcar()
//   {
//       cout<<"In default constuctor of class Commcar."<<endl;
//   }
//    Commcar(int h) : Car(h)
//  {
// cout<<"In parametrized constructor of class Commcar."<<endl;
//  }
// };
// class Veyron : public Commcar, public Sportscar
// {
// public:
//     Veyron()
//     {
//         cout<<"In default constructor of class Veyron."<<endl;
//     }
//     Veyron(int d) : Commcar(d), Sportscar(d) // ,Car(d) --> The commented out part gives error(see Explaination ahead)
//     {
//      cout<<"In parameterized constructor of class veyron."<<endl;
//     }
// };
// int main()
// {
// Veyron v1(34);
//     return 0;
// }

/* The output of the above program is:
 *
In default constuctor of class Car.
In parametrized constructor of class Commcar.
In parametrized constructor of class Sportscar.
In parameterized constructor of class veyron.
*/
     
/* In the output of the above program we can clearly see that the default constructor of class Car is executed only once.This is because of the use of virtual keyword and the act of naking the classes Commcar and Sportscar as virtual Baseclasses. When they are made virtual they do not have a copy of all the attributes of class Car but the compiler implicitly gives them a virtual baseclass pointer (vbptr) which has they address of the class Car. The (vbptr) is also given to the most derived class (i.e, class Veyron). The most derived class also has a copy of attributes of all the clases it inherites from apart from the virtual base class pointer (vbptr).*/

/* We can also directly call the parametrized constructor of the most base class directly from the parametrized constructor of the most derived class, because we have used the "virtual" keyword. */

// The Implementation of the above point is given in the program below:

// #include<iostream>
// using namespace std;
// class Car
// {
//   public:
//   Car()
//   {
//       cout<<"In default constuctor of class Car."<<endl;
//   }
//  Car(int f)
//  {
// cout<<"In parametrized constructor of class Car."<<endl;
//  }
// };
// class Sportscar : virtual public Car
// {
// public:
//   Sportscar()
//   {
//       cout<<"In default constuctor of class Sportscar."<<endl;
//   }
//   Sportscar(int g) : Car(g)
//  {
// cout<<"In parametrized constructor of class Sportscar."<<endl;
//  }
// };
// class Commcar : virtual public Car
// {
// public:
//    Commcar()
//   {
//       cout<<"In default constuctor of class Commcar."<<endl;
//   }
//    Commcar(int h) : Car(h)
//  {
// cout<<"In parametrized constructor of class Commcar."<<endl;
//  }
// };
// class Veyron : public Commcar, public Sportscar
// {
// public:
//     Veyron()
//     {
//         cout<<"In default constructor of class Veyron."<<endl;
//     }
//     Veyron(int d) : Commcar(d), Sportscar(d) ,Car(d)
//     {
//      cout<<"In parameterized constructor of class veyron."<<endl;
//     }
// };
// int main()
// {
// Veyron v1(34);
//     return 0;
// }

/* Output of the program is:
 *
In parametrized constructor of class Car.
In parametrized constructor of class Commcar.
In parametrized constructor of class Sportscar.
In parameterized constructor of class Veyron.
*/

/* In the output of the above program we can see that we have directly called the parameterized constructor of class Car from the parameterized constructor of class Veyron. This is not generally allowed since class Car is not a direct baseclass for class Veyron. But here we can do it because we have usedthe "virtual"" keyword.  */
