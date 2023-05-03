#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter any Number : ";
    cin >> n;

    // Check if n is divisible by any number from 2 to sqrt(n)
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    // Output the result
    if (isPrime && n > 1) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
