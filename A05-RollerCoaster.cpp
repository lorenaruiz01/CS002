#include <iostream>
using namespace std;

// Name: Lorena Ruiz (A10191832)

int main () {
    int weight, age;

    // Get user input
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;

    // Check which roller coaster the user can ride
    if (age <= 10 && weight <= 80) {
        cout << "You can ride the black roller coaster." << std::endl;
    } else
    
    if (age <= 10 && weight >= 80 && weight <= 200) {
        cout << "You can ride the green roller coaster." << std::endl;
    } else

    if (age <= 10 && weight >= 200) {
        cout << "You can ride the yellow roller coaster." << std::endl;
    } else

    if (age <= 20 && age > 10 && weight <= 80) {
        cout << "You can ride the silver roller coaster." << std::endl;
    } else

    if (age <= 20 && age > 10 && weight >= 80 && weight <= 200) {
        cout << "You can ride the red roller coaster." << std::endl;
    } else

    if (age <= 20 && age > 10 && weight >= 200) {
        cout << "You can ride the purple roller coaster." << std::endl;
    } else {
        cout << "You can ride the pink roller coaster." << std::endl;
    }

    return 0;

 }