#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;  

    for (int i = 1; i <= limit; i++) {
        cout << (2 * i - 1);
        if (i != limit) cout << ", ";
    }

    return 0;
}
