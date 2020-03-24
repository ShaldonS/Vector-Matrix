using namespace std;

class Vector {
public:
	Vector(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) {};
	Vector operator*(const Vector&);//��������� �� ������
	Vector operator*(const int&);//��������� �� �����
	Vector operator+(const Vector&tmp);
	Vector operator-(const Vector&tmp);
	Vector operator<<(const Vector&tmp);
	friend ostream& operator<<(ostream& out, const Vector& tmp);
	void Input();

	//�������� ������������
	bool operator ==(const Vector& tmp)
	{
		if (this->x == tmp.x && this->y == tmp.y && this->z == tmp.z)
			return true;
		else return false;
	}

private:
	int x, y, z;
	int* vect;
	int a, b, c;


};

//��������� ������� �� ������
Vector Vector::operator*(const Vector& tmp)
{
	Vector Multiply;
	Multiply.a = tmp.a * a;
	Multiply.b = tmp.b * b;
	Multiply.c = tmp.c * c;
	//Multiply = Multiply.a + Multiply.b + Multiply.c;
	return Multiply;
}

//��������� ������� �� �����
Vector Vector::operator*(const int& tmp)
{
	Vector MultiplyN;
	MultiplyN.a = a * tmp;
	MultiplyN.b = b * tmp;
	MultiplyN.c = c * tmp;
	return MultiplyN;
}

//��������
Vector Vector::operator+(const Vector& tmp)
{
	Vector NewVector;
	NewVector.a = tmp.a + a;
	NewVector.b = tmp.b + b;
	NewVector.c = tmp.c + c;
	return NewVector;
}

//���������
Vector Vector::operator-(const Vector& tmp)
{
	Vector NewVector;
	NewVector.a = tmp.a - a;
	NewVector.b = tmp.b - b;
	NewVector.c = tmp.c - c;
	return NewVector;
}

//����� �� �����
void Vector::Input()
{
	cout << a << " " << b << " " << c;
}

//�������� << ��� ������ � ������� cout
ostream& operator<<(ostream& out, const Vector& tmp)
{
	Vector NewVector;
	out << tmp.a << " " << tmp.b << " " << tmp.c;
	return out;
}