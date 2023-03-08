#include <iostream>

using namespace std;

int sumNumbers(string input) {
    int sum = 0;
    for (int n = 0; n < input.length(); n++) {
        char value = input[n];
        if (isdigit(value)) {
            int number = value - '0';
            sum += number;
        }
    }
    return sum;
}

int main() {
    string input = "54321";
    int sum = sumNumbers(input);
    cout << "Sum Of Numbers " << input << " is " << sum << endl;
}
