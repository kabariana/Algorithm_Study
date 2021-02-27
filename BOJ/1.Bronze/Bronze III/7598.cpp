#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        std::string str;
        int cur;
        
        std::cin >> str >> cur;

        if(str == "#")
            break;

        while(true)
        {
            char c;
            int num;
            std::cin >> c >> num;
            std::cin.ignore();
            if(c == 'C')
            {
                if(num > cur)
                    num = 0;
                cur-=num;
            }
            else if(c == 'B')
            {
                if(cur + num > 68)
                    num = 0;
                cur += num;
            }
            else if(c =='X' && num == 0)
                break;
        }
        std::cout << str << ' ' << cur << '\n';
    }
    return 0;
}