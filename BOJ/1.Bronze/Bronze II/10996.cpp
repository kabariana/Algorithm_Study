#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 1; i<=n*2; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i%2 == 0)
            {
                if(j%2==0)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            else
            {
                if(j%2==0)
                    std::cout << " ";
                else
                    std::cout << "*";
            }
        }
        std::cout << '\n';
    }    
    return 0;
}