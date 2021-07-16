#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int sum = 0, cnt = 0;
    std::string str;
    while(std::cin >> str)
    {
        ++sum;
        if(str.find("ae")!=std::string::npos)
            ++cnt;
    }
    if(5 * cnt >= 2 * sum)
        std::cout << "dae ae ju traeligt va\n";
    else
        std::cout << "haer talar vi rikssvenska\n";
    return 0;
}