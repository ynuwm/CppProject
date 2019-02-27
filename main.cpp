//extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候，如下所示：
//第一个文件：main.cpp
#include <iostream>
 
int count ;
extern void write_extern();
 
int main()
{
   count = 5;
   write_extern();
}