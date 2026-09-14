#include <iostream>
using namespace std;

int main() {
    
    // Get user input
    cout << "Enter a number: ";
    int number;
    cin >> number;
    while (number  <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }
}