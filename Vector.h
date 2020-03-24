class Vector {
public:
	Vector(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) {};
	Vector operator*(const Vector&);//умножение на вектор
	Vector operator*(const int&);//умножение на число
	Vector operator+(const Vector&tmp);
	Vector operator-(const Vector&tmp);
	Vector operator=(const Vector&tmp);
	Vector operator<<(const Vector&tmp);
	friend ostream& operator<<(ostream& out, const Vector& tmp);
	void Input();
private:
	int* vect;
	int a, b, c;
};
