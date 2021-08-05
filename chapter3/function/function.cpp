#include "all.h"

int main()
{

  // func
  auto print = [](auto x)
  {
    std::cout << x << "\n"s;
  };

  //Call function
  print(123);
  print(3.14);
  print("Hello World!");
}