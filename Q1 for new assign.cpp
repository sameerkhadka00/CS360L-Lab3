#include <stdio.h>
#include <iostream>
using namespace std;

class A {
public:
    A(); 
    A(int); 
    A(const A&); 
    ~A(); 
    
    void operator=(const A& rhs); 
    void Print(); 
    void PrintC() const; 
    
    int x; 

    int& X() { return x; } 
};

A::A() : x(0) {
    cout << "Hello from A::A() Default constructor" << endl;
}

A::A(int i) : x(i) {
    cout << "Hello from A::A(int) constructor" << endl;
}

A::A(const A& a) : x(a.x) {
    cout << "Hello from A::A(const A&) constructor" << endl;
}

A::~A() {
    cout << "Hello from A::A destructor" << endl;
}

void A::operator=(const A& rhs) {
    x = rhs.x;
    cout << "Hello from A::operator=" << endl;
}

void A::Print() {
    cout << "A::Print(), x " << x << endl;
}

void A::PrintC() const {
    cout << "A::PrintC(), x " << x << endl;
}

void PassAByValue(A a) {
    cout << "PassAByValue, a.x " << a.x << endl;
    a.x++;
    a.Print();
    a.PrintC();
}

void PassAByReference(A& a) {
    cout << "PassAByReference, a.x " << a.x << endl;
    a.x++;
    a.Print();
    a.PrintC();
}

void PassAByConstReference(const A& a) {
    cout << "PassAByReference, a.x " << a.x << endl;
    a.PrintC(); 
}

void PassAByPointer(A* a) {
    cout << "PassAByPointer, a->x " << a->x << endl;
    a->x++;
    a->Print();
    a->PrintC();


int main() {
    A a0; 
    A a1(1); 
    A a2(a0); 
    A a3 = a0; 

    a3 = a1; 
    PassAByValue(a1);
    cout << "After PassAByValue(a1)" << endl;
    a1.Print();

    PassAByReference(a1);
    cout << "After PassAByReference(a1)" << endl;
    a1.Print();

    PassAByConstReference(a1);
    cout << "After PassAByConstReference(a1)" << endl;
    a1.Print();

    PassAByPointer(&a1);
    cout << "After PassAByPointer(a1)" << endl;
    a1.Print();

    a1.X() = 10;
    cout << "a1.X() = 10" << endl;
    a1.Print();

   

    return 0;
}
