//数据抽象是指，只向外界提供关键信息，并隐藏其后台的实现细节，
//即只表现必要的信息而不呈现细节。数据抽象是一种依赖于接口和实现分离的编程（设计）技术。

//例如，您的程序可以调用 sort() 函数，而不需要知道函数中排序数据所用到的算法。
//实际上，函数排序的底层实现会因库的版本不同而有所差异，只要接口不变，函数调用
//就可以照常工作。在 C++ 中，我们使用类来定义我们自己的抽象数据类型（ADT）。您
//可以使用类 iostream 的 cout 对象来输出数据到标准输出，如下所示：
#include <iostream>
using namespace std;
 
int main( )
{
   cout << "Hello C++" <<endl;
   return 0;
}

//数据抽象的实例
//C++ 程序中，任何带有公有和私有成员的类都可以作为数据抽象的实例。请看下面的实例：
#include <iostream>
using namespace std;
 
class Adder{
   public:
      // 构造函数
      Adder(int i = 0)
      {
        total = i;
      }
      // 对外的接口
      void addNum(int number)
      {
          total += number;
      }
      // 对外的接口
      int getTotal()
      {
          return total;
      };
   private:
      // 对外隐藏的数据
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
 
   cout << "Total " << a.getTotal() <<endl;    // 输出：Total 60
   return 0;
}
//上面的类把数字相加，并返回总和。公有成员 addNum 和 getTotal 是对外的接口，
//用户需要知道它们以便使用类。私有成员 total 是用户不需要了解的，但又是类能
//正常工作所必需的。


//设计策略
//抽象把代码分离为接口和实现。所以在设计组件时，必须保持接口独立于实现，这样，
//如果改变底层实现，接口也将保持不变。//在这种情况下，不管任何程序使用接口，接
//口都不会受到影响，只需要将最新的实现重新编译即可。





