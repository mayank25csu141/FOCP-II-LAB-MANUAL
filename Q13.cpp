//A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
//solution to calculate the roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;

    cout << "Enter coefficients a b c: ";
    cin >> a >> b >> c;

    if(a == 0){
        cout << "Not a quadratic equation (a cannot be 0)";
        return 0;
    }

    double D = b*b - 4*a*c;

    if(D > 0){
        double r1 = (-b + sqrt(D)) / (2*a);
        double r2 = (-b - sqrt(D)) / (2*a);

        cout << "Roots are real and distinct\n";
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if(D == 0){
        double r = -b / (2*a);

        cout << "Roots are real and equal\n";
        cout << "Root = " << r << endl;
    }
    else{
        double real = -b / (2*a);
        double imag = sqrt(-D) / (2*a);

        cout << "Roots are complex\n";
        cout << "Root 1 = " << real << " + " << imag << "i\n";
        cout << "Root 2 = " << real << " - " << imag << "i\n";
    }

    return 0;
}