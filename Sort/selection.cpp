#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        int temp = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            if (min_index != i)
                // swap(arr[min_index], arr[i]);
                 temp = arr[min_index];
                arr[min_index] = arr[i];
                arr[i]= temp;

           
        };
         int i;
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
    }
};
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//         cout << endl;
//     }
// }

// Driver program
int main()
{
    int arr[] = {64,7,5,2, 22,12, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    // array steps
    selectionSort(arr, n);

    // Function Call
    // selectionSort(arr, n);
    // cout << "Sorted array: \n";
    // printArray(arr, n);
    return 0;
}