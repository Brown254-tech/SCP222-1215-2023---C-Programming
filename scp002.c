#include <stdio.h>

int main(void)
{
    int b;
    printf("17:");
    scanf("%d", &b);
    if (b > 0)
    {
        printf ("The value is negative\n");
    }
    else if (b == 0)
    {
        printf ("The value is zero\n");
    }
    else
    {
        printf ("The value is positive\n");
    }
    return 0;
}
