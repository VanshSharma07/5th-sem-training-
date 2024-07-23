// header.h
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        size_t minIdx = i;
        for (size_t j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; ++i)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSortHelper(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSortHelper(arr, left, mid);
    mergeSortHelper(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void mergeSort(vector<int>& arr) {
    mergeSortHelper(arr, 0, arr.size() - 1);
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

#endif //HEADER_H
