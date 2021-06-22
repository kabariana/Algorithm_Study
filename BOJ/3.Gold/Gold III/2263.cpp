#include <bits/stdc++.h>

int post[100001], position[100001];

void preOrder(int start, int end, int from)
{
    if(end < start)
        return;
    if(end == start){
        printf("%d ", post[start]);
        return;
    }
    printf("%d ", post[end]);
    int index = position[post[end]];
    preOrder(start, start + index - from - 1, from);
    preOrder(start + index - from, end -1 , index + 1);
}

int main(int argc, char* argv[])
{

    int n, num;
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &num);
        position[num] = i;
    }

    for(int i = 0; i < n; i++)
        scanf("%d", post+i);
    preOrder(0, n-1, 0);
    return 0;
}