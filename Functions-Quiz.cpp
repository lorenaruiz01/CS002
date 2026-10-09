/*
Write a C++ function count_numbers that receives 2 integers and prints numbers from the first to the second, inclusive. For example if you give it the two numbers 5 and 12, you should see:

5

6

7

8

9

10

11

12

negative numbers and zero are allowed. If the first number is greater than the second, then the function should swap them before printing them.

write a second function called is_prime.

It should return true if the integer passed to it is a prime and false if the integer passed to it isn't a prime. Remember a prime number is a number that can only be divided evenly (without a remainder) by 1 and by itself.

It only needs to work for integers between 2 and 1000.

Call is_prime from an if statement in main() and print "the number is prime" if the number is prime and "the number is not prime" if the number passed to is_prime isn't a prime.

Remember is_prime returns a boolean and you must use it's return value in the if statement in main().

Please note the is_prime function has nothing to do with the count_numbers function. One should not be called from the other. They are both called from main().
*/

#include <iostream>
using namespace std;

// Prints numbers from a to b, inclusive
void count_numbers(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        cout << i << endl;
    }
}
// Determines if a number is prime
bool is_prime(int n) {
    // Check if the number is less than 2
    if (n < 2) {
        return false;
    }
    // Check for divisors from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    //ask user to enter two numbers
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Call count_numbers
    count_numbers(num1, num2);
    //ask user to enter a number to check for primality
    int num;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;
    if (is_prime(num)) {
        cout << "the number is prime" << endl;
    } else {
        cout << "the number is not prime" << endl;
    }
    return 0;
}