#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, t, sum = 0; 
    std::cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
        std::cin >> arr[i];

    // 정렬
    std::sort(arr, arr+n);

    t = std::round(n*0.15);

    // 위, 아래 15%씩 제외하고 합
    for(int i = t; i<n-t; i++)
        sum+=arr[i];

    if(n == 0)
        std::cout << "0";
    else
        std::cout << std::round(sum/(n-2.0*t));
    delete[] arr;
}