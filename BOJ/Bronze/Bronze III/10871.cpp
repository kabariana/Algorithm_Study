#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, x;
    int* arr;

    std::cin >> n >> x;

    arr = new int[n];

    for(int i = 0; i<n; i++)
        std::cin >> arr[i];
    
    for(int i = 0; i<n; i++)
        if(x > arr[i])
            std::cout << arr[i] << ' ';
    delete[] arr;
    return 0;
}