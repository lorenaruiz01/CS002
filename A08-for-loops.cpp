//Lorena Ruiz, 10191832
//CS002
//Assignment 8: For Loops
// Create a C++ program that uses a for loop to find and display all prime numbers between 1 and 100.

// first ask user to enter number
// second check if number is positive
// third check if number is less than 100
// fourth check if number is 1  
// fifth if number is prime, display all prime numbers between 1 and the entered number


#include <iostream>

using namespace std;

int main() 
{
    int yourNumber;
    cout << "Enter a positive integer less than 100: ";
    cin >> yourNumber;

    // Check if the entered number is positive
    if (yourNumber <= 0) {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }
    
    // Check if the entered number is less than 100
    if (yourNumber >= 100) {
        cout << "Error: Please enter a number less than 100." << endl;
        return 0;
    }

    // 1 is not a prime number
    if (yourNumber == 1) {
        cout << yourNumber << " is not a prime number." << endl;
        return 0;
    }

    // Check if the entered number is prime
    bool isPrime = true;
    for (int i = 2; i * i <= yourNumber; ++i) {
        if (yourNumber % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    // Display all prime numbers between 1 and the entered number if it is prime
    if (isPrime) {
        cout << yourNumber << " is a prime number." << endl;
        cout << "All the prime numbers up to " << yourNumber << " are:" << endl;
        for (int num = 2; num <= yourNumber; ++num) {
            bool isNumPrime = true;
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isNumPrime = false;
                    break;
                }
            }
            if (isNumPrime) {
                cout << num << " " << endl;
            }
        }
        cout << endl;
    } else {
        cout << yourNumber << " is not a prime number." << endl;
    
    }
    return 0;
}