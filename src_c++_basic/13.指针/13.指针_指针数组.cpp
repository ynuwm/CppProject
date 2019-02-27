//我们想要让数组存储指向 int 或 char 或其他数据类型的指针。下面是一个指向整数的指针数组的声明：
//int *ptr[MAX];

//在这里，把 ptr 声明为一个数组，由 MAX 个整数指针组成。
//因此，ptr 中的每个元素，都是一个指向 int 值的指针。
//下面的实例用到了三个整数，它们将存储在一个指针数组中，如下所示

#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; // 赋值为整数的地址
   }
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
   return 0;
}