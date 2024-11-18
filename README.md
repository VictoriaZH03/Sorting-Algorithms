# Sorting-Algorithms

This repository contains implementations of various sorting algorithms in C++. The project aims to provide a comprehensive overview of the most commonly used sorting techniques, offering an opportunity to understand their inner workings, performance characteristics, and trade-offs.

# Implemented Sorting Algorithms
The following sorting algorithms are implemented, each demonstrating different approaches to sorting data:
Algorithm	Description
Insertion Sort	A simple, intuitive sorting algorithm that builds the final sorted array one item at a time.
Merge Sort	A divide-and-conquer algorithm that splits the array into halves, recursively sorts them, and merges the results.
Heap Sort	An efficient, comparison-based sorting algorithm that leverages a binary heap data structure.
Count Sort	A non-comparison sorting algorithm that works well for small ranges of integers.
Quick Sort	A highly efficient, divide-and-conquer sorting algorithm using a pivot to partition elements.
Bucket Sort	A sorting algorithm that distributes elements into buckets and then sorts each bucket individually.
Radix Sort	A non-comparison sorting algorithm that sorts integers digit by digit based on their place value.


| Algorithm              | Description
| :---------------- | :------------: |
| Insertion Sort        | A simple, intuitive sorting algorithm that builds the final sorted array one item at a time   |
| Merge Sort           | A divide-and-conquer algorithm that splits the array into halves, recursively sorts them, and merges the results   |
| Heap Sort    | An efficient, comparison-based sorting algorithm that leverages a binary heap data structure   |
| Count Sort        | A non-comparison sorting algorithm that works well for small ranges of integers   |
| Quick Sort           | A highly efficient, divide-and-conquer sorting algorithm using a pivot to partition elements   |
| Bucket Sort    | A sorting algorithm that distributes elements into buckets and then sorts each bucket individually   |
| Radix Sort    | A non-comparison sorting algorithm that sorts integers digit by digit based on their place value   |

# Algorithm Overview

# Insertion Sort
* Time Complexity: O(n²) in the average and worst cases, O(n) in the best case.
* Space Complexity: O(1)
* Suitable for small or partially sorted datasets.

# Merge Sort
* Time Complexity: O(n log n) for all cases.
* Space Complexity: O(n)
* Known for its stability and efficiency in large datasets.

# Heap Sort
* Time Complexity: O(n log n) for all cases.
* Space Complexity: O(1)
* Not stable but highly efficient for large datasets.

# Count Sort
* Time Complexity: O(n + k), where n is the number of elements and k is the range of input.
* Space Complexity: O(k)
* Works well for small integer ranges.

# Quick Sort
* Time Complexity: O(n log n) on average, O(n²) in the worst case.
* Space Complexity: O(log n)
* Offers great performance in the average case with in-place sorting.

# Bucket Sort
* Time Complexity: O(n + k), where n is the number of elements and k is the number of buckets.
* Space Complexity: O(n + k)
* Suitable for data that is uniformly distributed over a range.

# Radix Sort
* Time Complexity: O(nk), where n is the number of elements and k is the number of digits.
* Space Complexity: O(n + k)
* Works well for sorting integers with a fixed number of digits.

# License

This project is licensed under the MIT License. You are free to use, modify, and distribute it under the terms of the license.

