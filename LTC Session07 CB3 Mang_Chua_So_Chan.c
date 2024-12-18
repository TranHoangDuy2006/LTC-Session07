#include <stdio.h>

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int sochan = 0; 

    printf("\n");

    for (int i = 0; i < 5; i++) 
    {
        if (arr[i] % 2 == 0) 
        { 
            if (sochan) 
            {
                printf(", "); 
            }
                    printf("%d", arr[i]);
                    sochan = 1; 
        }
    }
    
    printf("\n\n");
        
        if(!sochan)
        {
            printf("\tMang nay khong chua so chan!");
            printf("\n\n");
        }
    
    return 0;
}