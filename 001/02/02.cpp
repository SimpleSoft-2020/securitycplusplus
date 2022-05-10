// 02.cpp: 定义应用程序的入口点。
//

#include "02.h"

#include <cstdio>
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    const char* name1 = "testname";
    char name2[10];
    puts("please name:");
    cin >> name2;
    std::cout << "name1=" << name1 << std::endl;
    std::cout << "name2=" << name2 << std::endl;
    return 0;
}
