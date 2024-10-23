#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

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
    setlocale(LC_ALL, "uk_UA.UTF-8");
    cout << setprecision(2) << fixed;
    double x1, y1, x2, y2, x3, y3;
    cout << "Введіть координати сторін трикутника: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);
    Find_S(a, b, c);
    return 0;
}