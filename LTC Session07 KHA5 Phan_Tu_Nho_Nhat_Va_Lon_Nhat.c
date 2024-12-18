#include <stdio.h>

int main(){
    int arr[5] = {9, 17, 6, 10, 22};
    int lonNhat, nhoNhat;
    lonNhat = arr[0];
    nhoNhat = arr[0];

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > lonNhat) 
        {
            lonNhat = arr[i];
        }

        if(arr[i] < nhoNhat) 
        {
            nhoNhat = arr[i];
        }   

    }    
        printf("\n");
        printf("Phan tu lon nhat trong mang la: %d \n", lonNhat);
        printf("Phan tu nho nhat trong mang la: %d \n", nhoNhat);

    return 0;

}