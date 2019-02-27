//指针和数组是密切相关的。事实上，指针和数组在很多情况下是可以互换的。
//例如，一个指向数组开头的指针，可以通过使用指针的算术运算或数组索引来访问数组。

#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main2 ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
 
   // 指针中的数组地址
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "var[" << i << "]的内存地址为 ";
      cout << ptr << endl;
 
      cout << "var[" << i << "] 的值为 ";
      cout << *ptr << endl;
 
      // 移动到下一个位置
      ptr++;
   }
   return 0;
}


int main ()
{
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++)
   {
      *var = i;    // 这是正确的语法
      var++;       // 这是不正确的
   }
   return 0;
}

//把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。
//这是因为 var 是一个指向数组开头的常量，不能作为左值。

//由于一个数组名对应一个指针常量，只要不改变数组的值，仍然可以用指针形式的表达式。
//例如，下面是一个有效的语句，把 var[2] 赋值为 500：

*(var + 2) = 500;