#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"What is a : ";
    cin>>a;
    cout<<"What is b : ";
    cin>>b;
    int c = a;
    // c = a;
    a = b;
    b = c;
    // cout<<"Now the value of <a> "<< a<<" and <b> is "<< b;
    cout<<"After Swaping ......."<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}
