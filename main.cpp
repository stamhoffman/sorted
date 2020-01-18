#include <iostream>

using namespace std;
#include <algorithm>
#include <vector>
#include "sorting.h"

using namespace sorted;

template <class Container>
Container CreateData(const size_t size_massiv) {
  Container *data = new Container(size_massiv);
  for (auto &unit : *data) {
    unit = rand();
  }
  return *data;
}

int main() {
  auto data = CreateData<std::vector<int>>(10);
  std::copy(data.begin(), data.end(),
            std::ostream_iterator<int>(std::cout, " \n"));
  QuickSorted(data.begin(), data.end(), data);
  std::cout << "-----------------------" << std::endl;
  std::copy(data.begin(), data.end(),
            std::ostream_iterator<int>(std::cout, " \n"));
  return 0;
}
