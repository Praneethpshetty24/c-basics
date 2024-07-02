#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age" << endl;
    cin >> age;
    /*if(age<18){  //(age <12 || age>21)
        cout<<"minor"<<endl;
    }
    else if (age>18){
        cout<<"Adult";
    }
    else
        cout<<"Invalid"; */

    switch (age)
    {
    case 1:
        cout << "your are 1 year old" << endl;
        break;   // if u want both 1 and 18 to print remove break
    case 2:
        cout << "your are 18 year old" << endl;
        break;
    default:
        cout << "You neither" << endl;
        break;
        exit(0);
    }

    return 0;
}
