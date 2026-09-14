#include <iostream>
using namespace std;

// Name: Lorena Ruiz (A10191832)

int main () {
    int weight, age;
    bool hasPermission;

    // Get user input
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

    // Check if user can ride the green roller coaster
    if (age <= 10 && weight >= 80 && weight <= 200) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the green roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the green roller coaster." << std::endl;
    }

    return 0;

    if (age <= 10 && weight >= 200) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the yellow roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the yellow roller coaster." << std::endl;
    }

    return 0;

    if (age <= 20 && age > 10 && weight <= 80) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the silver roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the silver roller coaster." << std::endl;
    }

    return 0;

    if (age <= 20 && age > 10 && weight >= 80 && weight <= 200) {
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

    if (age <= 20 && age > 10 && weight >= 200) {
        hasPermission = true;
    } else {
        hasPermission = false;
    }

    // Display result
    if (hasPermission) {
        cout << "You can ride the purple roller coaster." << std::endl;
    } else {
        cout << "You are not allowed to ride the purple roller coaster." << std::endl;
    }

    return 0;

    else {
        hasPermission = true;
    } 
    // Display result
    if (hasPermission) {
        cout << "You can ride the pink roller coaster." << std::endl;
}
