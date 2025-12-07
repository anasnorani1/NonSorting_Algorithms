#include <iostream>
#include <vector>

#include "counting.h"
#include "counting_nonstable.h"
#include "radix_sort.h"
#include "bucket_sort.h"
#include "pigeonhole_sort.h"
#include "utils.h"

int main() {

    std::vector<int> arr1 = {4,2,2,8,3,3,1};
    std::vector<int> arr2 = arr1;
    std::vector<int> arr3 = arr1;
    std::vector<int> arr4 = arr1;

    std::cout << "Original Array: ";
    printArray(arr1);

    countingSortStable(arr1, 1, 8);
    std::cout << "Stable Counting Sort: ";
    printArray(arr1);

    countingSortNonStable(arr2, 1, 8);
    std::cout << "Non-Stable Counting Sort: ";
    printArray(arr2);

    radixSort(arr3);
    std::cout << "Radix Sort: ";
    printArray(arr3);

    pigeonholeSort(arr4);
    std::cout << "Pigeonhole Sort: ";
    printArray(arr4);

    std::vector<double> arrD = {0.78, 0.17, 0.39, 0.26, 0.72};
    bucketSort(arrD);
    std::cout << "Bucket Sort (double): ";
    for (double d : arrD) std::cout << d << " ";
    std::cout << "\n";

    return 0;
}
