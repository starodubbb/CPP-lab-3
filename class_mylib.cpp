//#include "class_hello.h"
//
//using namespace std;
//
//hello::hello()
//{
//}
//
//void hello::print_hello() {
//	cout << "Hello world" << endl;
//}
//
//int hello::sum(const int& a, const int& b) {
//	return a + b;
//}

#include "class_mylib.h"

using namespace std;

Mylib::Mylib()
{
}

float Mylib::addFloats(float a, float b)
{
	return a + b;
}

double Mylib::addDoubles(double a, double b)
{
	return a + b;
}

int Mylib::addInts(int a, int b)
{
	return a + b;
}

std::string Mylib::addStrings(std::string a, std::string b)
{
	return a + b;
}


