#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, a, b, c;
    std::cin >> n >> a >> b >> c;

    for(int i = 0; i<a; i++)
        std::cout << char((i%26) + 'A');
    for(int i = 0; i<b; i++)
        std::cout << char((i%26) + 'a');
    for(int i = 0; i<n-a-b; i++)
        std::cout << char((i%10) + '0');
    return 0;
}