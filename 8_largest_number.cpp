#include <iostream>
// #include <string.h>
using namespace std;

class set{
    int m,n;
    public:
        void input(void);
        void display(void);
        int largest(void);
};

int set::largest(void){
    if (m>n){
        return m;
    }
    else{
        return n;
    }
}

void set:: input(void){
    cout<<"Enter the first no. :";
    cin>>m;
    cout<<"Enter the second no. :";
    cin>>n;
}

void set::display(void){
    cout<<"largest number b/t "<<m <<" and "<<n <<" is: "<< largest()<<endl;
}

int main(){
    set A;
    A.input();
    A.display();

    return 0;
}