#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    long long sum = 0;
    while(n--)
    {
        long long tmp;
        std::cin >> tmp;
        std::string str = std::to_string(tmp);
        std::string str2 = str;
        std::reverse(str2.begin(), str2.end());
        if(str == str2)
            sum += tmp;
    }
    std::cout << sum <<'\n';
    return 0;
}