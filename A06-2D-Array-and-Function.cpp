// Lorena Ruiz
// 10191832
// A06-2D-Array-and-Function.cpp

#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 8;

// Display the seating chart
void displaySeating(const char seats [][COLS], int rows, int cols) {
    cout << "  ";
    for (int j = 0; j < cols; ++j) {
        cout << j + 1 << " ";
    }
    cout << endl;

    for (int i = 0; i < rows; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < cols; ++j) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

// Reserves a seat if it is available
void reserveSeat(char seats[][COLS], int row, int col, int rows, int cols) {
    if (row < 1 || row > rows || col < 1 || col > cols) {
        cout << "Invalid seat selection." << endl;
        return;
    }

    row--; // Adjust for 0-based indexing
    col--; // Adjust for 0-based indexing

    if (seats[row][col] == 'O') {
        seats[row][col] = 'X';
        cout << "Seat reserved successfully." << endl;
    } else {
        cout << "Sorry, that seat is already reserved." << endl;
    }
}

// Counts the number of available seats
int countAvailableSeats(const char seats[][COLS], int rows, int cols) {
    int available = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (seats[i][j] == 'O') {
                available++;
            }
        }
    }
    return available;
}


int main() {

    char seats[ROWS][COLS];

    // Initialize all seats to '0' (available)
    for (int i = 0; i < ROWS; ++i) {
        for (int j= 0; j < COLS; ++j) {
            seats[i][j] = 'O'; // 'O' represents an available seat
        }
    }

    // Display the initial seating chart
    cout << "Initial seating chart:" << endl;
    displaySeating(seats, ROWS, COLS);

    // Reserve multiple seats
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y') {
        int row, col;
        cout << "Enter the row and column of the seat to reserve (e.g., 1 1 for the first seat): ";
        cin >> row >> col;
        reserveSeat(seats, row, col, ROWS, COLS);
        cout << "Updated seating chart:" << endl;
        displaySeating(seats, ROWS, COLS);
        cout << "Do you want to reserve another seat? (Y/N): ";
        cin >> choice;
    }

    int availableSeats = countAvailableSeats(seats, ROWS, COLS); 
    cout << "Available seats remaining: " << availableSeats << endl;

    return 0;
}