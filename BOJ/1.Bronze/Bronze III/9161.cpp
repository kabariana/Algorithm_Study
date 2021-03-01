#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 100; i<1000; i++)
    {
        for(int j = 100; j<1000; j++)
        {
            if(i%111==0&&j%111==0)
                continue;
            if (i *(j%100)==(i/10)*j&&i%10==j/100)
                std::cout <<i<<" / "<<j<<" = "<<i/10<<" / "<<j%100<<"\n";
        }
    }
    return 0;
}