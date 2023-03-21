#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter first no. :";
    cin>>num1;
    cout<<"Enter second no. :";
    cin>>num2;
    if (num1==num2){
        cout<<num1<<"="<<num2<<endl;
    }
    else if(num1>num2){
        cout<<num1<<">"<<num2<<endl;
    }
    else{
        cout<<num1<<"<"<<num2<<endl;
    }
}