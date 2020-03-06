#include <stdio.h>

int    main(void)
{
    int a, b, i, j;
    int arr[100];

    i = j = 0;
    a = b = -1;
    while (a && b)
    {
        scanf("%d %d", &a, &b);
        if (!a)
            break ;
        arr[i] = a + b;
        i++;
    }
    while (j < i)
    {
        printf("%d\n", arr[j]);
        j++;
    }
    return (0);
}
