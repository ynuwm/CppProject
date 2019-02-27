//第二个文件：support.cpp

#include <iostream>
 
extern int count;
 
void write_extern(void)
{
   std::cout << "Count is " << count << std::endl;
}

//在这里，第二个文件中的 extern 关键字用于声明已经
//在第一个文件 main.cpp 中定义的 count。现在 ，编
//译这两个文件，如下所示：

//$ g++ main.cpp support.cpp -o write

//这会产生 write 可执行程序，尝试执行 write，它会产生下列结果：

/*
$ ./write
Count is 5
*/