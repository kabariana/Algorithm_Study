#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int h, y;
    std::cin >> h >> y;

    int arr[11] = {h};
    
    for(int i = 1; i<=y; i++)
    {
        if(i >= 1)
            arr[i] = std::max(arr[i], int(arr[i-1]*1.05));
        if(i >= 3)
            arr[i] = std::max(arr[i], int(arr[i-3]*1.2));
        if(i >= 5)
            arr[i] = std::max(arr[i], int(arr[i-5]*1.35));
    }
    std::cout << arr[y] <<'\n';
    return 0;
}