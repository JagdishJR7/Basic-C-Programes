#include <iostream>
using namespace std;

class Car{
    char name[30];
    char model;
    int year;
    public:
        void getdata(void);
        void putdata(void);
};
void Car :: getdata(void){
    cout<<"Enter the name of car :";
    cin>>name;
    cout<<"Enter the model of car :";
    cin>>model;
    cout<<"Enter the car's year :";
    cin>>year;
}
void Car :: putdata(void){
    cout<<"Name :"<<name<<endl;
    cout<<"Model :"<<model<<endl;
    cout<<"Year :"<<year<<endl;
}

int main(){
    const int size=2;
    Car data[size];
    for (int i=0; i<size; i++){
        cout<<"nDetails of car "<< i+1<<"\n";
        data[i].getdata();
    }
    cout<<"\n"<<endl;
    for (int i=0; i<size; i++){
        cout<<"\nCar"<<i+1<<"\n";
        data[i].putdata();
    }
    return 0;
}