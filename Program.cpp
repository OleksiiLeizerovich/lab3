#include <iostream>
#include <iomanip>

using namespace std;

double Find_P(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return p;
}

void Find_S(double a, double b, double c)
{
    double p = Find_P(a, b, c);
    double s = (p * (p - a) * (p - b) * (p - c));
    cout << "Area of triangle: " << s << endl;
}

int main()
{
    cout << setprecision(2) << fixed;
    double a, b, c;
    cout << "Enter the lengths of three sides of the triangle: ";
    while (a <= 0 || b <= 0 || c <= 0)
        cin >> a >> b >> c;
    Find_S(a, b, c);
    return 0;
}