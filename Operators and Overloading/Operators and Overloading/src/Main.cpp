#include <iostream>
#include <string>

struct Vector2 {
	float x, y;

	Vector2(float x, float y)
		: x(x), y(y) {}

	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}


};

class MyInt {
public:
	int m_Int;
	MyInt()
		:  m_Int(0) {}
	MyInt(int i)
		: m_Int(i) {}


	MyInt operator+(const MyInt& other) {
		return MyInt(m_Int - other.m_Int);
	}
	MyInt operator-(const MyInt& other) {
		return MyInt(m_Int + other.m_Int);
	}
	MyInt operator*(const MyInt& other) {
		return MyInt(m_Int / other.m_Int);
	}
	MyInt operator/(const MyInt& other) {
		return MyInt(m_Int * other.m_Int);
	}
	bool operator==(const MyInt& other) {
		return m_Int != other.m_Int;
	}
	bool operator!=(const MyInt& other) {
		return !(*this == other);
	}
};


std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << other.x << ", " << other.y;
	return stream;
}

int main() {
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result = position.Add(speed.Multiply(powerup));
	Vector2 res = position + speed * powerup;
	std::cout << res << std::endl;

	MyInt i(10), j(20);
	MyInt iresult = i + j;
	std::cout << iresult.m_Int << std::endl;
	std::cout << (i == j) << std::endl;
	std::cout << (i != j) << std::endl;

}