#include <iostream>
using namespace std;

class Sample {
private:
    int x;
    double y;

public:
    // Constructor 1: Initialize private member variables to 0
    Sample() : x(0), y(0.0) {}

    // Constructor 2: Initialize private member variable x according to parameter value,
    // and initialize private member variable y to 0
    Sample(int value) : x(value), y(0.0) {}

    // Constructor 3: Initialize private member variables according to parameter values
    Sample(int value1, int value2) : x(value1), y(value2) {}

    // Constructor 4: Initialize private member variables according to parameter values
    Sample(int value1, double value2) : x(value1), y(value2) {}
};

int main() {
    // You can create objects of Sample and test the constructors if needed.
    return 0;
}
