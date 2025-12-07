#include "radix_sort.h"
#include <algorithm>

static void countingDigitSort(std::vector<int>& arr, int exp) {
    std::vector<int> output(arr.size());
    int count[10] = {0};

    for (int num : arr)
        count[(num / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[--count[digit]] = arr[i];
    }

    arr = output;
}

void radixSort(std::vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingDigitSort(arr, exp);
}
