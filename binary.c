#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (data == a[mid])
            return mid;

        else if (data < a[mid])
            r = mid - 1;

        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int a[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSize of aaray: %d\n", n);

    int data;

    printf("Enter the data: ");
    scanf("%d", &data);
    int index = BinarySearch(a, n, data);
    if (index == -1)
        printf("Element not found!!");
    else
        printf("Index:  %d", BinarySearch(a, n, data));
    return 0;
}