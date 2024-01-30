#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of array you want to create:\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d you want to put:\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" The value on %d that you entered is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}