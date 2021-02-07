#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int a, b, ans;
        char c;
        
        scanf("%d %c %d = %d", &a, &c, &b, &ans);

        std::cout << "Case " << i << ": ";
        if(c == '+')
        {
            if(ans == a+b)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
        if(c == '-')
        {
            if(ans == a - b)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }
    return 0;
}