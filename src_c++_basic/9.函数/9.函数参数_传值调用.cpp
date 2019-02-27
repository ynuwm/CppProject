//如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。
//形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。
//当调用函数时，有两种向函数传递参数的方式

//传值调用

#include <iostream>
using namespace std;

void swap1(int a, int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    return;
}

void swap2(int x, int y)
{
   int temp;
 
   temp = x; /* 保存 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y */
  
   return;
}

int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
 
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
 
   // 调用函数来交换值
   //swap1(a, b);
   swap2(a, b);

   cout << "交换后，a 的值：" << a << endl;
   cout << "交换后，b 的值：" << b << endl;
 
   return 0;
}