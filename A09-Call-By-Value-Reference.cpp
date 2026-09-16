// Name: Lorena Ruiz (A10191832)

// program that updates a student's exam score by adding extra credit point. 
// Implement two functions - one that uses call by value and another that uses call by reference - to see how they affect the original score.

#include <iostream>
using namespace std;

// Function that uses call by value
// takes an integer student score, adds 5 extra points, and returns a new score.
int addExtraCreditValue(int studentScore) {
    int newScore = studentScore + 5; // add 5 extra points
    return studentScore; // return the original score
    return newScore; // return the new score
}

// Function that uses call by reference
// takes an integer student score by reference, adds 5 extra points, and updates the original score.
void addExtraCreditReference(int &studentScore) {
    studentScore += 5; // add 5 extra points to the original score
}

int main() {
    int score;

    // Get user input
    cout << "Enter the student's exam score: ";
    cin >> score;

    // Call the function that uses call by value
    int newScoreValue = addExtraCreditValue(score);
    cout << "Original score after call by value: " << score << endl; // should print the original score
    cout << "New score after call by value: " << newScoreValue << endl; // should print the new score

    // Call the function that uses call by reference
    addExtraCreditReference(score);
    cout << "Original score after call by reference: " << score << endl; // should print the updated score

    return 0;
}
