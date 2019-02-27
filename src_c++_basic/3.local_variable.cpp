//在函数或一个代码块内部声明的变量，称为局部变量。
//它们只能被函数内部或者代码块内部的语句使用。
//下面的实例使用了局部变量：

#include <iostream>
using namespace std;
 
int main ()
{
  // 局部变量声明
  int a, b;
  int c;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c;
 
  return 0;
}