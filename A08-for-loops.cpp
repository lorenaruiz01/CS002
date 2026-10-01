//Lorena Ruiz
//CS002
//Assignment 8: For Loops
// Create a C++ program that uses a for loop to find and display all prime numbers between 1 and 100.

#include <iostream>

using namespace std;

int main() 
{
    int yourNumber;
    cout << "Enter a positive integer: ";
    cin >> yourNumber;

    // Check if the entered number is positive
    if (yourNumber <= 0) {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }
    
    if (yourNumber == 1 || yourNumber == 0) {
        cout << yourNumber << " is not a prime number." << endl;
        return 0;
    }
    // Check if the number is prime
    bool isPrime = true;
    
    }



