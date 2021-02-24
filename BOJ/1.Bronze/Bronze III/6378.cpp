#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        std::string str;
        std::cin >> str;
        if(str == "0")
            break;

        int sum = 0;
        for(int i = 0; str[i]; i++)
            sum+=(str[i]-'0');
        
        while(sum>=10)
        {
            int tmp = sum;
            sum = 0; 
            for(;tmp>0;tmp/=10)
                sum+=tmp%10;
        }
        std::cout << sum <<'\n';
    }
    return 0;
}