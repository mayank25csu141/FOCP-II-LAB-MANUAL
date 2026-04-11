/*Create two classes: Employee with name, and Department with department name.
Derive a class Manager that displays both employee name and department.
Demonstrate usage through object creation.((Employee, Department)Manager)*/
#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
public:
    Employee(string name)
    {
        this->name = name;
    }
};
class Department
{
protected:
    string depname;
public:
    Department(string depname)
    {
        this->depname = depname;
    }
};
class Manager : public Employee, public Department
{
public:
    Manager(string name, string depname) : Employee(name), Department(depname)
    {
    }
    void print()
    {
        cout << "name is " << name << endl;
        cout << "department name is " << depname << endl;
    }
};
int main()
{
    Manager m1("mayank ", "mitul");
    m1.print();
    return 0;
}