#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    int sum = 0;

    while(N--)
    {
        std::string str;
        std::cin >> str;
        for(int i = 0; str[i]; i++)
        {
            if(str[i]=='A')
                sum+=4;
            else if(str[i]=='K')
                sum+=3;
            else if(str[i]=='Q')
                sum+=2;
            else if(str[i]=='J')
                sum+=1;
        }
    }
    std::cout << sum;
    return 0;
}