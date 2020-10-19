#include <iostream>
using namespace std;

//  Write a program in C++ to find Size of fundamental data types.
int fundamental_data_types() {
    cout << "The size of integers are " << sizeof(int) << " bytes." << endl;
    cout << "The size of char is " << sizeof(char) << " bytes." << endl;
    cout << "The size of short is " << sizeof(short) << " bytes." << endl;
    cout << "The size of long is " << sizeof(long) << " bytes." << endl;
    cout << "The size of long long is " << sizeof(long long) << " bytes." << endl;
    cout << "The size of floats are " << sizeof(float) << " bytes." << endl;
    cout << "The size of double is " << sizeof(double) << " bytes." << endl;
    cout << "The size of long double is " << sizeof(long double) << " bytes." << endl;
    cout << "The size of bool is " << sizeof(bool) << " bytes." << endl;
    return 0;
}

// Write a program in C++ to print the sum of two numbers using variables.
int sumup() {
    int sum = 0;
    int a, b;
    cout << "Enter one number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    sum += a + b;
    cout << "The sum is " << sum << endl;
    return 0;
}

//  Write a program in C++ to check whether the primitive values crossing the limits or not.
int value() {
   char gender = 'F';        
   bool isEmployed = true;
   unsigned short numOfsons = 2;
   short yearOfAppt = 2009;
   unsigned int YearlyPackage = 1500000;
   double height = 79.48;
   float gpa = 4.69f;
   long totalDrawan = 12047235L;
   long long balance = 995324987LL;
   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isEmployed << endl;
   cout << " Number of sons she has : " << numOfsons << endl;
   cout << " Year of her appointment : " << yearOfAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << gpa << endl;
   cout << " Salary drawn upto : " << totalDrawan << endl;
   cout << " Balance till : " << balance << endl;   
   return 0;
}

// Write a program in C++ to display various type or arithmetic operation using mixed data type.
int operations() {
   int m1 = 5, m2 = 7;
   double d1 = 3.7, d2 = 8.0;
   cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
   cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
   cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  
   cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
   cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
   cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  
   cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
   cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
   cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  
   cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
   cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
   cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  
   cout << endl;
   return 0;
}

// Write a program in C++ to calculate the volume of a sphere.
int sphere() {
    int radius;
    double pi = 2*acos(0.0);
    cout << "Enter a radius: ";
    cin >> radius;
    cout << "The volume is " << radius * pi * (4/3);
    return 0;
}

// Main function
int main() {
    sumup();
    cout << "-------------------------------------------------------------------------------------" << endl;
    fundamental_data_types();
    cout << "-------------------------------------------------------------------------------------" << endl;
    value();
    cout << "-------------------------------------------------------------------------------------" << endl;
    operations();
    cout << "-------------------------------------------------------------------------------------" << endl;
    sphere();
    return 0;
}