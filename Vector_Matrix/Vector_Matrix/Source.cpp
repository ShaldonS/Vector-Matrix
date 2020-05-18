#include <iostream>
#include <vector>
#include "vector.h"
#include "matrix.h"
using namespace std;

int main(int argv, char* argc[])
{
	//векторы
	int Number = 5;
	Vector<int> vec1(2, 1, 5), vec2(3, 2, 1), Result(0,0,0);
	cout << "Vectors: " << endl;
	cout << "First vector: ";
	vec1.Input();
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

	//матрицы
	matrix<int> a(2, 2);
	cout << "Matrix A:" << endl;
	a.Show();
	matrix<int> b(2, 2);
	cout << "Matrix B:" << endl;
	b.Show();
	cout << "Sum of A and B:" << endl;
	(a + b).Show();
	cout << "Difference between A and B:" << endl;
	(a - b).Show();
	cout << "Multiplication of A and B:" << endl << endl;
	(a * b).Show();	
	cout << "Multiplication by a number of A:" << endl << endl;
	a.Multiply(6);
	a.Show();
	system("PAUSE");
	return 0;
}
