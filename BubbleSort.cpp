#include <iostream>
#include <vector>

#include "BubbleSort.h"

using namespace std;

void BubbleSort(vector<int> *arr, int size) {
    for(int i=0; i < size-1; i++) {
        for(int j=0; j < size-1-i; j++) {
            if((*arr)[j] > (*arr)[j + 1]) {
                swap((*arr)[j], (*arr)[j+1]);
            }
        }
    }
}

void BubbleSort(int (*arr)[], int size) {
    for(int i=0; i < size-1; i++) {
        for(int j=0; j < size-1-i; j++) {
            if((*arr)[j] > (*arr)[j + 1]) {
                swap((*arr)[j], (*arr)[j+1]);
            }
        }
    }
}
