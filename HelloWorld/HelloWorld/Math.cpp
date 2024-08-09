#define INTEGER int
#include "Log.h"

#if 1
INTEGER Multiply(int a, int b) {
	Log("Multiply");
	return a * b;
}
#endif
int Mul() {
	return 5 * 2;
}