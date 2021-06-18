#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str;
    std::set<std::string> S;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        std::string a, b;
        std::cin >> a;
        b = a;
        std::reverse(b.begin(), b.end());
        if(a == b)
            str = a;
        else
        {
            std::set<std::string>::iterator it = S.find(b);
            if(it != S.end()) str = a;
        }
        S.insert(a);
    }
    std::cout << str.size() << ' ' << str[str.size()/2] << '\n';
    return 0;
}