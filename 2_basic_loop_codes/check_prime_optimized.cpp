#include <iostream>
#include <cmath>
using namespace std;

bool checkprime(int num) {
    if (num <= 1) return false; // Handle edge cases
    if (num == 2) return true; // 2 is prime
    if (num % 2 == 0) return false; // Exclude even numbers

    int sq_of_num = sqrt(num);
    for (int i = 3; i <= sq_of_num; i += 2) { // Check only odd numbers
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int A;
    cout << "Enter a number: ";
    cin >> A;
    cout << (checkprime(A) ? "Prime" : "Not Prime") << endl; // Output message
}
