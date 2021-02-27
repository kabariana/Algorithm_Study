#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string str;

    std::cin >> n >> str;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i<n; i++)
    {
        if(str[i]=='J')
            cnt1++;
        else if(str[i]=='O')
            cnt2++;
        else if(str[i]=='I')
            cnt3++;
    }
    for(int i = 0; i<cnt1; i++)
        std::cout << "J";
    for(int i = 0; i<cnt2; i++)
        std::cout << "O";
    for(int i = 0; i<cnt3; i++)
        std::cout << "I";
    return 0;
}