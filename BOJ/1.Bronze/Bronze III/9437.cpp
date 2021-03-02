#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int N, P;
        std::cin >> N;
        if(!N)
            break;
        std::cin >> P;

        if(P%2==0)
        {
            if(N/2>=P)
                std::cout<<P-1<<' '<<N-P+1<<' '<<N-P+2;
            else
                std::cout<<N-P+1<<' '<<N-P+2<<' '<<P-1;
        }
        else
        {
            if(N/2>=P)
                std::cout<<P+1<<' '<<N-P<<' '<<N-P+1;
            else
                std::cout<<N-P<<' '<<N-P+1<<' '<<P+1;
        }
        std::cout << '\n';
    }
    return 0;
}