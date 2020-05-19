using namespace std;

template <class T>
class Vector {
public:
	Vector(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) {};
	Vector operator*(const Vector<T>&);//умножение на вектор
	Vector operator*(const int&);//умножение на число
	Vector operator+(const Vector<T>&tmp);
	Vector operator-(const Vector<T>&tmp);
	bool operator==(const Vector<T>&);
	template <class T>
	Vector operator<<(const Vector<T>& tmp);
	friend ostream& operator<<(ostream& out, const Vector<T>& tmp);
	void Input();

	/*//оператор присваивания
	bool operator ==(const Vector& tmp)
	{
		if (this->x == tmp.x && this->y == tmp.y && this->z == tmp.z)
			return true;
		else return false;
	}*/

	T* data;

private:
	int x, y, z;
	int* vect;
	int a, b, c;
};

//умножение вектора на вектор
template <class T>
Vector<T> Vector<T>::operator*(const Vector<T>& tmp)
{
	Vector Multiply;
	Multiply.a = tmp.a * a;
	Multiply.b = tmp.b * b;
	Multiply.c = tmp.c * c;
	//Multiply = Multiply.a + Multiply.b + Multiply.c;
	return Multiply;
}

//умножение вектора на число
template <class T>
Vector<T> Vector<T>::operator*(const int& tmp)
{
	Vector MultiplyN;
	MultiplyN.a = a * tmp;
	MultiplyN.b = b * tmp;
	MultiplyN.c = c * tmp;
	return MultiplyN;
}

//сложение
template <class T>
Vector<T> Vector<T>::operator+(const Vector<T>& tmp)
{
	Vector NewVector;
	NewVector.a = tmp.a + a;
	NewVector.b = tmp.b + b;
	NewVector.c = tmp.c + c;
	return NewVector;
}

//вычитание
template <class T>
Vector<T> Vector<T>::operator-(const Vector<T>& tmp)
{
	Vector NewVector;
	NewVector.a = tmp.a - a;
	NewVector.b = tmp.b - b;
	NewVector.c = tmp.c - c;
	return NewVector;
}

//вывод на экран
template <class T>
void Vector<T>::Input()
{
	cout << a << " " << b << " " << c;
}

//оператор << для вывода с помощью cout

ostream& operator<<(ostream& out, const Vector<int>& tmp)
{
	Vector<int> NewVector;
	out << tmp.a << " " << tmp.b << " " << tmp.c;
	return out;
}


template <class T>
bool Vector<T>::operator==(const Vector<T> & tmp)
{
	if (this->size == tmp.size)
	{
		for (int i = 0; i < this->size; i++)
		{
			if (this->data[i] != tmp.data[i])
				return false;
		}
		return true;
	}
	else {
		return  false;
	}
}
