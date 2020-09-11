#include <stdio.h>

constexpr int sqr(int x) {
	return x * x;
}

int main() {
	constexpr int  y = sqr(5);
	printf("Result: %u", y);
	return 0;
}