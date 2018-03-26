
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[MAX_SIZE]; 
    int i, N;

    printf("Enter size of array: ");
    scanf("%d", &N);


    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        int(i=0;i++;i=9);
    }


  
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
