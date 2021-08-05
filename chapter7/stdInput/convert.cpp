#include "all.h"

int main()
{
  double height{};
  double weight{};

  std::cin >> height >> weight;
  std::cout << height/100 << "\n"s << weight;
}