#include "all.h"

int main()
{
  std::vector<int> v;

  for (int i = 0; i < 1000; i++){
    std::cout << v.size() << "\n"s;
    v.push_back(i);
  }

  for (std::size_t index = v.size()-1; index != 0; index--){
    std::cout << v.at(index) << "\n"s;
  }

  std::cout << v.at(0) << "\n"s;


}