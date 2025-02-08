#include<stdio.h>

int main()
{
    int a[] = {7,4,10,8,3,1};
    int min, n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++)
    {
        min = a[i];
        if(a[i+1]<min)
        min = a[i-1];
    }
    printf("Min num is %d", min);
    return 0;
}