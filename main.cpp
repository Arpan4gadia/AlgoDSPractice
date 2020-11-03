#include <iostream>
#include <vector>
using namespace std;

int PrimeScore(int);
bool IsLeapYear(int);
void greetMe();
void printIncreasing(int);
void printTo(int);
int factorial(int);
int multiplyNumbers(int);
void printTable(int);
void printSumOfOdds(int);
void printCPPVersion();
void printNumberLines(int);
bool isPrime(int);
vector<int> PrintPrimes(int);
vector<int> PrimeFactors(int);
int FindGCD(int, int);
int FindLCM(int, int); 
int PrintVector(vector<int>);
int FindPoints(int);

int PrimeScore(int numberIn){
    int score = 0;
    int mod2 = numberIn % 2;
    int mod3 = numberIn % 3;
    int mod5 = numberIn % 5;
    int mod7 = numberIn % 7;
    int mod11 = numberIn % 11;
    int mod13 = numberIn % 13;
    int mod17 = numberIn % 17;
    int mod19 = numberIn % 19;
    if (mod2 == 0) {
        score += 2;
    }
    if (mod3 == 0) {
        score += 3;
    }
    if (mod5 == 0) {
        score += 5;
    }
    if (mod7 == 0) {
        score += 7;
    }
    if (mod11 == 0) {
        score += 11;
    }
    if (mod13 == 0) {
        score += 13;
    }
    if (mod17 == 0) {
        score += 17;
    }
    if (mod19 == 0) {
        score += 19;
    }
    return score;
    }
bool IsLeapYear(int year){
    bool ret = true;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            ret = true;
        }
        else
        {
            ret = false;
        }
    }
    else if (year % 4 == 0)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    return ret;
}
void greetMe() {
    string name = "";
    int age = 0;
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
void printIncreasing( int size) {
    for (int k = 1; k <= size; k++) {
        for (int j = 1; j <= k; j++) {
            cout << "*";
        }
        cout << " " << endl;
    } 
}
void printTo(int i){
    for (int j = 0; j <= i; j++) {
        cout << j << ", " << endl;
    }
}
int factorial(int numIn) {
    int i = 1, fact = 1;
    for (i = 1; i <= numIn; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << numIn << " is: " << fact << endl;
    return 0;
}
int multiplyNumbers(int n) {
    if (n >= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}
void printTable(int numberIn) {
    int i = 0;
    for (i; i <= 10; i++) {
        cout << numberIn << " * " << i << " = " << numberIn * i << endl;
    }
}
void printSumOfOdds(int numberIn) {
    int i = 0;
    int sum = 0;
    for (i; i <= numberIn; i++) {
        if (i % 2 == 1) {
            cout << i << ", ";
            sum += i;
        }
        }
cout << sum;
}
void printCPPVersion(){
    printf("__cplusplus = %d!\n", __cplusplus);
}
void printNumberLines(int nLines) {
    int i = 1;
    for (int j = 0; j < nLines; ++j) {
        for (int k = 0; k < (nLines-j); ++k) {
            cout << i << ' ';
            i++;
        }
        cout << endl;
    }
    int l = 0;
    for (int a = 1; a <= nLines; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << l << ' ';
            l++;
        }
        cout << endl;
    }
}
bool isPrime(int InNumber)
{
    if (InNumber == 2)
        return true;
    for (int i = 2; InNumber > i; i++)
    {
        if (InNumber % i == 0)
            return false;
    }
    return true;
}
vector<int> PrintPrimes(int InputNum)
{
    vector<int> primes;
    for (int i = 2; InputNum > i; i++)
    {
        if (isPrime(i) == true)
        {
            primes.push_back(i);
        }
    }
    return primes;
}
vector<int> PrimeFactors(int n) {
    vector<int> factors;
    while (n > 1)
    {
        for (int yay = 2; yay <= n; yay++)
        {
            if (n % yay == 0)
            {
                if (isPrime(yay) == 1)
                {
                    factors.push_back(yay);
                    n = n / yay;
                    break;
                }
            }
        }
    }
    return factors;
}
int FindGCD(int num1, int num2) {
    vector<int> common;
    vector<int> factors_of_num1 = PrimeFactors(num1);
    vector<int> factors_of_num2 = PrimeFactors(num2);

    for (int item = 0; item < factors_of_num1.size(); item++) {
        for (int item1 = 0; item1 < factors_of_num2.size(); item1++) {
            if (factors_of_num1[item] == 0 || factors_of_num2[item1] == 0) 
                continue;
            if (factors_of_num1[item]  == factors_of_num2[item1]) {
                common.push_back(factors_of_num1[item]);
                factors_of_num1[item] = 0;
                factors_of_num2[item1] = 0;
            }
        }
    }

    
    int gcd = 1;

    for (int i = 0; i < common.size(); i++) {
        gcd *= common[i];
    }
    return gcd;
}
int PrintVector(vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }
    return 0;
}
int FindLCM(int n1, int n2) {
    int lcm = n1 * n2 / FindGCD(n1, n2);
    return lcm;
}
int FindPoints(int S) {
    // Calculate Manhatan distance
    int num1 = 0;
    for (int a = -1 * S; a <= S; a++)
    {
        for (int b = -1 * S; b <= S; b++)
        {
            if (std::abs(a) + std::abs(b) <= S)
            {
                num1 += 1;
            }
        }
    }
    return num1;
}
int main()
{
    int number = 0;
    int year = 0;
    cout << "Enter any number: ";
    cin >> number;
    int score = PrimeScore(number);
    cout << score << endl;

    cout << "Enter a year: ";
    cin >> year;
    bool hi = IsLeapYear(year);
    cout << hi << endl;

    greetMe();

    printCPPVersion();


    int a = 0;
    cout << "Enter any number: ";
    cin >> a;
    printIncreasing(a);


    int b = 0;
    cout << "Enter any number: " << endl;
    cin >> b;
    printTo(b);

    int c = 0;
    cout << "Enter a number: ";
    cin >> c;
    factorial(c);

    int f = 0;
    cout << "Enter a number: ";
    cin >> f;
    printf("Factorial of %d = %ld", f, multiplyNumbers(f));

    int d = 0;
    cout << "Enter a number: ";
    cin >> d;
    printTable(d);

    int e = 0;
    cout << "Enter a number: ";
    cin >> e;
    printSumOfOdds(e);

    int g = 0;
    cout << "Enter a number: ";
    cin >> g;
    printNumberLines(g);

    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    bool prime = isPrime(number);
    cout << prime;

    int numinput = 0;
    cout << "Enter a number: ";
    cin >> numinput;
    vector<int> primes = PrintPrimes(numinput);
    for (int j = 0; j <= primes.size(); j++)
    {
        cout << primes[j];
    }
    int prime_factors = 0;
    cout << "Enter a number: ";
    cin >> prime_factors;
    vector<int> factors = PrimeFactors(prime_factors);
    for (int j = 0; j < factors.size(); j++)
    {
        cout << factors[j] << ", ";
    }

    int num1 = 0; 
    int num2 = 0;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    int gcd1 = FindGCD(num1, num2);
    cout << gcd1 << endl;

    int a = 0, b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int lcm = FindLCM(a, b);

    int points = 0;
    cout << "Enter the amount of points: ";
    cin >> points;
    points1 = FindPoints(points)
    cout << points1;
}
