#include <iostream>
using namespace std;

class Student{
    char name[30];
    int age;
    public:
        void getdata(void);
        void putdata(void);
};
void Student :: getdata(void){
    cout<<"Enter the name of student :";
    cin>>name;
    cout<<"Enter the age of student :";
    cin>>age;
}
void Student :: putdata(void){
    cout<<"Name :"<<name<<endl;
    cout<<"Age :"<<age<<age;
}

int main(){
    const int size=2;
    Student data[size];
    for (int i=0; i<size; i++){
        cout<<"nDetails of student "<< i+1<<"\n";
        data[i].getdata();
    }
    cout<<"\n"<<endl;
    for (int i=0; i<size; i++){
        cout<<"\nStudent"<<i+1<<"\n";
        data[i].putdata();
    }
    return 0;
}