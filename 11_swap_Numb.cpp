#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    int c = a;
    // c = a;
    a = b;
    b = c;
    cout<<"Now the value of <a> "<< a<<" and <b> is "<< b;
}