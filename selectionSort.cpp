#include <iostream>


 void selectionSort(int arr[], int n)
{
    int min_index;
    for(int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                 min_index = j;
            }
        }
        if(min_index != i)
        {
            int tmp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = tmp;
        }

         for(int i = 0; i < n; i++)
        {
             std::cout << arr[i]  <<  std::endl;
        }
        std::cout << "\n" << std::endl;
    }
}



int main()

{
                        
    int arr[] = {64, 25, 22, 12, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    std::cout << "Sorted Array: " << std::endl;
     for(int i = 0; i < n; i++)
    {
         std::cout << arr[i]  <<  std::endl;
    }        
   

    return 0;
}
