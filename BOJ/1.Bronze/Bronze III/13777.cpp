#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n;
        std::cin >> n;

        if(!n)
            break;

        int l = 1, h = 50;
        while(l<=h)
        {
            int m = (l+h)/2;
            std::cout << m << ' ';
            
            if(m == n)
            {  
                break;
            }
            else if(m<n)
                l = m+1;
            else
                h = m-1;
        }
        std::cout << '\n';
    }
    return 0;
}