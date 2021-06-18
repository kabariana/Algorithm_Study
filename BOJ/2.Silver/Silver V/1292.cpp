#include <bits/stdc++.h>

int arr[1001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, ind = 0, sum = 0;
    std::cin >> a >> b;

    for(int i = 1; i<= 1000; i++)
    {
        for(int j = 0; j < i && ind < 1000; j++)
        {
            arr[ind++] = i;
        }
    }
    for(int i = a - 1; i<b; i++)
        sum += arr[i];
    std::cout << sum << '\n';
    return 0;
}