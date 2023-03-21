#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"Factorial of this number is :";
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    cout<<fact<<endl;
}