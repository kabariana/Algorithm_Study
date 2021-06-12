#include <bits/stdc++.h>
#include <string.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, cnt = 0;
    std::cin >> n;

    while(n--)
    {
        std::string str;
        std::cin >> str;

        std::transform(str.begin(), str.end(), str.begin(), ::tolower);

        if(str.find("pink")!=std::string::npos || str.find("rose")!= std::string::npos)
            cnt++;
    }
    if(cnt == 0)
        std::cout << "I must watch Star Wars with my daughter\n";
    else
        std::cout << cnt << '\n';
    return 0;   
}