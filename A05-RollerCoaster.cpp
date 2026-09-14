#include <iostream>
using namespace std;

// pseudocode for Roller Coaster program
// int main() {
//     // Declare variables
//     int height, age;
//     bool hasPermission;

//     // Get user input
//     std::cout << "Enter your height (in inches): ";
//     std::cin >> height;
//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     // Check if user is tall enough and old enough
//     if (height >= 48 && age >= 10) {
//         hasPermission = true;
//     } else {
//         hasPermission = false;
//     }

//     // Display result
//     if (hasPermission) {
//         std::cout << "You are allowed to ride the roller coaster." << std::endl;
//     } else {
//         std::cout << "You are not allowed to ride the roller coaster." << std::endl;
//     }

//     return 0;
// }

int main () {
    int weight, age;
    bool hasPermission;

    // Get user input for black roller coaster
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;

    // Check if user can ride the black roller coaster
    if (age <= 10 && weight <= 80) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the black roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the black roller coaster." << std::endl;
    }

    return 0;

    // Check if user can ride the gree roller coaster
    if (age <= 10 && weight >= 80 && weight <= 200) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the red roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the red roller coaster." << std::endl;
    }

    return 0;
}

