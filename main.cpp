#include <vector>
#include <iostream>
#include <unordered_map>

int main(int argc, char const *argv[]) {
  std::unordered_map<int, int> m{
    {1, 2},
    {2, 3},
    {3, 4}
  };

  std::cout << m.size() << std::endl;
  return 0;
}