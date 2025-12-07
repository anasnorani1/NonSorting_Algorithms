#include "bucket_sort.h"
#include <vector>
#include <algorithm>

void bucketSort(std::vector<double>& arr) {
    int n = arr.size();
    if (n <= 0) return;

    std::vector<std::vector<double>> buckets(n);

    for (double value : arr) {
        int idx = value * n;
        if (idx >= n) idx = n - 1;
        buckets[idx].push_back(value);
    }

    for (auto& bucket : buckets)
        std::sort(bucket.begin(), bucket.end());

    int index = 0;
    for (auto& bucket : buckets)
        for (double value : bucket)
            arr[index++] = value;
}
