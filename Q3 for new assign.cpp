#include <iostream>
using namespace std;

class Seminar {
    int time;

public:
    // Function 1: Default Constructor
    Seminar() {
        time = 30;
        cout << "Seminar starts now" << endl;
    }

    // Function 2: Member Function lecture
    void lecture() {
        cout << "Lectures in the seminar on" << endl;
    }

    // Function 3: Parameterized Constructor
    Seminar(int duration) {
        time = duration;
        cout << "Seminar starts now" << endl;
    }

    // Function 4: Destructor
    ~Seminar() {
        cout << "Thanks" << endl;
    }
};

int main() {
    // Part a: Executing Function 1 and Function 3
    Seminar seminar1;           // Function 1 will be executed (Default Constructor)
    Seminar seminar2(60);       // Function 3 will be executed (Parameterized Constructor)

    // Part b: Destructor explanation
    // Destructor is automatically called when an object goes out of scope
    // or when the delete operator is used on a dynamically allocated object.
    // It is responsible for releasing resources held by the object.

    // Part c: Constructor Overloading
    // Function 1 and Function 3 illustrate constructor overloading.
    // Constructor overloading allows the class to have multiple constructors
    // with different sets of parameters. Depending on how an object is instantiated,
    // the appropriate constructor will be called.

    return 0;
}
