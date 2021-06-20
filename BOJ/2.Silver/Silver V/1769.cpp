#include <bits/stdc++.h>

char str[1000001];

void func(char* str)
{
    int cnt = 0, sum;

    while(strlen(str) > 1)
    {
        sum = 0;
        for(int i = 0; i <strlen(str); i++)
            sum += (str[i]- '0');
        sprintf(str, "%d", sum);
        cnt++;
    }
    std::cout << cnt <<'\n';
    if(std::stoi(str) != 3 && std::stoi(str) != 6 && std::stoi(str) != 9)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> str;
    func(str);
    return 0;
}