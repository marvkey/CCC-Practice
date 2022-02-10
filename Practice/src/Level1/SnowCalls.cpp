#include <iostream>
#include <string>
//https://dmoj.ca/problem/ccc05s1

std::string Change(const std::string& input) {
	if (input.size() < 10)
		return "";
	std::string temp;
	for (size_t i = 0; i < input.size(); i++ ) {
		const char& var = input[i];
		int ascii = (int)var;
		if (var == '-')
			temp+="-";
		else if (ascii >= 65 && ascii <= 67)   // any letter ABC 
			temp += "2";
		else if (ascii >= 68 && ascii <= 70)   // any letter DEF
			temp += "3";
		else if (ascii >= 71 && ascii <= 73)  // any letter GHI
			temp += "4";
		else if (ascii >= 74 && ascii <= 76)  // any letter JKL
			temp += "5";
		else if (ascii >= 77 && ascii <= 79) // any letter MNO
			temp += "6";
		else if (ascii >= 80 && ascii <= 83) // any letter PQRS
			temp += "7";
		else if (ascii >= 84 && ascii <= 86) // any letter TUV
			temp += "8";
		else if (ascii >= 87 && ascii <= 90) // any letter WXYZ
			temp += "9";
		else
			temp += var;
	}
	
	return temp;
}

std::string SetForCheck(std::string& temp) {
	a:
	if (temp.size() == 10) { // EXAMPLE 5059381123
		temp.insert(3, "-");
		temp.insert(7, "-");
		return temp;
	}
	if (temp.size() > 12)
		temp.resize(12);

	for (size_t i = 0; i < temp.size(); i++) {
		if (temp[i] == '-') {
			temp.erase(temp.begin() + i);
		}
	}
	goto a;
	return temp;
}
/*
int main() {
	int testCase;
	std::cin >> testCase;
	std::string input;
	for (int i = 0; i < testCase; i++) {
		std::cin >> input;
		input = Change(input);
		std::cout << SetForCheck(input);
	}
}
*/