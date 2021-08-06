#include "all.h"

int input()
{
  int x;
  std::cin >> x;
  return x;
}

int main()
{
  std::vector<int> v;
  int x;

  while ((x = input()) != 0){
    v.push_back(x);
  }

  for (std::size_t index = 0; index != v.size(); index++){
    std::cout << v.at(index) << ","s;
  }
  std::cout << "\n"s;

  for (std::size_t head = 0; head != v.size(); head++){
    std::size_t min = head;
    for (std::size_t index = head + 1; index != v.size(); index++){
      if (v.at(index) < v.at(min)){
        min = index;
      }
    }

    auto temp = v.at(head);
    v.at(head) = v.at(min);
    v.at(min) = temp;

  }

  for (std::size_t index = 0; index != v.size(); index++){
    std::cout << v.at(index) << ","s;
  }
  std::cout << "\n"s;

}