#include<iostream>
#include<ctime>
using namespace std;

int partition(int array[], int low, int high) {
    int pivot_index = low + (rand() % (high - low + 1));

    if (pivot_index != high) {
        swap(array[pivot_index], array[high]);
    }
    int pivot_value = array[high];
    int i = low;
    for (int j = low; j <= high; j++) {
        if (array[j] <= pivot_value) {
            swap(array[i], array[j]);
            i++;
        }
    }

    swap(array[i], array[high]);
    return i;
}

void recursion_quickSort(int array[], int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);
        recursion_quickSort(array, low, pivot - 1);
        recursion_quickSort(array, pivot + 1, high);
    }
}

void quickSort(int array[], int length) {
    srand(time(NULL));
    recursion_quickSort(array, 0, length - 1);
}

int main() {
    int array[] = {2, 3, 9, 7, 3, 6, 7};
    int length = sizeof(array) / sizeof(int);
    quickSort(array, length);
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
