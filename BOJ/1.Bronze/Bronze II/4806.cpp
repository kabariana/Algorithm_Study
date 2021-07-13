#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    int cnt = 0;
    while(std::getline(std::cin, str)){
        cnt++;
    }
    std::cout << cnt <<'\n';
    return 0;
}