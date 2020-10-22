#include <iostream>
using namespace std;
//#include <stdio.h> 
bool IsLeapYear(int);
int PrimeScore(int);
void greetMe();
void printIncreasing(int);
void printTo(int);

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
    int score = 0;
    if (numberIn % 2 == 0)
    {
        score += 2;
    }
    if (numberIn % 3 == 0)
    {
        score +=3;
    }
    if (numberIn % 5 == 0)
    {
        score +=5;
    }
    if (numberIn % 7 == 0)
    {
        score +=7;
    }
    if (numberIn % 11 == 0)
    {
        score +=11;
    }
    if (numberIn % 13 == 0)
    {
        score += 13;
    }
    if (numberIn % 17 == 0)
    {
        score += 17;
    }
    if (numberIn % 19 == 0)
    {
        score += 19;
    }
    return score;
    cout << score << endl;
}

/**
 * @brief   Check if the \param year is a leap year i.e. year in which february month contains 29 days 
 *          Leap year can be identified mathematically as year value which is divisible by 4 and, by 400 if divisible by 100 
 * @param year 
 * @return true     year is a leap year
 * @return false    
 */
bool IsLeapYear(int year){
    bool ret = true;
    if (year % 100 == 0){
        if (year % 400 == 0){
            ret = true;
        }
        else{
            ret = false;
        }
    }
    else if (year % 4 == 0){
        ret = true;
    }
    else {
        ret = false;
    }
    return ret;
}

/**
 * @brief Write a function greetMe Which takes you name and age as input.
 *          -> It should greet saying "Hello <Name>"
 *          -> You are xxxx weeks old
 *          -> and xxxx decades old
 */
void greetMe(){
    string name;
    int age;
    cout << "Please enter your name." << endl;
    cin >> name;
    cout << "Please enter your age." << endl;
    cin >> age;
    cout << "Hello " <<  name << endl;
    int week = age * 52.14;
    cout << "You are " << week << " weeks old." << endl;
    cout << "and " << age /10 << " decades old." << endl;
}

/**
 * @brief Print a triangle of starts
 *          for size = 3 print:
 *          *
 *          * *
 *          * * *
 * @param size 
 */

void printIncreasing(int size){
    for (int k = 1; k <= size; k++){
        for (int j = 1; j <= k; j++){
            cout << "*";
        }
        cout << " " << endl;
    }
}


/**
 * @brief printTo should print number starting from 0 to that of i
 * 
 * @param i 
 */

void printTo(int i){
    for (int j = 0; j <= i; j++){
        cout << j << endl;
    }
} 

/**
 * @brief prints the version of cpp used by compiler
 * 
 */
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus );

}

int main() {
    int year;
    cout << "Enter a year:" << endl;
    cin >> year;
    bool value = IsLeapYear(year);
    cout << value << endl;

    int numberIn;
    cout << "Enter the number" << endl;
    cin >> numberIn;
    PrimeScore(numberIn);
    int primeScore = PrimeScore(numberIn);
    cout << primeScore << endl;

    greetMe();

    int size;
    cout << "Enter the size" << endl;
    cin >> size;
    printIncreasing(size);

    int i;
    cout << "Enter the number to print until:" << endl;
    cin >> i;
    printTo(i);
    return 0; 
}