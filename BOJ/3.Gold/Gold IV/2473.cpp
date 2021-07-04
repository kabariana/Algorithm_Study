// 투 포인터
#include <bits/stdc++.h>
using ll = long long;

ll MAX = 3e9 + 1;
std::vector<ll> arr;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    arr.resize(N);
    for(int i = 0; i<N; i++)
        std::cin >> arr[i];
    // 오름차순으로 정렬
    std::sort(arr.begin(), arr.end());

    int first, second, third;
    first = second = third = 0;
    for(int i = 0; i<N; i++)
    {
        int l = i + 1;
        int r = N - 1;
        while(l < r)
        {
            ll sum = arr[i] + arr[l] + arr[r];
            if(MAX > std::llabs(sum))
            {
                MAX = std::llabs(sum);
                first = i;
                second = l;
                third = r;
            }
            if(sum > 0)
                r--;
            else
                l++;
        }
    }
    std::cout << arr[first] << ' ' << arr[second] << ' ' << arr[third] << '\n';
    return 0;
}