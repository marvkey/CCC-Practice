//https://dmoj.ca/problem/ccc02s2
#include <iostream>
#include <stdio.h>
#include <numeric>

int main() {
	int num1;
	int num2;
	scanf("%i", &num1);
	scanf("%i", &num2);
	int remainder = num1 % num2;
	int value = num1 / num2;

	int gcd = std::gcd(remainder, num2);
	if(remainder ==0)
		printf("%i\n", value);
	else if(value == 0)
		printf("%i/%i\n", remainder / gcd, num2 / gcd);
	else
		printf("%i %i/%i\n", value, remainder/ gcd,num2/ gcd);
}
