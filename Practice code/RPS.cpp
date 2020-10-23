#include <iostream>
#include <random>
using namespace std;

bool run = true;

int main() {
  cout << "Welcome to Rock, Paper, Scissors!" << endl;
  
  while (run == true) {
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> distr(0, 3); 
    int computer = distr(gen);

    int choice = 0;
    cout << "Enter your choice, 1 (Rock), 2 (Paper), 3 (Scissors): ";
    cin >> choice;

    // Check if it is a draw. 
    if (choice == 1 && computer == 1) {
      cout << "It is a draw!" << endl;
    }
    if (choice == 2 && computer == 2) {
      cout << "It is a draw!" << endl;
    }
    if (choice == 3 && computer == 3) {
      cout << "It is a draw!" << endl;
    }

    // Check if you won.
    if (choice == 1 && computer == 3) {
      cout << "You Won!" << endl;
    }
    if (choice == 2 && computer == 1) {
      cout << "You Won!" << endl;
    }
    if (choice == 3 && computer == 2) {
      cout << "You Won!" << endl;
    }

    // Check if computer won.
    if (computer == 1 && choice == 3) {
      cout << "Computer Won!" << endl;
    }
    if (computer == 2 && choice == 1) {
      cout << "Computer Won!" << endl;
    } 
    if (computer == 3 && choice == 2) {
      cout << "Computer Won!" << endl;
    }
    string x = " ";
    cout << "Do you want to continue playing: ";
    cin >> x;
    if (x == "Y") {
      cout << "Great!";
    }
    else {
      cout << "Bye";
      exit(0);
    }
    }
}