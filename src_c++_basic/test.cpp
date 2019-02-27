#include <iostream>
 
// 函数声明 
void func(void);
 
static int count = 10; /* 全局变量 */
 
int main()
{
  int a,b;

  a = count;
  std::cout << "变量 a 为 " << a ;

  func();

  b = count;
  std::cout << "变量 b 为 " << b ;
}

// 函数定义
void func( void )
{
    int count = 5; // 局部静态变量
    std::cout << " , 变量 count 为 " << count << std::endl;
}