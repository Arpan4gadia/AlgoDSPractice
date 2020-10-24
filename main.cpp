#include <iostream>
using namespace std;
void printIncreasing(); 
void printTo();
void Factorial();
int squareArea();
void printSumOfOdds();
void printNumberLines();

/**
 * @brief myPrimeScore: Write a functionn which calculates the score to an input number @param numberIn.
 *                      Score is sum of all the prime numbers @param numberIn is divisible by.
 *                      <Consider the prime numbers less than 20>
 * \param
 * 
 * @param numberIn 
 * @return int          Score.
 */
int PrimeScore(int numberIn)
{
    return 0;
}


/**
 * @brief   Check if the \param year is a leap year i.e. year in which february month contains 29 days 
 *          Leap year can be identified mathematically as year value which is divisible by 4 and, by 400 if divisible by 100 
 * @param year 
 * @return true     year is a leap year
 * @return false    
 */
bool IsLeapYear(int year)
{
    return true;
}


/**
 * @brief Write a function greetMe Which takes you name and age as input.
 *          -> It should greet saying "Hello <Name>"
 *          -> You are xxxx weeks old
 *          -> and xxxx decades old
 */
void greetMe()
{
    return;
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
    for (int i=0;i<=size;i++)
    {
        for(int j=0;j<i;j++)
        {

            cout << "* ";
        }
         cout << endl;
    }    
    return;
}


/**
 * @brief printTo should print number starting from 0 to that of i
 * 
 * @param i 
 */

void printTo(int i)
{
    for(int j=0;j<=i;j++)
    {
        cout << j;
    }
    return;
}

/**
 * @brief factorial is an important mathematical construct. 
 * We find the factorial value of any number by multiplying all the numbers starting from 1 to that number
 * Ex: factorial(5) = 1 * 2 * 3 * 4 * 5 
 * The function below must return the factorial value of input number;
 * 
 * @param numIn 
 * @return int 
 */

int factorial(int numIn)
{
    int facto = 1;
    for(int i = 1;i<=numIn;i++)
    {
       facto = facto * i;  
    }

    cout << "The factorial of " << numIn << " is " << facto << ".";
    return 0;
}


/**
 * @brief Area of a square FORMULA :-- area = side * side;
  
 */
int squareArea(int side)
{
    //declare
    int area = 0;

    // find area
    area = side * side;

    //Print
    cout << "The are of the square with length " << side << " is " << area << "cm2.";

    return 0;
}

/**
 * @brief Complete the function printSumOfOdds so that 
 * it prints all the odd numbers till numberIn and also the sum of all numbers on next line
 * 
 * Ex:
 * numberIn = 10
 * Output:
 * 1 3 5 7 9
 * 25
 * 
 * @param numberIn 
 */

void printSumOfOdds(int numberIn)
{
    int sum = 0;
    for(int i = 1;i <= numberIn;i++)
    {
        if (i % 2 == 1)
        {
            cout << i;
            cout << " + ";
            sum = sum + i;
        }
        else if (i % 2 == 0)
        {
            continue;
        }
    }
    cout << "The sum of the odd numebers under " << numberIn << " is " << sum << ".";
    return;
}

/**
 * @brief Write a function to print a table of given input numberIn
 * Ex: numberIn = 7
 * Output:
 * 7 * 1 = 7
 * 7 * 2 = 14
 * ...
 * ...
 * 7 * 10 = 70
 * 
 * @param numberIn 
 */
void printTable(int numberIn){

}

/**
 * @brief Complete printNumberLines function such that it would print number in following pattern
 * Ex: nLines = 4
 * Output:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 *  
 * 
 * @param nLines 
 */
void printNumberLines(int nLines)
{
    int k = 1;
    int x = nLines;
    for (int i = 0;i<=nLines;i++)
    {
        for(int j = 0;j<x;j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
        x--;
    }
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
/*    
    int size = 0;
    cout << " Please enter size:";
    cin >> size;
    printIncreasing(size); 

    int i = 0;
    cout << " Please enter i:";
    cin >>  i;
    printTo(i);

    int numIn = 0;
    cout << "Please enter the number for which you want to find the factorial:";
    cin >> numIn;
    factorial(numIn);

    int side = 0;
    cout << "Please enter the lenght of the side of the square in cm:";
    cin >> side;
    squareArea(side);
    
    int numberIn = 0;
    cout << "Please enter the number till which you want the odd numbers and it's sum:";
    cin >> numberIn;
    printSumOfOdds(numberIn);
*/
    int nLines = 0;
    cout << "Please enter a number:";
    cin >> nLines;
    printNumberLines(nLines);

    return 0;
}