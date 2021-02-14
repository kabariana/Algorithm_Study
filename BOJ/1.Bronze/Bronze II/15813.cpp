#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string str;

    std::cin >> n >> str;

    int sum = 0;
    for(int i = 0; i<n; i++)
        sum+=str[i]-'A'+1;

    std::cout << sum;
    return 0;
}