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

void QuickSorted(std::vector<int>::iterator begin,
                 std::vector<int>::iterator end, std::vector<int> &data) {
  std::vector<int>::iterator left_itr = begin + 1;
  std::vector<int>::iterator right_itr = end - 1;

  while (left_itr++ < right_itr) {
    if (*left_itr > *begin) {
      while (right_itr-- > left_itr) {
        if (*right_itr < *begin) {
          auto buffer = *left_itr;
          *left_itr = *right_itr;
          *right_itr = buffer;
          break;
        }
      }
    }
  }

  if (*left_itr < *begin) {
    auto buffer = *begin;
    *begin = *left_itr;
    *left_itr = buffer;
    QuickSorted(begin, left_itr, data);
  }
  if (*right_itr > *begin) {
    auto buffer = *begin;
    *begin = *right_itr;
    *right_itr = buffer;
    QuickSorted(begin, right_itr, data);
  }
}

}  // namespace sorted
