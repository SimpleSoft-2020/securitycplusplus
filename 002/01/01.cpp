// 002.cpp: 定义应用程序的入口点。
//

#include "01.h"
#include <cstdarg>
using namespace std;
void testit(int i, ...)
{
    va_list argptr;
    va_start(argptr, i);
    if (i == 0)
    {
        int n = va_arg(argptr, int);
        printf("%d\n", n);
    }
    else
    {
        char* s = va_arg(argptr, char*);
        printf("%s\n", s);
    }
    va_end(argptr);
}

int add(int first, int second, ...) 
{
	int r = first + second;
	va_list va;
	va_start(va, second);
	while (int v = va_arg(va, int)) 
	{
		r += v;
	}
	va_end(va);
	return r;
}

int main()
{		 
    testit(0, 0xFFFFFFFF); // 1st problem: 0xffffffff is not an int
    testit(1, NULL);       // 2nd problem: NULL is not a char*
	int sum = add(1, 2, 3, 4);      // 3rd problem: the last parameter is not 0
	cout << "sum=" << sum << endl;
	return 0;
}
