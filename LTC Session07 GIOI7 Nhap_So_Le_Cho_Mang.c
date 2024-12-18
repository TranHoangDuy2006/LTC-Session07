#include <stdio.h>

int main ()
{
    int x;
    int i;
    printf("\nNhap vao so luong ki tu co trong mang: ");
    scanf("%d", &x);

    int arr[x];

    for(int i = 0; i < x; i++)
    {
        while(1) // Vong Lap Kiem Tra Vo Han
        {
        printf("\nNhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        if(arr[i] % 2 != 0) 
        {
                break;
        }
            else
                {
                    printf("\nVui long nhap lai phan tu thu %d!", i + 1);
                    printf("\n");
                }
        }
    }

        printf("\nMang sau khi duoc nhap la: ");
        for(int i = 0; i < x; i++)
        {
            printf("%d", arr[i]);
                if(i < x - 1)
                {
                    printf(", ");
                }
        }

    return 0;
}