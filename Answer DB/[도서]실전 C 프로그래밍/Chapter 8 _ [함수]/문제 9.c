#include <stdio.h>

int max1, max2;

void update_max(int x) 
{
    if (x == max1) 
        max2 = x;
    if (x > max1)
    {
        max2 = max1;
        max1 = x;
    }
    if (max1 > x && x > max2) 
        max2 = x;
}

int main()
{
    int n;
    scanf("%d", &n);
    max1 = n;

    scanf("%d", &n);
    max2 = n;

    update_max(n);
    while (n != 0)
    {
        scanf("%d", &n);
        update_max(n);
    }
    printf("%d %d", max1, max2);
    return 0;
}
