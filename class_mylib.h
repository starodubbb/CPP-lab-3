//#pragma once
//
//#include <iostream>
//
//using namespace std;
//
//class hello {
//public:
//	hello();
//	void print_hello();
//
//	int sum(const int& a, const int& b);
//
//};
//

#pragma once

#include <iostream>

using namespace std;

class Mylib {
public:
	Mylib();
	float addFloats(float a, float b);
	double addDoubles(double a, double b);
	int addInts(int a, int b);
	std::string addStrings(std::string a, std::string b);
};





