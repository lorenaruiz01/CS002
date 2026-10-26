//Lorena Ruiz
//10191832
//A10-Multidimensional-Arrays.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int N = 3; // Number of students
const int M = 4; // Number of subjects

void inputScores(int arr[][M], int n, int m);

void calculateStudentAverages(
    const int arr[][M], int n, int m, double studentAvg[]
);

void calculateSubjectAverages(
    const int arr[][M], int n, int m, double subjectAvg[]
);

void printScoresTable(
    const int arr[][M], int n, int m, 
    const double studentAvg[], const double subjectAvg[]
);

int main() {
    int scores[N][M];
    double studentAvg[N] = {0};
    double subjectAvg[M] = {0};

    inputScores(scores, N, M);
    calculateStudentAverages(scores, N, M, studentAvg);
    calculateSubjectAverages(scores, N, M, subjectAvg);
    printScoresTable(scores, N, M, studentAvg, subjectAvg);

    return 0;
}

void inputScores(int arr[][M], int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << "Enter scores for student " << i + 1 << ":" << endl;
        for (int j = 0; j < m; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void calculateStudentAverages(const int arr[][M], int n, int m, double studentAvg[]) {
    for (int i = 0; i < n; i++) {
        int sum = 0; 

        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        studentAvg[i] = static_cast<double>(sum) / m;
    }
}

void calculateSubjectAverages(const int arr[][M], int n, int m, double subjectAvg[]) {
    for (int j = 0; j < m; j++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        subjectAvg[j] = static_cast<double>(sum) / n;
    }
}

void printScoresTable(const int arr[][M], int n, int m,
                      const double studentAvg[],
                      const double subjectAvg[]) {
    cout << "\nScores Table:\n";

    cout << left << setw(12) << " ";

    for (int j = 0; j < m; j++) {
        cout << right << setw(8) << ("Subj " + to_string(j + 1));
    }

    cout << right << setw(10) << "Average" << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        cout << left << setw(12) << ("Student " + to_string(i + 1));

        for (int j = 0; j < m; j++) {
            cout << right << setw(8) << arr[i][j];
        }

        cout << right << setw(10) << studentAvg[i] << endl;
    }

    cout << left << setw(12) << "Average";

    for (int j = 0; j < m; j++) {
        cout << right << setw(8) << subjectAvg[j];
    }

    cout << endl;
}