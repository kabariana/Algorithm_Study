#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 1; i<=n; i++)
    {
        std::string str;
        std::cin >> str;
        std::cout << "String #"<<i <<'\n';
        for(int j = 0; str[j]; j++)
            std::cout << (char)((str[j]-'A'+1)%26 + 'A');
        std::cout << "\n\n";
    }
    return 0;
}