//https://dmoj.ca/problem/ccc21s1
#include<iostream>
#include <vector>
#include <stdio.h>
#include <iomanip>      // std::setprecision
// DONE
long double CalculateArea(std::vector<int>& height, std::vector<int>& width) {
	long double accumulate = 0.0f;
	for (size_t i = 0; i < height.size(); i++) {
		if (i + 1 >= height.size())
			return accumulate;
		long double middle = height[i] + height[i + 1];
		accumulate += width[i] * (middle) / 2;
	}
	return accumulate;
}
/*
int main() {
	int positiveNumber;
	scanf("%i", &positiveNumber);
	if (positiveNumber > 10000)
		return 0;
	std::vector<int> heights;
	std::vector<int> width;
	for (int i = 0; i < positiveNumber + 1; i++) {
		int num;
		scanf("%i", &num);
		heights.emplace_back(num);
	}
	for (int i = 0; i < positiveNumber; i++) {
		int num;
		scanf("%i", &num);
		width.emplace_back(num);
	}
	std::cout << std::setprecision(10) << CalculateArea(heights, width);
}
*/