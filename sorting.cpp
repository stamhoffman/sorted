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

void ShakerSort(std::vector<int> &data) {
  auto end_itr = data.end();
  auto cur_itr = data.end();
  bool flag = false;

  while (true) {
    flag = false;
    end_itr = cur_itr;
    for (auto itr = data.begin(); itr != end_itr; itr++) {
      auto buffer = *itr;
      if (itr != end_itr) {
        if (*itr > *(itr + 1)) {
          *itr = *(itr + 1);
          *(itr + 1) = buffer;
          cur_itr = itr + 1;
          flag = true;
        }
      }
    }
    if (flag == false) return;
  }
}

}  // namespace sorted
