#include <iostream>

int main()
{
    
    int arr[] = {64, 25, 22, 12, 11};

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j + 1] = tmp;
            }


        }
        for(int k = 0; k < 5; k++)
        {
            std::cout << arr[k] << std::endl;
        }
        std::cout << "\n" << std::endl;

    }
    std::cout << "Sorted Array: " << std::endl; 
    for(int i = 0; i < 5; i++)
    {
        std:: cout << arr[i] << std::endl;

    }    
    
    return 0;
}
