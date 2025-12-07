```markdown
# 📦 Non-Comparison Sorting Algorithms – CS250 Assignment 3

This repository contains implementations of five non-comparison sorting algorithms for **CS250 – Data Structures & Algorithms (Fall 2025)**.  
The purpose of this assignment is to study how linear-time sorting techniques behave under different conditions and to demonstrate a solid understanding of their fundamentals.

---

## 📘 Implemented Algorithms

### 1. Counting Sort (Stable)
- Uses frequency array + prefix sum.
- Preserves order of duplicates.
- Time Complexity: **O(n + k)**
- Space Complexity: **O(n + k)**
- Stability: **✔ Stable**

---

### 2. Counting Sort (Non-Stable)
- Same counting technique but overwrites array directly.
- Time Complexity: **O(n + k)**
- Space Complexity: **O(k)**
- Stability: **✘ Not stable**

---

### 3. LSD Radix Sort
- Sorts integers digit-by-digit from least significant digit.
- Uses stable Counting Sort internally.
- Time Complexity: **O(d × (n + b))**
- Space Complexity: **O(n + b)**
- Stability: **✔ Stable**

---

### 4. Bucket Sort
- Divides values (usually floats) into buckets.
- Each bucket is sorted individually, then merged.
- Time Complexity: **O(n)** average  
- Worst-case: **O(n²)**
- Stability: **Depends on internal sorting**

---

### 5. Pigeonhole Sort
- Creates a hole for each distinct value.
- Time Complexity: **O(n + k)**
- Space Complexity: **O(n + k)**
- Stability: **✔ Stable**

---

## 📁 Project Structure

```
NonComparisonSorting/
│
├── main.cpp
│
├── counting_sort_stable.cpp
├── counting_sort_stable.h
│
├── counting_sort_nonstable.cpp
├── counting_sort_nonstable.h
│
├── radix_sort.cpp
├── radix_sort.h
│
├── bucket_sort.cpp
├── bucket_sort.h
│
├── pigeonhole_sort.cpp
├── pigeonhole_sort.h
│
├── utils.cpp
├── utils.h
│
└── README.md
```

---

## 🛠️ How to Compile

### Option 1 — Compile everything manually
```bash
g++ main.cpp utils.cpp counting_sort_stable.cpp counting_sort_nonstable.cpp radix_sort.cpp bucket_sort.cpp pigeonhole_sort.cpp -o assignment3
```

### Option 2 — Compile all .cpp files at once
```bash
g++ *.cpp -o assignment3
```

---

## ▶️ How to Run

### Windows:
```bash
ass3.exe
```

### Linux / macOS:
```bash
./ass3
```

---

## 📊 Performance Overview

| Algorithm | Best For | Stability | Notes |
|----------|----------|-----------|-------|
| **Counting Sort (Stable)** | Small integer ranges | ✔ | Fastest for small ranges |
| **Counting Sort (Non-Stable)** | Small integer ranges | ✘ | Simpler & slightly faster |
| **Radix Sort** | Large integer values | ✔ | Ignores key magnitude |
| **Bucket Sort** | Uniform float distribution | Depends | Worst-case O(n²) |
| **Pigeonhole Sort** | Very small key range | ✔ | Similar to Counting Sort |

---

## 🎯 Learning Outcomes

This project demonstrates:

✔ Clear understanding of non-comparison sorting  
✔ Modular, well-structured C++ implementation  
✔ Insightful comparison between algorithms  
✔ Understanding of algorithmic constraints  
✔ Proper time/space analysis  

---

## 👥 Group Members

- **Anas Norani (501231)**
- **Hanan Majeed (519166)**

---


```
