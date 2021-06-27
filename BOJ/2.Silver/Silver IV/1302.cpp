#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, cnt = 0;
    std::string str, res;

    std::cin >> n;
    std::map<std::string, int> M;

    for(int i = 0; i<n; i++)
    {
        std::cin >> str;
        M[str]++;
    }

    for(auto i : M)
    {
        if(M[i.first] > cnt)
        {
            res = i.first;
            cnt = M[i.first];
        }
    }
    std::cout << res << '\n';
    return 0;
}