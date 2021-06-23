#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::string str;

    std::cin >> n >> str;

    int a = 0, b = 0, c = 0;

    for(int i = 0; i<n; i++)
    {
        if(str[i] =="ABC"[i%3])
            a++;
        if(str[i] == "BABC"[i%4])
            b++;
        if(str[i] == "CCAABB"[i%6])
            c++;
    }
    int maxCnt = std::max({a, b, c});

    std::cout << maxCnt <<'\n';

    if(a == maxCnt)
        std::cout << "Adrian\n";
    if(b == maxCnt)
        std::cout << "Bruno\n";
    if(c == maxCnt)
        std::cout << "Goran\n";
    return 0;
}