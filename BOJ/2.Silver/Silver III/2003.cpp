//투포인터 알고리즘
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    int* arr = new int[n];
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];

    int fp = 0, sp = 0, sum = 0, cnt = 0;
    while(1)
    {
        if(sum>=m)
            sum-=arr[fp++];
        else if(sp == n)
            break;
        else
            sum+=arr[sp++];

        if(sum == m)
            cnt++;
    }

    std::cout << cnt;
    delete[] arr;
    return 0;
}