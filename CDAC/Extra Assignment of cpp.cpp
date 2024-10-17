/* Q.1) Write a program to swap two numbers without creating a third variable */
//#include<iostream>
//using namespace std;
//int main()
//{ 
//int a, b;
//cout<<"Enter the fist number:"<<endl;
//cin>>a;
//cout<<"Enter the second number:"<<endl;
//cin>>b;
//cout<<"The numbers before swapping are:"<<" "<<a<<" "<<"and"<<" "<<b<<endl;
//a = a+b;
//b = a-b;
//a = a-b;
//cout<<"The numbers before swapping are:"<<" "<<a<<" "<<"and"<<" "<<b<<endl;
//   return 0;
//} 

/* Q.2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT. */ 

// #include <iostream>
// #include<string>
// using namespace std;
// int main() {
//    string s1;
//    cout<<"Enter the number:"<<endl;
//    cin>>s1;
//   string reversed(s1.rbegin(),s1.rend());
//   if(s1==reversed)
//   {
//       cout<<"The Entered Number is palindrome."<<endl;
//   }
//   else
//   {
//         cout<<"The Entered Number is not a palindrome."<<endl;
//   }
//     return 0;
// }

/*3)WRITE A CPP PROGRAM TO DISPLAY 1ST 25 PRIME NUMBER.*/
//#include<iostream>
//using namespace std;
//bool isprime(int num)
//{
//	if(num<=1) return false;
//	if(num==2) return true;
//	if(num%2==0) return false;
//	for(int i = 3; i*i<=num;i+=2)
//	{
//		if(num%i==0) return 0;
//	} 
//	return true;
//} 
//void firstNprimesfound(int n)
//{
//	int count = 0;
//	for(int num=2;count<n;num++)  // If we take num<n the program will print prime numbers
//	{                             //upto 25 only.
//		if(isprime(num))
//		{
//			cout<<num<<" ";
//			count++;
//		}
//	} 
//}
//int main() 
//{ 
//   const int numberofprimes = 25;
//   firstNprimesfound(numberofprimes);
//	return 0;
//}

///*4)WRITE A CPP PROGRAM TO DISPLAY FACTORIAL FROM NUMBER 5 TO 8.*/
//#include<iostream>
//using namespace std;
//int main()
//{ 
//int n = 5,j,i,fact = 1;
//for( j = n; j<9;j++){
//for(i = 0; i<n;i++)
//{
//	fact = fact *(n-i);
//}
// cout<<fact<<endl;
// fact = 1;
// n++;
//}
//	return 0;
//}

/*5)WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS.*/
//#include<iostream>
//using namespace std;
//int main()
//{ 
//   int sum = 0, sum1 = 0 ,n;
// cout<<"Enter the numbers:"<<endl;
//   cin>>n; 
//     int arr[n];
//   for(int i = 0; i<n; i++)
//   {
//   	arr[i] = i+1;
//   } 
//   for(int i = 0; i<n; i++) 
//  {
//  	if(arr[i]%2==0)
//  	{
//  		sum = sum+arr[i];
//	   } 
//	else 
//	{
//	    sum1 = sum1 + arr[i];
//	}
//}
//  cout<<"The sum of even numbers is:"<<" "<<sum<<endl;
// cout<<"The sum of odd numbers is:"<<" "<<sum1<<endl;
//	return 0;
//}

//6)WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.
// #include<iostream>
// #include<algorithm>
// #include<cctype>
// #include<cstring>
// using namespace std;
// int main()
// {
//     string s1;
//     cout<<"Enter the string:"<<endl;
//     getline(cin,s1);
//     transform(s1.begin(),s1.end(),s1.begin(),[](char c)
//     {
//         if(islower(c))
//         {
//             return toupper(c);
//         }
//         else
//         {
//             return tolower(c);
//         }
//     });
//     cout<<"New string:"<<s1<<endl;
//     return 0;
// }

//7)Write a template function swap () to swap the variables of int, char and complex types

// #include<iostream>
// #include<complex>
// using namespace std;
// template<class N>
// void readswap(N &a, N &b)
// {
//     N temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int b = 45, c= 56;
//     char d = 'A', e = 'B';
//     cout<<"The integers before swaping:"<<" "<<b<<" "<<"and"<<" "<<c<<endl;
//     readswap(b,c);
//     cout<<"After swaping integers are:"<<" "<<b<<" "<<"and"<<" "<<c<<endl;
//      cout<<"The characters before swaping:"<<" "<<d<<" "<<"and"<<" "<< e<<endl;
//      readswap(d,e);
//      cout<<"After swaping characters are:"<<" "<<d<<" "<<"and"<<" "<<e<<endl;
//      complex<double> comp1(1.0, 2.0), comp2(3.0, 4.0);
//     cout << "Before swapping complex: " << comp1 << " " << comp2 << endl;
//     readswap(comp1, comp2);
//     cout << "After swapping complex: " << comp1 << " " << comp2 << endl;
//     return 0;
// }

//8)C++ Program to Find number of Digits in any number
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     int len;
//     string s1;
//     cout<<"Enter the Number:"<<endl;
//     cin>>s1;
//     len = s1.length();
//     cout<<"The Number of digits in the number is:"<<" "<<len<<endl;
//     return 0;
// }

/*9)C++ Program to Reverse a Number*/
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//    string s1;
//    cout<<"Enter the number:"<<endl;
//    cin>>s1;
//    string reversed(s1.rbegin(),s1.rend());
//   cout<<"Reversed Number is:"<<reversed<<endl;
//     return 0;
// }

//10)C++ Program to remove all special characters from a given string.

// #include <iostream>
// #include <string>
// #include <algorithm> // For std::remove_if
// #include <cctype>    // For std::isalnum
//
// using namespace std;
//
// int main() {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);
//
//     // Remove special characters using remove_if and isalnum
//     s.erase(remove_if(s.begin(), s.end(), [](char c) {
//         return !isalnum(c); // Keep only alphanumeric characters
//     }), s.end());
//
//     cout << "String after removing special characters: " << s << endl;
//
//     return 0;
// }














