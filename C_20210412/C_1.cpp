#include <iostream>

// 函数声明
void func(void);

static int count = 10; /* 全局变量 */ // 在此，应用static修饰count对结果不会有影响，作为全局变量，程序中的修改都会对其进行修改， 对局部变量应用static修饰的话则都会随之变化

int main()
{
  while (count--)
  {
    func();
  }
  return 0;
}
// 函数定义
void func(void)
{
  static int i = 5; // 局部静态变量
  i++;
  std::cout << "变量 i 为 " << i;
  std::cout << " , 变量 count 为 " << count << std::endl;
}