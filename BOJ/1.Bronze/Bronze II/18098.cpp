#include <bits/stdc++.h>

constexpr int max_size = 1e5 + 1;
int arr[max_size];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    int cnt = 0, num;
    for(int i = 1; i <= N; i++)
    {
        std::cin >> num;
        if(num<=N&&!arr[num])
        {
            arr[num] = 1;
            cnt++;
        }
    }
    std::cout << cnt << '\n';
    return 0;
}