#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    int cnt = 0;
    int tmp = 665;
    std::cin >> n;

    std::string str;
    while(++tmp)
    {
        str = std::to_string(tmp);
        if(str.find("666") != -1)
            cnt++;
        if(cnt == n)
        {
            std::cout << tmp <<'\n';
            break;
        }
    }
    return 0;
}