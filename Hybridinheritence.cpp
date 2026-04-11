#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A()
    {
        a = 150;
        cout << "Default Constructor A Called" << endl;
    }
    ~A()
    {
        cout << "Object A is destroyed " << endl;
    }
    void display_A()
    {
        cout << "Value of a: " << a << endl;
    }
};
class B : virtual public A //virtual is used  for multiple child and one parent only in hybrid and diamond problem
{
public:
    int b;
    B()
    {
        b = 219;
        cout << "Default constructor B called" << endl;
    }
    ~B()
    {
        cout << "Object B is destroyed" << endl;
    }
    void display_B()
    {
        cout << "Value of b: " << b << endl;
    }
};
class C : virtual public A
{
public:
    int c;
    C()
    {
        c = 350;
        cout << "Default constructor C called" << endl;
    }
    ~C()
    {
        cout << "Object C is destroyed" << endl;
    }
    void display_C()
    {
        cout << "Value of c: " << c << endl;
    }
};
class D : public B, public C
{
public:
    int d;
    D()
    {
        d = 86;
        cout << "Default constructor D is called" << endl;
    }
    ~D()
    {
        cout << "Object D is destroyed" << endl;
    }
    void display_D()
    {
        display_A();
        display_B();
        display_C();
        cout << "\n Value of d: " << d << endl;
    }
};
int main()
{
    D dobj;
    // D*dptr=new D();
    dobj.display_D();
    return 0;
}
