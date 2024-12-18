#include <stdio.h>

int main()
{
    int x;
    printf("\n");
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &x);

    int arr[x];
    printf("\n");
    printf("Nhap cac phan tu cua mang: ");
    for(int i = 0; i < x; i++)
    {
        printf("\n");
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d",&arr[i]);
    }

    printf("\n");
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}