// 이분 탐색으로 풀어야하는 문제
#include <bits/stdc++.h>

int low(int* arr, int t, int size)
{
    int m, l = 0, r = size - 1;
    
    while(r > l)
    {
        m = (r + l) / 2;
        if(arr[m] >= t)
            r = m;
        else
            l = m + 1;
    }
    return r;
}

int high(int* arr, int t, int size)
{
    int m, l = 0, r = size - 1;
    while(r > l)
    {
        m = (r + l) / 2;
        if(arr[m] > t)
            r = m;
        else
            l = m + 1;
    }
    return r;
}


int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int* arr1 = new int[n];

    for(int i = 0; i < n; i++)
    {
        int num;
        std::cin >> arr1[i];
    }
    std::sort(arr1, arr1 + n);

    int m;
    std::cin >> m;
    int* arr2 = new int[m];
    int* res = new int[m];

    for(int i = 0; i < m; i++)
    {
        int num;
        std::cin >> arr2[i];
        res[i] = 0;
    }

    for(int i = 0; i < m; i++)
    {
        int l = low(arr1, arr2[i], n);
        int r = high(arr1, arr2[i], n);
        if(r == n - 1 && arr1[n-1] == arr2[i])
            r++;
        res[i] = r - l;
    }

    for(int i = 0; i < m; i++)
        std::cout << res[i] << ' ';

    delete[] res;
    delete[] arr2;
    delete[] arr1;
}