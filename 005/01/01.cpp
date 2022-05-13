// 01.cpp: 定义应用程序的入口点。
//

#include "01.h"

using namespace std;

int test(int i)
{
	cout << "test fun" << i << endl;
	return i*i;
}
int main()
{
	int a = 10;
	int b = sizeof(a++);
	int c = sizeof(test(10));
	cout << std::is_same<decltype(test(10)), float>::value;			
	return 0;
}
