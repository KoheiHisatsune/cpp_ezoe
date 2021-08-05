#include "all.h"

int input()
{
  int x{};
  std::cout << ">"s;
  std::cin >> x;
  return x;
}

int main()
{
  int x{};
  int sum = 0;

  while ((x=input()) != 0){
    sum += x;
    std::cout << sum << "\n"s;
  }

}