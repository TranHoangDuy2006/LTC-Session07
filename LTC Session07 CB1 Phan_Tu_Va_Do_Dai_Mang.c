#include <stdio.h>

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int length = sizeof(arr) / sizeof(arr[5]);

    printf("Cac phan tu trong mang: \n");
    
    for (int i = 0; i < length; i++)
    {
        printf("Phan tu thu %d la: %d \n", i + 1, arr[i]);
    }
        printf("Do dai cua mang la: %d \n", length);

    return 0;

}