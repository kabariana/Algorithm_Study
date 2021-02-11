#include <bits/stdc++.h>

int arr[10];

int main(int argc, char* argv[])
{
    int n, g = 0;
    std::cin >> n;

    while(n>0)
    {
        arr[g++] = n%10;
        n/=10;
    }
    std::sort(arr, arr+g, std::greater<int>());

    for(int i = 0; i<g; i++)
        std::cout << arr[i];
    return 0;
}