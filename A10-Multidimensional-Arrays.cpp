//Lorena Ruiz
//10191832
//A10-Multidimensional-Arrays.cpp
#include <iostream>
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