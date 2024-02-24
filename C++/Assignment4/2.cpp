#include <iostream>
using namespace std;

class Calculation {
    double num1,num2;
public:
    Calculation(double num1, double num2)
    {
        this->num1=num1;
        this->num2=num2;
    }
    double add(double n1, double n2) {
        return n1 + n2;
    }

    double subtract(double n1, double n2) {
        return n1 - n2;
    }

    double multiply(double n1, double n2) {
        return n1 * n2;
    }

    double divide(double n1, double n2) {
        return n1 / n2;
    }
};

int main() {
    
    double num1 =4,num2=2;
    Calculation calc(num1,num2);

    cout << "Addition = " << calc.add(num1, num2) << endl;
    cout << "Subtraction = " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication = " << calc.multiply(num1, num2) << endl;
    cout << "Division = " << calc.divide(num1, num2) << endl;
    return 0;
}