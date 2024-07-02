#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int salary;

    employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void print()
    {

        cout << this->name << endl;
        cout << this->salary << endl;
    }
};

int main()
{
                                                        // see private protected
    employee me("Hi", 344);
    // me.name = "hello";
    // me.salary = 100;
    me.print();

    return 0;
}
