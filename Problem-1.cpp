#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, string op) {
        if (op == "add") return a + b;
        else if (op == "sub") return a - b;
        else if (op == "mul") return a * b;
        else if (op == "div") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operation (add/sub/mul/div): ";
    cin >> op;

    Calculator calc;
    double result = calc.calculate(a, b, op);

    cout << "Result = " << result << endl;
    return 0;
}
