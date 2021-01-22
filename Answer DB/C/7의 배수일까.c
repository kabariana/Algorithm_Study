#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    char num[5001];
    int* arr;
    gets(num);

    int len = strlen(num);

    int size = (len % 3 == 0 ? (int)(len / 3) : (int)(len / 3) + 1);

    arr = (int*)malloc(sizeof(int) * size);
    int j = 0;
    int i = len - 1;
    for (; i > 2; i -= 3, j++) 
        arr[j] = (num[i] - '0') + 10 * (num[i - 1] - '0') + 100 * (num[i - 2] - '0');

    arr[j] = 0;

    for (int k = 0; k <= i; k++) {
        arr[j] *= 10;
        arr[j] += num[k] - '0';
    }

    int odd_sum, even_sum;
    odd_sum = even_sum = 0;

    for (int m = 0; m < size; m++)
    {
        if (m % 2 == 0)
            even_sum += arr[m];
        else
            odd_sum += arr[m];
    }

    int p = abs(even_sum - odd_sum);

    printf("%s", p % 7 == 0 ? "multiple" : "not multiple");
    free(arr);
    return 0;
}
