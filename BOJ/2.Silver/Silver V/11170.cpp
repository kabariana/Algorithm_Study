#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        std::string tmp = "";
        int a, b;
        std::cin >> a >> b;
        for(int i = a; i<=b; i++)
            tmp += std::to_string(i);
        
        int cnt = 0;
        for(int i = 0; i<tmp.length(); i++)
            if(tmp[i] == '0')
                cnt++;
        std::cout << cnt <<'\n';
    }
    return 0;
}