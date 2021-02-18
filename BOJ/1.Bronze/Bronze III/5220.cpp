#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n, chk_bit;
        std::cin >> n >> chk_bit;

        int cnt = 0;
        while(n>0)
        {
            if(n%2==1)
                cnt++;
            n/=2;
        }
        
        if(chk_bit == 1)
        {
            if(cnt%2==1)
                std::cout << "Valid\n";
            else
                std::cout << "Corrupt\n";
        }
        else
        {
            if(cnt%2==0)
                std::cout << "Valid\n";
            else
                std::cout << "Corrupt\n";
        }
    }
    return 0;
}