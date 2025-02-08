#include<stdio.h>

void insertionsort(int a[], int n)
{
    int temp, j;

    for(int i=1; i<n; i++)
    {
        temp = a[i];

        j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    printf("Array Sorted: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[] = {5,4,10,1,6,2};
    int n = sizeof(a)/sizeof(a[0]);

    insertionsort(a,n);

    return 0; 
}