#include <bits/stdc++.h>

char str[1000001];
int arr[1000001], i, j;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(std::cin >> str && str[0] ^ '.')
    {
        for(arr[i = 0] = j = -1; str[i];)
            j < 0 | str[j] == str[i] ? arr[++i] = ++j : j = arr[j];
        std::cout << (i % (i - arr[i])?1:i/(i - arr[i])) << '\n';
    }
    return 0;
}