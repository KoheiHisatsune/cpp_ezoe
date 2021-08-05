#include "all.h"

int main()
{
  double height{};
  double weight{};

  std::cin >> height >> weight;

  std::cout << weight/(height*height) << "\n"s;
}