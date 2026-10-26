// Lorena Ruiz
// 101 918 32
// A09-Structs.cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
}; 

struct Employee {
    Person personalInfo;
    int employeeID;
    string department;
};

void printPersonByValue(Person person1) {
    person1.name = "Changed Name"; 
    person1.age = 40; 
    person1.address = "Changed Address"; 
    cout << person1.name << endl;
    cout << person1.age << endl;
    cout << person1.address << endl;
}

void printPersonByReference(Person& person2) {
    person2.name = "Changed Name"; 
    person2.age = 45; 
    person2.address = "Changed Address"; 
    cout << person2.name << endl;
    cout << person2.age << endl;
    cout << person2.address << endl;
}

void printEmployee(Employee employee) {
    cout << employee.personalInfo.name << endl;
    cout << employee.personalInfo.age << endl;
    cout << employee.personalInfo.address << endl;
    cout << employee.employeeID << endl;
    cout << employee.department << endl;
}

int main() {
    Person person1 = {"Alice", 30, "123 Main St"};
    Person person2;
    person2.name = "Bob";
    person2.age = 25;
    person2.address = "456 Oak Ave";

    printPersonByValue(person1);
    cout << "\nPerson 1 in main(): " << endl;
    cout << person1.name << endl;
    cout << person1.age << endl;
    cout << person1.address << endl;

    printPersonByReference(person2);
    cout << "\nPerson 2 in main(): " << endl;
    cout << person2.name << endl;
    cout << person2.age << endl;
    cout << person2.address << endl;

    Employee employee1 = {
        {"Alma", 65, "123 Alcove St"},
        1001,
        "Human Resources"
    };
    printEmployee(employee1);

    Employee employee2;
    employee2.personalInfo.name = "Sara";
    employee2.personalInfo.age = 28;
    employee2.personalInfo.address = "10 Park Road";
    employee2.employeeID = 1002;
    employee2.department = "IT";
    printEmployee(employee2);
    
    return 0;
}
