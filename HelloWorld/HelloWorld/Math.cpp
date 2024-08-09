#define INTEGER int

const char* Log(const char* message) {
	return message;
}

#if 1
INTEGER Multiply(int a, int b) {
	Log("Multiply");
	return a * b;
}
#endif
int Mul() {
	return 5 * 2;
}