#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int k, e_sum=0, o_sum=0;
        std::cin >> k;
        for(int i = 0; i<k; i++)
        {
            int num;
            std::cin >> num;
            if(num%2 == 0)
                e_sum+=num;
            else
                o_sum+=num;
        }

        if(e_sum > o_sum)
            std::cout << "EVEN\n";
        else if(e_sum < o_sum)
            std::cout << "ODD\n";
        else
            std::cout << "TIE\n";
    }
    return 0;
}