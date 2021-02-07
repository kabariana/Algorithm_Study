#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T = 3;
    while(T--)
    {
        int check = 0;
        int n;
        long long input, sum = 0;
        std::cin >> n;  
        for(int i = 0; i<n; i++)
        {
            std::cin >> input;
            if(sum > 0 && input > 0 && sum > LLONG_MAX - input)
            {
                check++;
                sum += input;
            }
            else if(sum < 0 && input < 0 && sum < LLONG_MIN - input)
            {
                check--;
                sum += input;
            }
            else
                sum += input;
        }

        if(check > 0)
            std::cout << "+\n";
        else if(check == 0)
        {
            if(sum > 0)
                std::cout << "+\n";
            else if(sum < 0)
                std::cout << "-\n";
            else
                std::cout << "0\n";
        }
        else
            std::cout << "-\n";

    }
    return 0;
}