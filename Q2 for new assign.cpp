#include <iostream>
#include <string>
using namespace std;

// Class Student
class Student {
protected:
    int studentNumber;
    string studentName;
    double studentAverage;
public:
    // Constructor with default values
    Student() : studentNumber(0), studentName(""), studentAverage(0.0) {}

    // Set functions
    void setStudentNumber(int num) { studentNumber = num; }
    void setStudentName(string name) { studentName = name; }
    void setStudentAverage(double avg) { studentAverage = avg; }

    // Get functions
    int getStudentNumber() const { return studentNumber; }
    string getStudentName() const { return studentName; }
    double getStudentAverage() const { return studentAverage; }

    // Print function
    void Print() const {
        cout << "Student Number: " << studentNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Student Average: " << studentAverage << endl;
    }
};

// Class GraduateStudent inherits from Student
class GraduateStudent : public Student {
protected:
    int level;
    int year;
public:
    // Constructor
    GraduateStudent() : level(0), year(0) {}

    // Set functions
    void setLevel(int lvl) { level = lvl; }
    void setYear(int yr) { year = yr; }

    // Get functions
    int getLevel() const { return level; }
    int getYear() const { return year; }

    // Print function
    void Print() const {
        Student::Print(); // Call base class print function
        cout << "Level: " << level << endl;
        cout << "Year: " << year << endl;
    }
};

// Class Master inherits from GraduateStudent
class Master : public GraduateStudent {
protected:
    int newId;
public:
    // Constructor
    Master() : newId(0) {}

    // Set function
    void setNewId(int id) { newId = id; }

    // Get function
    int getNewId() const { return newId; }

    // Print function
    void Print() const {
        GraduateStudent::Print(); // Call base class print function
        cout << "New ID: " << newId << endl;
    }
};

int main() {
    // Declare object of type Student with suitable values then print it
    Student student1;
    student1.setStudentNumber(1001);
    student1.setStudentName("John Doe");
    student1.setStudentAverage(85.5);
    cout << "Student Information:" << endl;
    student1.Print();
    cout << endl;

    // Declare object of type Master with your information then print it
    Master master1;
    master1.setStudentNumber(2001);
    master1.setStudentName("Jane Smith");
    master1.setStudentAverage(90.0);
    master1.setLevel(2);
    master1.setYear(2023);
    master1.setNewId(123456);
    cout << "Master's Information:" << endl;
    master1.Print();

    return 0;
}
