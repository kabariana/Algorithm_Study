#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, comb, N;
    std::cin >> TC;
    std::string category, key;
    std::map<std::string, int> M;
    std::pair<std::map<std::string, int>::iterator, bool> p;

    while(TC--)
    {
        M.clear();
        comb = 1;
        std::cin >> N;

        for(int i = 0; i<N; i++)
        {
            std::cin >> category >> key;
            p = M.insert(std::pair<std::string, int> (key, 1));
            if(!p.second)
                M[key]++;
        }
        for(std::map<std::string, int>::iterator it = M.begin(); it != M.end(); it++)
            comb *= (it->second + 1);
        std::cout << comb - 1 <<'\n';
    }
    return 0;
}