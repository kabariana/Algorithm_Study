#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
        std::cin >> arr[i];

    int c = arr[0];
    bool te = false;
    for(int i = 1; i<n; i++)
        if(arr[i] > c)
            te = true;

    std::cout << (!te?"S":"N");
    delete[] arr;
    return 0;
}