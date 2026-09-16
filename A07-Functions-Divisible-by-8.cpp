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
// prints all even numbers from zero to the number it was passed from main()
void print_evens(int number) {
    for (int i = 0; i <= number; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}