#include <iostream>

struct Vector2 {
	float x, y;
};

struct Vector4 {
	union {
		struct {
			float x, y, z, w;
		};
		struct {
			Vector2 a, b;
		};
	};
};

void PrintVector2(const Vector2& vector){
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main() {
	Vector4 vec4 = { 1.0f, 2.0f, 3.0f, 4.0f };
	PrintVector2(vec4.a);
	PrintVector2(vec4.b);

	vec4.z = 400.0f;
	PrintVector2(vec4.a);
	PrintVector2(vec4.b);

	std::cin.get();
}