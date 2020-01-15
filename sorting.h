#ifndef SORTING_H
#define SORTING_H

#include <iterator>
#include <vector>

namespace sorted {
/**
 * @brief сортировка пузырьком
 * @param[in] data входной массив
 * @return результат открытия , 1 - ОК , -1 - ошибка
 */

bool Bubble(std::vector<int> data);
bool Bubble_v1(int *, int *);
void ShakerSort(std::vector<int> &data);

}  // namespace sorted

#endif  // SORTING_H
