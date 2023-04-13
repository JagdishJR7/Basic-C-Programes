// functional overlading :- it a type in OOPs where two or more can share the same name but theirs parameters are different !
// lets make it for Area of circle, rectangle and cylindre
#include <iostream>
using namespace std;

const float PI = 3.14;
float area(float radius)
{
    return PI * radius * radius;
}
float area(float length, float width)
{
    return length * width;
}
float area(float radius, float height, bool isCylinder)
{
    float base = PI * radius * radius;
    float lateral = 2 * PI * radius * height;
    if (isCylinder)
    {
        return lateral + 2 * base;
    }
    else
    {
        return lateral + base;
    }
}
int main()
{
    char choice;
    cout << "Welcome to the functional overlaoding program!" << endl;
    // cin >> choice;
    do
    {

        cout << "Enter a to calculate the area of a circle. " << endl;
        cout << "Enter b to calculate the area of a rectangle. " << endl;
        cout << "Enter c to calculate the area of a cylinder. " << endl;
        cout << "Enter d to exit..."<<endl;
        cout<<"Enter your choice :";
        cin>>choice;

        switch (choice)
        {
        case 'a':
            float radius;
            cout << "Enter the radius of the circle :";
            cin >> radius;
            cout << "The area of the circle is :" << area(radius) << endl;
            break;

        case 'b':
            float length, width;
            cout << "Enter the length of the rectangle :";
            cin >> length;
            cout << "Enter the width of the rectangle :";
            cin >> width;
            cout << "The area of the rectangle is :" << area(length, width) << endl;
            break;

        case 'c':
            float cylinderRadius, cylinderHeight;
            cout << "Enter the radius of the cylinder :";
            cin >> cylinderRadius;
            cout << "Enter the height of the cylinder :";
            cin >> cylinderHeight;
            cout << "The area of the cylinder is :" << area(cylinderRadius, cylinderHeight, true) << endl;
            break;

        case 'd':
            cout << "Exiting Program...." << endl;
            break;

        default:
            cout << "Invalid choice. please enter a valid choice." << endl;
        }
        cout << endl;

        if (choice != 'd')
        {
            cout << "Do you want to continue? (y/n): ";
            cin >> choice;
            if (choice == 'n' || choice == 'N')
            {
                choice = 'd';
            }
            else
            {
                cout << endl;
            }
        }
    } 
    
    while (choice != 'd');
    return 0;
}
