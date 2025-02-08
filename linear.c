#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[] = {15,5,20,35,2,42,67,17};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the element to search: ");

    int data, found = 0;
    scanf("%d",&data);

    for(int i=0; i<n; i++)
    {
        if(data == a[i])
        {
            printf("Element found at index: %d",i);
            found++;
            break;
        }
    }
    if(found==0)
    printf("Element not found :(");
    return 0;
}