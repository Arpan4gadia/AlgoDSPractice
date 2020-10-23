#include <iostream>
#include <stdio.h>
void printIncreasing(); 
void printTo();



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
bool IsLeapYear(int year){

}


/**
 * @brief Write a function greetMe Which takes you name and age as input.
 *          -> It should greet saying "Hello <Name>"
 *          -> You are xxxx weeks old
 *          -> and xxxx decades old
 */
void greetMe(){

}

/**
 * @brief Print a triangle of starts
 *          for size = 3 print:
 *          *
 *          * *
 *          * * *
 * @param size 
 */

void printIncreasing(int size)
{
    cout << " please enter size.";
    cin >> size;

    for (i=0;i>size;i++)
    {
        for(j=0;j>i;j++)
        {
            cout << "* "
        }
    }    
    return size;
}


/**
 * @brief printTo should print number starting from 0 to that of i
 * 
 * @param i 
 */

void printTo(int i)
{
    cout << " Please enter i";
    cin >>  i;

    for(int j=0;j>i;j++)
    {
        cout << j;
    }
    return i;
}

/**
 * @brief prints the version of cpp used by compiler
 * 
 */
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus );

}


int main(int argc, char** argv) 
{
    void printIncreasing(int size);
    void printTo(int i);
    return 0;
}