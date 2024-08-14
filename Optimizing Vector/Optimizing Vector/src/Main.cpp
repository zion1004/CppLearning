#include <iostream>
#include <string>
#include <vector>

struct Vertex {
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z) {}

	Vertex(const Vertex& vertex) 
		: x(vertex.x), y(vertex.y), z(vertex.z) {
		std::cout << "copied" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& v) {
	stream << v.x << ", " << v.y << ", " << v.z;
	return stream;
}


int main() {
	{
		/*
			not optimized

			every time we push, we create a vertex and then create a copy to where its going to get pushed 
			and every push will resize the vector to add our new element
			which will them re-copy all the elements inside + copy the new element to be pushed (again)
		*/
		std::vector<Vertex> vertices;
		vertices.push_back(Vertex(1, 2, 3));
		vertices.push_back(Vertex(4, 5, 6));
		vertices.push_back(Vertex(7, 8, 9));
	}

	{
		/*
			optimized

			we tell the vector beforehand to reserve memory for 3 elements 
			(will not create 3 elements just reserve memory for said capacity via reserve)
			emplace back will take the arguments and create said element using the arguments
			instead of taking a vertex and then copying it to itself
		*/
		std::vector<Vertex> vertices;
		vertices.reserve(3);

		vertices.emplace_back(1, 2, 3);
		vertices.emplace_back(4, 5, 6);
		vertices.emplace_back(7, 8, 9);

	}
	std::cin.get();
}
