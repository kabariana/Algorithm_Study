#include <bits/stdc++.h>

int arr[4];
int on[4];
int off[4];

int main(int argc, char* argv[])
{
    int maxv = 0;
    for(int i = 0; i<4; i++)
        std::cin >> on[i] >> off[i];

    int temp = 0;
    for(int i = 0; i<4; i++)
    {
        arr[i] = temp - on[i] + off[i];
        temp = arr[i];
        maxv = std::max(maxv, arr[i]);
    }
    std::cout << maxv;
    return 0;
}