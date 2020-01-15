#include "sorting.h"

namespace sorted {

bool Bubble(std::vector<int> data) {
  while (true) {
    bool flag = false;
    for (auto itr = data.begin(); itr != data.end(); itr++) {
      if (itr != data.end()) {
        auto cur = *itr;
        if (*itr > *(itr + 1)) {
          *itr = *(itr + 1);
          *(itr + 1) = cur;
          flag = true;
        }
      }
    }
    if (flag != true) return true;
  }
  return false;
}

bool Bubble_v1(int *begin, int *end) {
  while (true) {
    bool flag = false;
    for (auto itr = begin; itr != end + 1; itr++) {
      if (itr != end + 1) {
        auto cur = *itr;
        if (*itr > *(itr + 1)) {
          *itr = *(itr + 1);
          *(itr + 1) = cur;
          flag = true;
        }
      }
    }
    if (flag != true) return true;
  }
  return false;
}

}  // namespace sorted
