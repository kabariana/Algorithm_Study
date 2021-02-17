#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];
    
    int ans = 0;
    for(int i = 0; i<n-1; i++)
    {
        arr[i]--;
        ans+=arr[i];
    }
    ans+=arr[n-1];

    std::cout << ans;
    delete[] arr;
    return 0;
}