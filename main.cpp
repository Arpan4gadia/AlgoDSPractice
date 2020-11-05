#include <iostream>
#include <vector>
using namespace std;

bool IsLeapYear(int);
int PrimeScore(int);
void greetMe();
void printIncreasing(int);
void printTo(int);
int factorial(int);
void printTable(int);
void printSumOfOdds(int);
void printNumberLines(int);
void printNumberLinesBackwards(int);
void printTime(long);
bool isPrime(int);
void printPrimes(int);
void printFactors(int);
int findGCF(int, int);
int findLCM(int, int);
int MDistance(int);
void gameOf21();
vector<int> oneToN(int);

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
 * @brief factorial is an important mathematical construct. 
 * We find the factorial value of any number by multiplying all the numbers starting from 1 to that number
 * Ex: factorial(5) = 1 * 2 * 3 * 4 * 5 
 * The function below must return the factorial value of input number;
 * 
 * @param numIn 
 * @return int 
 */
int factorial(int numIn){
    int product = 1;
    for (int i=1; i <= numIn; i++){
        product *= i;
    }
    return product;
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
void printTable(int numbIn){
    for (int i = 1; i <=10; i++){
        cout << numbIn << " * " << i << " = " << numbIn * i << endl;
    }
    return;
}

/**
 * @brief Complete the function printSumOfOdds so that 
 * it prints all the odd numbers till numberIn and also the sum of all numbers on next line
 * 
 * Ex:
 * nuIn = 10
 * Output:
 * 1 3 5 7 9
 * 25
 * 
 * @param nuIn 
 */
void printSumOfOdds(int nuIn){
    int sum = 0;
    for (int i=1; i<=nuIn; i++){
        if (i % 2 == 1){
            cout << i << " ";
            sum += i;
        }
    }
    cout << " " << endl;
    cout << sum << endl;
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
void printNumberLines(int nLines){
    int i = 0;
    for (int k = 1; k <= nLines; k++){
        for (int j = 1; j <= k; j++){
            cout << i << " ";
            i++;
        }
        cout << " " << endl;
    }
    return;
}

/**
 * @brief prints the version of cpp used by compiler
 * 
 */
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus );

}

void printNumberLinesBackwards(int numLines){
    int i = 1;
    for (int k = numLines; k >= 1; k--){
        for (int j = k; j >= 1; j--){
            cout << i << " ";
            i++;
        }
        cout << " " << endl;
    }
    return;
}

/**
 * @brief for given number of nSeconds show the time with appropriate units.
 * include units like days, hours, mins, seconds
 * Ex 1: nSeconds = 50
 * Output 1:
 * 50second
 * 
 * Ex 2: nSeconds = 320
 * Output 2:
 * 5mins 20seconds
 * 
 * @param nSeconds 
 */
void printTime(long nSeconds){
    if (nSeconds >= 60){
        int days = nSeconds/86400;
        int hour = nSeconds/3600;
        int hours = hour % 24;
        int minute = nSeconds/60;
        int minutes = minute % 60;
        int seconds = nSeconds % 60;
        cout << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds." << endl;
    }
    else{
        cout << nSeconds << " seconds." << endl;
    }
}

bool isPrime(int numberInput){
    bool returnValue = true;
    for (int i = 2; i < numberInput; i++){
        if (numberInput % i == 0){
            returnValue = false;
            break;
        }
        else if (numberInput == 0){
            returnValue = false;
            break;
        }
        else{
            continue;
        }
    }
    return returnValue;
}

void printPrimes(int numUntil){
    vector<int> printNumbers;
    for (int i = 2; i < numUntil; i++){
        if (isPrime(i) == 1){
            printNumbers.push_back(i);
        }
    }
    for (int j = 0; j < printNumbers.size(); j++){
        cout << printNumbers[j] << endl;
    }
}

void printFactors(int numInput){
    vector<int> printFactors;
    while (numInput > 1){
        for (int i = 2; i <= numInput; i++){
            if (numInput % i == 0){
                if (isPrime(i) == 1){
                    printFactors.push_back(i);
                    numInput = numInput/i;
                    break;
                }
            }
        }
    }
    for (int j = 0; j < printFactors.size(); j++){
            cout << printFactors[j] << endl;
        }
}

int findGCF(int num1, int num2){
    int gcf = 1;
    int min;
    if (num1 > num2){
        min = num2;
    }
    else if (num1 < num2){
        min = num1;
    }
    for (int i = 1; i <= min; i++){
        if (num1 % i == 0 && num2 % i == 0){
            gcf = i;
        }
    }
    return gcf;
}

