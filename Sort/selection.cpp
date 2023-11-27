#include <iostream>
#include <iterator>

using namespace std;
void selectionSort(int array[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        swap(array[i], array[min_index]);
    }
}
int main()
{
    int numbers[]{23, 45, 34, 345, 1, 2, 6};
    int sizing = sizeof(numbers) / sizeof(int);
    selectionSort(numbers, sizing);
    for (int k : numbers)
    {
        cout << " " << k;
    }

    return 0;
}