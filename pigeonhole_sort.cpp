#include "pigeonhole_sort.h"
#include <vector>
#include <algorithm>

void pigeonholeSort(std::vector<int>& arr) {
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    int range = maxVal - minVal + 1;
    std::vector<std::vector<int>> holes(range);

    for (int num : arr)
        holes[num - minVal].push_back(num);

    int idx = 0;
    for (auto& hole : holes)
        for (int num : hole)
            arr[idx++] = num;
}
