#include <iostream>
#include <vector>
#include "vector.h"
#include "matrix.h"
using namespace std;

int main()
{
  //векторы
	int Number = 5;
	Vector vec1(2, 1, 5), vec2(3, 2, 1), Result(0,0,0);
	cout << "Vectors: " << endl;
	cout << "First vector: ";
	cout << vec1; //вывод с помощью оператора <<
	cout << endl;
	cout << "Second vector: ";
	vec2.Input();
	cout << endl << "Multiplication: ";
	(vec1 * vec2).Input();
	cout << endl << "Multiplication(by a number 5) 1: ";
	(vec1 * Number).Input();
	cout << endl << "Multiplication(by a number 5) 2: ";
	(vec2 * Number).Input();
	cout << endl << "Add: ";
	(vec1 + vec2).Input();
	cout << endl << "Substraction: ";
	Result = vec1 - vec2;
	Result.Input();
	cout << endl;
	cout << endl;
}
