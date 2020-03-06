#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    int i;
    int sum;
    int size;
    char *str;

    i = 0;
    sum = 0;
    scanf("%d", &size);
    str = (char *)malloc(sizeof(char) * size + 1);
    scanf("%s", str);
    while (*str)
    {
        sum += *str++ - 48;
    }
    printf("%d\n", sum);
    return (0);
}
