// 02.cpp: 定义应用程序的入口点。
//

#include "02.h"
#include <initializer_list>
#include <iostream>

using namespace std;

class C {
	std::initializer_list<int> l;

public:
	C() : l{ 1, 2, 3 } {}

	int first() const { return *l.begin(); }
};

void f() {
	C c;
	std::cout << c.first();
}
int main()
{
	f();
	return 0;
}
