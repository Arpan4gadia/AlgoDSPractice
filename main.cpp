#include <iostream>
using namespace std;
//#include <stdio.h> 
int main(int argc, char** argv) {

    return 0;
}

/**
 * @brief myPrimeScore: Write a functionn which calculates the score to an input number @param numberIn.
 *                      Score is sum of all the prime numbers @param numberIn is divisible by.
 *                      <Consider the prime numbers less than 20>
 * \param
 * 
 * @param numberIn 
 * @return int          Score.
 */
int PrimeScore(int numberIn){

}


/**
 * @brief   Check if the \param year is a leap year i.e. year in which february month contains 29 days 
 *          Leap year can be identified mathematically as year value which is divisible by 4 and, by 400 if divisible by 100 
 * @param year 
 * @return true     year is a leap year
 * @return false    
 */
bool IsLeapYear(int myyear){
cout << "Enter a year:" << endl;
cin >> myyear;
if (myyear % 4 == 0){
    return true;
}
return false;
}


/**
 * @brief Write a function greetMe Which takes you name and age as input.
 *          -> It should greet saying "Hello <Name>"
 *          -> You are xxxx weeks old
 *          -> and xxxx decades old
 */
void greetMe(){
char name[];
int age;
cout << "Please enter your name." << endl;
cin >> name;
cout << "Please enter your age." << endl;
cin >> age;
cout << "Hello" <<  name << endl;
int month = age/ 12
int week = month/ 7
cout << "You are " << week << " weeks old." << endl;
cout << "and " << age /10 << "decades old." << endl;
}


/**
 * @brief prints the version of cpp used by compiler
 * 
 */
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus );

}