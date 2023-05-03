#include <iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];

    cout<<"Enter the values to display :\n";
    for(int i=0; i<n; i++){
        cin>>num;
        a[i]=num;
    }
    cout<<"The value of array is : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
