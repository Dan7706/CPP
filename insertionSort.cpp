#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " << endl;
        }
        cout << "\n" << endl;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " " << endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
     
    cout << " Before sorting: " << endl;
    printArray(arr, N);

    insertionSort(arr, N);
    cout << "After sorting: " << endl;
    printArray(arr, N);
 
    return 0;
}
