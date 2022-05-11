// 02.cpp: 定义应用程序的入口点。
//

#include "02.h"

using namespace std;
int factorial2(int i)
{
    if (i < 0) 
    {
        return 1;
    }

    static int cache[10];
    if (i < (sizeof(cache) / sizeof(int)))
    {
        if (0 == cache[i]) 
        {
            cache[i] = i > 0 ? i * factorial2(i - 1) : 1;
        }
        return cache[i];
    }

    return i > 0 ? i * factorial2(i - 1) : 1;
}
int factorial(int i)
{
    if (i < 0) 
    {
        return 1;
    }

    static const int cache[] = 
    {
      factorial(0), factorial(1), factorial(2), factorial(3), factorial(4), factorial(5),
      factorial(6), factorial(7), factorial(8), factorial(9), factorial(10)
    };

    if (i < (sizeof(cache) / sizeof(int)))
    {
        return cache[i];
    }

    return i > 0 ? i * factorial(i - 1) : 1;
}
int main()
{
    int x = factorial(5);
	return 0;
}
