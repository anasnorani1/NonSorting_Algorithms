#include "counting_nonstable.h"

void countingSortNonStable(std::vector<int>& arr, int minVal, int maxVal) {
    int range = maxVal - minVal + 1;
    std::vector<int> count(range, 0);

    for (int num : arr)
        count[num - minVal]++;

    int idx = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]--)
            arr[idx++] = i + minVal;
    }
}
