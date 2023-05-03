#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the range of numbers to check for primes: ";
    cin >> n;

    // Loop through each number in the range
    cout<<"Prime numbers are : ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        // Check if i is divisible by any number from 2 to i-1
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // Output the prime numbers
        if (isPrime) {
            cout << setw(2) <<i;
        }
    }

    return 0;
}
