#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (originalNum > 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of digits
    while (originalNum > 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    return sum == num; // Check if the sum equals the original number
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
