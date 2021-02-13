#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, q;
    std::cin >> n >> m;

    std::vector<std::string> s(n);
    for(int i = 0; i<n; i++)
        std::cin >> s[i];

    std::vector<std::string> t(m);
    for(int i = 0; i<m; i++)
        std::cin >> t[i];

    std::cin >> q;

    while(q--)
    {
        int num;
        std::cin >> num;
        num--;
        int a = num%n;
        int b = num%m;
        std::cout << s[a] << t[b] << '\n';
    }
    return 0;
}