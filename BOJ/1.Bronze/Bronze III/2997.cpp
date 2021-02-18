#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[3];
    for(int i = 0; i<3; i++)
        std::cin >> arr[i];

    std::sort(arr, arr+3);
    
    if(arr[1]-arr[0] == arr[2]-arr[1])
        std::cout << 2*arr[2]-arr[1];
    else if(arr[1]-arr[0] < arr[2]-arr[1])
        std::cout << (arr[2]+arr[1])/2;
    else
        std::cout << (arr[1]+arr[0])/2;
    return 0;
}