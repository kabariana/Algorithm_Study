#include <bits/stdc++.h>

int arr[10];
int on[10];
int off[10];

int main(int argc, char* argv[])
{
    int maxv = 0;
    for(int i = 0; i<10; i++)
        std::cin >> on[i] >> off[i];

    int tmp = 0;
    for(int i = 0; i<10; i++)
    {
        arr[i] = tmp-on[i]+off[i];
        tmp = arr[i];
        maxv = std::max(maxv, arr[i]);
    }
    std::cout << maxv;
    return 0;
}