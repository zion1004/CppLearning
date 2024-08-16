#include <iostream>

int main() {
	// pointer to a block of contiguous ints
	int* array = new int[50];


	// pointer to a block of contiguous int pointers (see above)
	int** array2d = new int*[50];
	for (int i = 0; i < 50; i++) {
		/* 
			int* peter = array2d[i];
			peter = new int[50];
		*/
		// same as code above
		array2d[i] = new int[50];
	}

	// will only release the int pointer pointer array that array2d is pointing to
	// and not the inner int arrays 
	// so do this if you want memory leaks in your code
	// and we can't even delete the rest because we just boomed our pointers
	// so we have no way of referencing the int pointers and try to dereference the rest
//	delete[] array2d; // commented because we don't want memory leaks

	// instead do this
	for (int i = 0; i < 50; i++) {
		delete[] array2d[i];
	}
	delete[] array2d;
	// which will cleanup  the inner arrays and the top level array


	// pointer to a block of contiguous int pointer pointers (see above)
	int*** array3d = new int** [50];
	for (int i = 0; i < 50; i++) {
		array3d[i] = new int*[50];
		for (int j = 0; j < 50; j++) {
			/*
				int** peterpeter = array3d[i];
				int* peter = peterpeter[j];
				peter = new int[50];
			*/
			// same as above;
			array3d[i][j] = new int[50];
		}
	}

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			delete[] array3d[i][j];
		}
		delete[] array3d[i];
	}
	delete[] array3d;


	int a[25];
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			a[x + y * 5] = 2;
		}
	}

	std::cin.get();
}