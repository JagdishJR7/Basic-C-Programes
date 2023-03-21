#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci series :";
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

bool is_even(int n){
    return n % 2 ==0;
}

bool is_palindrome(int n){
    int rev=0,rem,ori=n;
    while(n!=0){
        rem = n % 10;
        rev = (rev * 10 ) + rem;
        n/=10;
    }
    return ori == rev;
}

int main()
{
    char choice;
    int num;
    do
    {
        cout << "Menu:\n";
        cout << "a. Display Fibonacci series\n";
        cout << "b. Compute Factorial\n";
        cout << "c. Check wheter a number is odd or even\n";
        cout << "d. check whether a number is palindrome or not\n";
        cout << "e. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'a':
            cout << "Enter a number: ";
            cin >> num;
            fibonacci(num);
            break;

        case 'b':
            cout<<"Enter number :";
            cin>>num;
            cout<<"Factorial of "<< num<<"is "<<factorial(num)<<endl;
            break;

        case 'c':
            cout<<"Enter a number :";
            cin>>num;
            if(is_even(num)){
                cout<<num<<" is even."<<endl;
            }
            else{
                cout<<num<<" is odd."<<endl;
            }
            break;

        case 'd':
            cout<<"Enter the digit :";
            cin>>num;
            if (is_palindrome(num)){
                cout<<num<<" is palndrome.";
            }
            else{
                cout<<num<<" is not palndrome.";
            }

            break;

        case 'e':
            cout<<"Exiting Program...."<<endl;
            break;
            
        default:
            cout<<"Invalid choice. please enter a valid choice."<<endl;
        }
        cout<<endl;
    }

    while (choice != 'e');
    return 0;
}
