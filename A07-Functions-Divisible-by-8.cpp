// Name: Lorena Ruiz (A10191832)

// program that gets a positive integer from the user and prints all even numbers from zero to that number. Then returns true for each number divisible by 8. 

#include <iostream>
using namespace std;

void print_evens(int numberFromUser);
bool is_divisible_by_8(int numberFromUser);

// Gets a positive integer from the user. 
int main() {
    
    // Get user input
    cout << "Enter a number: ";
    int numberFromUser;
    cin >> numberFromUser;
    while (numberFromUser  <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> numberFromUser;
    }

    // Call the function to print even numbers
    print_evens(numberFromUser);

    return 0;
}

// prints all even numbers from zero to the number it was passed from main()
void print_evens(int numberFromUser) {
    for (int i = 0; i <= numberFromUser; i += 2) {
        cout << i << "\n";

        // function call to check if the number is divisible by 8
        if (is_divisible_by_8(i)) {
            cout << i << " is divisible by 8. \n";
        }
    }
} 

// returns true for each number divisible by 8
bool is_divisible_by_8(int numberFromUser) {
    return numberFromUser % 8 == 0;
    }
