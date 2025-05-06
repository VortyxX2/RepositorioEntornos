#include "pch.h"
#include "CppUnitTest.h"
#include "../calculadora_f/calculadora_.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		TEST_METHOD(TestSuma)
		{
			a = 5;
			b = 7;
			sumar();
			Assert::AreEqual(12, suma,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
		TEST_METHOD(TestResta)
		{
			a = 10;
			b = 6;
			restar();
			Assert::AreEqual(4, resta,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
		TEST_METHOD(TestDivision)
		{
			a = 24;
			b = 2;
			division();
			Assert::AreEqual(12, divi,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
		TEST_METHOD(TestMultiplicacion)
		{
			a = 4;
			b = 8;
			multiplicacion();
			Assert::AreEqual(32, mult,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
	};
}