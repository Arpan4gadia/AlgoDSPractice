#include <iostream>
using namespace std;
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
    int count = 0;
    int mod2 = numberIn % 2;
    int mod3 = numberIn % 3;
    int mod5 = numberIn % 5;
    int mod7 = numberIn % 7;
    int mod11 = numberIn % 11;
    int mod13 = numberIn % 13;
    int mod17 = numberIn % 17;
    int mod19 = numberIn % 19;
    cout << numberIn << endl;
    if (mod2 == 0) {
        count += 2;
    }
    else if (mod3 == 0) {
        count += 3;
    }
    else if (mod5 == 0) {
        count += 5;
    }
    else if (mod7 == 0) {
        count += 7;
    }
    else if (mod11 == 0) {
        count += 11;
    }
    else if (mod13 == 0) {
        count += 13;
    }
    else if (mod17 == 0) {
        count += 17;
    }
    else if (mod19 == 0) {
        count += 19;
    cout << count;
    return 0;
    }
/**
 * @brief   Check if the \param year is a leap year i.e. year in which february month contains 29 days 
 *          Leap year can be identified mathematically as year value which is divisible by 4 and, by 400 if divisible by 100 
 * @param year 
 * @return true     year is a leap year
 * @return false    
 */
bool IsLeapYear(int year){
    int mod = year % 4;
    int mod100 = year % 100;
    int mod400 = year % 400;
    if (mod == 0 || mod100 == 0 && mod400 == 0){
        cout << "It is a leap year." << endl;
        return true;
    }
    else {
        cout << "It is not a leap year." << endl;
        return false;
    }
}
/**
 * @brief Write a function greetMe Which takes you name and age as input.
 *          -> It should greet saying "Hello <Name>"
 *          -> You are xxxx weeks old
 *          -> and xxxx decades old
 */
void greetMe(){
    string name = "";
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "Enter your age: ";
    cin >> age;
    float decades = age / 10;
    float weeks = age * 52.14;
    cout << "You are " << weeks << " weeks old." << endl;
    cout << "You are " << decades << " decades old." << endl;

}
/**
 * @brief prints the version of cpp used by compiler
 * 
 */
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus);

}
int main() {
    greetMe();
    int myyear;
    int number;
    cout << "Enter a year: ";
    cin >> myyear;
    IsLeapYear(myyear);
    cout << "Enter any number: ";
    cin >> number;
    PrimeScore(number);
    printCPPVersion();

}   