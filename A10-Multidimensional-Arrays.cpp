//Lorena Ruiz
//10191832
//A10-Multidimensional-Arrays.cpp
#include <iostream>
using namespace std;

const int N = 3; // Number of students
const int M = 4; // Number of subjects

void inputScores(int arr[][M], int n, int m);

void calculatesStudentAverages(
    const int arr[][M], int n, int m, double studentAvg[]
);

void calculateSubjectAverages(
    const int arr[][M], int n, int m, double subjectAvg[]
);

void printScoresTable(
    const int arr[][M], int n, int m, 
    const double studentAvg[], const double subjectAvg[]
);

