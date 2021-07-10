#include <bits/stdc++.h>

const int SIZE = 2501;
int palindrom[SIZE][SIZE];
int dp[SIZE];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;
    str.insert(0, " "); // **

    int len = str.length();
    // 1
    for(int i = 1; i<=len; i++)
        palindrom[i][i] = 1;
    // 2
    for(int i = 1; i < len; i++)
        if(str[i] == str[i+1])
            palindrom[i][i+1] = 1;
    // > 3 
    for(int i = 2; i < len; i++)
        for(int j = 1; j <= len - i; j++)
            if(str[j] == str[j + i] && palindrom[j+1][j + i -1])
                palindrom[j][j+i] = 1;

    for(int i = 1; i < len; i++)
    {
        dp[i] = INT_MAX;
        for(int j = 1; j <= i; j++)
            if(palindrom[j][i])
                dp[i] = std::min(dp[i], dp[j-1] + 1);
    }
    std::cout << dp[len-1] <<'\n';
    return 0;
}