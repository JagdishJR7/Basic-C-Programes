#include <iostream>
using namespace std;

int main(){
    int n,rem,rev=0;
    cout<<"Enter the digit :";
    cin>>n;
    int ori = n;
    while (n!=0){
        rem = n % 10;
        rev = (rev * 10) + rem;
        n/=10;
    }
    if (rev==ori){
        cout<<"The no. is palindrome .";
    }
    else{
        cout<<"The no. is not palindrome .";
    }
}