#include <iostream>
using namespace std;
int a, b, suma, resta, divi, mult;
void pedirDatos() {
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
}
void sumar() {
	suma = a + b;
}
void restar() {
	resta = a - b;
}
void division() {
	divi = a / b;
}
void multiplicacion() {
	mult = a * b;
}
void mostrarResultado() {
	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La division es: " << divi << endl;
	cout << "La multiplicacion es: " << mult << endl;
}
int main()
{
	pedirDatos();
	sumar();
	restar();
	division();
	multiplicacion();
	mostrarResultado();
	system("pause");
	return 0;
}
