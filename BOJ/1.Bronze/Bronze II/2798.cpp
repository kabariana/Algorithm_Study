#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m, res = 0;
    std::cin >> n >> m;

    int* arr = new int[n];

    for(int i = 0; i<n; i++)
        std::cin >> arr[i];

    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i+1; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                int temp = arr[i] + arr[j] + arr[k];
                if(temp <= m && m-res > m-(temp))
                    res = temp;
            }
        }
    }
    std::cout << res;

    delete[] arr;
}