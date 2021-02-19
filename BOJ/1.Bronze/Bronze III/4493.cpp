#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int tc;
    std::cin >> tc;
    while(tc--)
    {
        int n;
        std::cin >> n;
        int count[2] = {0,};
        for(int i=0; i<n; i++)
        {
            char a, b;
            std::cin >> a >> b;
            std::cin.ignore();
            if(a =='R'&&b=='S'||a=='S'&&b=='P'||a=='P'&&b=='R')
                count[0]++;
            else if(a=='R'&&b=='P'||a=='S'&&b=='R'||a=='P'&&b=='S')
                count[1]++;
        }
        if(count[0]==count[1])
            std::cout << "TIE\n";
        else
            std::cout << "Player "<< (count[0]>count[1]?1:2) << '\n';
    }
    return 0;
}