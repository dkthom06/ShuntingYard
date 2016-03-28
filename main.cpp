#include <iostream>
#include <cstring>
#include <string>
#include <stack>
#include <sstream>

using namespace std;
bool y;
bool isOperator(const string& input) {
    string ops[] = {"-", "+", "*", "/", "rt", "^", "log"};

    for (int i = 0; i < 7; i++) {
        if (input == ops[i]) {
            return true;
        }

    }
    return false;
}

int main() {
    cout << false << endl;
    string input[] = {"4", "*", "(", "5", "^", "6", ")"};

    string x;
    x = input[3];

    for (int i = 0; i < 7; i++) {
        bool test = false;
        cout << "Test #" << i << " - ";
        if (input[i] == "*") {
            test = true;
        }

    y = isOperator(input[i]);
        cout << test;
        cout << " " << "Operator? - " << y << endl;

    }
cout << y << endl;
    return 0;
}
