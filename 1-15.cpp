#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, h, p, s;

    cin >> a >> b >> c >> d >> h;

    p = a + b + c + d;
    s = ((a+c)*h)/2;

    cout << "Perimeteryt e: "<< p << endl << "Liceto e: " << s << endl;
}