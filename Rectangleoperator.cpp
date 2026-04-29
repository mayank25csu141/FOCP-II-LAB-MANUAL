#include <iostream>
using namespace std;
class Rectangle
{
private:
    int width, length;
public:
    Rectangle(int w = 0, int l = 0)
    {
        width = w;
        length = l;
    }
    void display()
    {
        cout << "Width: " << width << ", Length: " << length << endl;
    }
    Rectangle operator*(Rectangle obj)
    {
        Rectangle result;
        result.width = width + obj.width;
        result.length = length + obj.length;
        return result;
    }
    friend Rectangle operator*(Rectangle obj1, Rectangle obj2);
    friend Rectangle operator*(Rectangle obj1, int v);
};
Rectangle operator*(Rectangle obj1, Rectangle obj2)
{
    Rectangle temp;
    temp.width = obj1.width * obj2.width;
    temp.length = obj1.length * obj2.length;
    return temp;
}
Rectangle operator*(Rectangle obj1, int v)
{
    Rectangle temp;
    temp.width = obj1.width * v;
    temp.length = obj1.length * v;
    return temp;
}
int main()
{
    Rectangle r1(5, 10), r2(67, 90);
    r1.display();
    r2.display();
    Rectangle r3 = operator*(r1, r2); // r1*r2;
    r3.display();
    return 0;
}
