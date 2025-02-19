#include<stdio.h>

void bubblesort(int a[], int n){
    int swap, flag;

    for(int i=0; i<n-1; i++)
    {
        flag = 0;
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]> a[j+1])
            {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
                flag++;
            }
        }

        if(flag == 0)
        break;
    }
    printf("Sorting done:\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[10];
    printf("Enter the elements:\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    bubblesort(a,n);

    return 0;
}