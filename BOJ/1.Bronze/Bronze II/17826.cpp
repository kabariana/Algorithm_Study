#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int arr[50], score;

    for(int i = 0; i <50; i++)
        std::cin >> arr[i];

    std::cin >> score;

    for(int i = 0; i<50; i++)
    {
        if(score == arr[i]) 
        {
            if(i > 47)
                std::cout << "F\n";
            else if(i > 44)
                std::cout << "C0";
            else if(i > 34)
                std::cout << "C+\n";
            else if(i > 29)
                std::cout << "B0\n";
            else if(i > 14)
                std::cout << "B+\n";
            else if(i > 4)
                std::cout << "A0\n";
            else
                std::cout << "A+\n";
            break;
        }
    }
    return 0;
}