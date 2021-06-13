#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    int n;
    std::cin >> str >> n;
    for(int i = 0; i<n; i++)
    {
        std::string tmp;
        std::cin >> tmp;
        if(tmp.size() != str.size())
            continue;
        int cnt = 0;
        for(int j = 0; j<tmp.size(); j++)
            cnt += tmp[j] != str[j];
        
        if(cnt <= 1){
            std::cout << i + 1;
            return 0;
        }
    }
    return 0;
}