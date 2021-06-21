#include <bits/stdc++.h>

int size;
int arr[100001];

void postOrder(int s, int e)
{
    if(s >= e) return;
    int uindex = std::distance(arr, std::upper_bound(arr + s + 1, arr + e, arr[s]));
    postOrder(s + 1, uindex);
    postOrder(uindex, e);
    printf("%d\n", arr[s]); 
}

int main(int argc, char* argv[])
{
    int num;
    while(scanf("%d", &num) != -1){
        arr[size++] = num;
    }
    postOrder(0, size); 
    return 0;
}