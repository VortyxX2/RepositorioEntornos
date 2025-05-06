#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Resolviendo ax^2 + bx + c = 0\n";
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;

    if (a == 0) {
        cout << "Esto no es una ecuación cuadrática.\n";
    }
    else {
        double discriminante = b * b - 4 * a * c;
        if (discriminante >= 0) {
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Soluciones: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else {
            cout << "La ecuación no tiene soluciones reales.\n";
        }
    }

    return 0;
}