int findLCM(int n1, int n2){
    int lcm = n1 * n2 / findGCF(n1, n2);
    return lcm;
}

int MDistance(int S){
    int num = 0;
    for (int a = -1 * S; a <= S; a++){
        for (int b = -1 * S; b <= S; b++){
            if (abs(a) + abs(b) <= S){
                num += 1;
            }
        }
    }
    return num;
}

void gameOf21(){
    int ms = 21, p1, p2;
    int turn = 1;
    while (ms > 0){
        if (turn == 1){
            cout << "Enter the number of matchsticks between 1 and 4 (Player 1):" << endl;
            cin >> p1;
            if (1 <= p1 && p1 <= 4){
                ms -= p1;
                turn = 2;
            }
            else{
                cout << "Error, please enter a number between 1 and 4." << endl;
                turn = 1;
            }
            if (ms <= 0){
                cout << "Player 2 wins!" << endl;
                break;
            }
            cout << ms << endl;
        }
        if (turn == 2){
            cout << "Enter the number of matchsticks between 1 and 4 (Player 2):" << endl;
            cin >> p2;
            if (1 <= p2 && p2 <= 4){
                ms -= p2;
                turn = 1;
            }
            else{
                cout << "Error, please enter a number between 1 and 4." << endl;
                turn = 2;
            }
            if (ms <= 0){
                cout << "Player 1 wins!" << endl;
                break;
            }
            cout << ms << endl;
        }
    }
}

vector<int> oneToN(int n){
    vector<int> oneToNum;
    for (int i = 1; i <= n; i++){
        oneToNum.push_back(i);
    }
    return oneToNum;
}

int main() {
    int year;
    cout << "Enter a year to find out whether it is a leap year or not:" << endl;
    cin >> year;
    bool value = IsLeapYear(year);
    cout << value << endl;

    int numberIn;
    cout << "Enter the number to calculate the sum of the primes the number is divisible by:" << endl;
    cin >> numberIn;
    PrimeScore(numberIn);
    int primeScore = PrimeScore(numberIn);
    cout << primeScore << endl;

    greetMe();

    int size;
    cout << "Enter the size of the triangle of stars:" << endl;
    cin >> size;
    printIncreasing(size);

    int i;
    cout << "Enter the number to print until e.g. 0 to the number:" << endl;
    cin >> i;
    printTo(i);

    int numIn;
    cout << "Please enter a number to perform factorial upon:" << endl;
    cin >> numIn;
    factorial(numIn);
    int fact = factorial(numIn);
    cout << fact << endl;

    int numbIn;
    cout << "Enter a number to write the multiplication tables until 10:" << endl;
    cin >> numbIn;
    printTable(numbIn);

    int nuIn;
    cout << "Please enter the number to print the odds until, then calculate the sum of these numbers:" << endl;
    cin >> nuIn;
    printSumOfOdds(nuIn);

    int nLines;
    cout << "Enter a number" << endl;
    cin >> nLines;
    printNumberLines(nLines);

    int numLines;
    cout << "Enter the number:" << endl;
    cin >> numLines;
    printNumberLinesBackwards(numLines);

    long nSeconds;
    cout << "Print the number of seconds:" << endl;
    cin >> nSeconds;
    printTime(nSeconds);

    int numberInput;
    cout << "Print the number to check if its prime or not:" << endl;
    cin >> numberInput;
    bool rValue = isPrime(numberInput);
    cout << rValue << endl;

    int numUntil;
    cout << "Enter the number to print the primes until:" << endl;
    cin >> numUntil;
    printPrimes(numUntil);

    int numInput;
    cout << "Enter the number to print the prime factors of it:" << endl;
    cin >> numInput;
    printFactors(numInput);

    int num1, num2;
    cout << "Enter the first number:" << endl;
    cin >> num1;
    cout << "Enter the second number:" << endl;
    cin >> num2;
    int gcf = findGCF(num1, num2);
    cout << gcf << endl;

    int n1, n2;
    cout << "Enter the first number to calculate the LCM of:" << endl;
    cin >> n1;
    cout << "Enter the second number to calculate the LCM of:" << endl;
    cin >> n2;
    int lcm = findLCM(n1, n2);
    cout << lcm << endl;

    int S;
    cout << "Please enter the value of S:" << endl;
    cin >> S;
    int num = MDistance(S);
    cout << num << endl;

    gameOf21();

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    vector<int> one2N = oneToN(n);
    for (int j = 0; j < one2N.size(); j++){
            cout << one2N[j] << endl;
        }
    return 0; 
}