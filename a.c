#include <stdio.h>

int main()

{

    int a[] = {2, 4, 6, 8}, *p = a, i;

    for (i = 0; i < 4; i++)

        a[i] = *p++;

    printf("%d\n", a[1]);
}