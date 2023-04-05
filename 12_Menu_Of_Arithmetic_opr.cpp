#include <iostream>
using namespace std;

float addition(float num1, float num2)
{

    return num1 + num2;
}

float subtraction(float num1, float num2)
{

    return num1 - num2;
}

float multiplication(float num1, float num2)
{

    return num1 * num2;
}

float division(float num1, float num2)
{

    if (num2 == 0)
    {

        cout << "Error: Cannot divide by zero." << endl;

        return 0;
    }

    else
    {

        return num1 / num2;
    }
}

int main()
{

    int choice;

    float num1, num2, result;

    cout << "Welcome to the Arithmetic Program!" << endl;

    while (true)
    {

        cout << "Please select an operation:";

        cout << "a. Addition" ;

        cout << "b. Subtraction";

        cout << "c. Multiplication";

        cout << "d. Division";

        cout << "e. Exit";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {

        case 'a':

            cout << "Enter the first number: ";

            cin >> num1;

            cout << "Enter the second number: ";

            cin >> num2;

            result = addition(num1, num2);

            cout << "The sum is " << result << endl;

            break;

        case 'b':

            cout << "Enter the first number: ";

            cin >> num1;

            cout << "Enter the second number: ";

            cin >> num2;

            result = subtraction(num1, num2);

            cout << "The difference is " << result << endl;

            break;

        case 'c':

            cout << "Enter the first number: ";

            cin >> num1;

            cout << "Enter the second number: ";

            cin >> num2;

            result = multiplication(num1, num2);

            cout << "The product is " << result << endl;

            break;

        case 'd':

            cout << "Enter the first number: ";

            cin >> num1;

            cout << "Enter the second number: ";

            cin >> num2;

            result = division(num1, num2);

            if (result != 0)
            {

                cout << "The quotient is " << result << endl;
            }

            break;

        case 'e':

            cout << "\nGoodbye!" << endl;

            return 0;

        default:

            cout << "\nInvalid choice. Please try again." << endl;
        }
    }

    return 0;
}
