#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* arr = new int[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    if(arr[0]*arr[2] == arr[1]*arr[1])
        std::cout<< arr[n-1]*(arr[1]/arr[0]);
    else
        std::cout << arr[n-1]+(arr[1]-arr[0]);
    delete[] arr;
    return 0;
}