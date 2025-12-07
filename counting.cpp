#include "counting.h"

void countingSortStable(std::vector<int>& arr, int minVal, int maxVal) {
    int range = maxVal - minVal + 1;
    std::vector<int> count(range, 0);
    std::vector<int> output(arr.size());

    for (int num : arr)
        count[num - minVal]++;

    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
        int num = arr[i];
        output[--count[num - minVal]] = num;
    }

    arr = output;
}
