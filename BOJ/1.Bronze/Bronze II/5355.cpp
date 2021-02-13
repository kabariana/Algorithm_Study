#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        double num;
        std::string str;

        std::cin >> num;
        std::getline(std::cin, str);

        for(int i = 0; str[i]; i++)
        {
            switch(str[i])
            {
            case '@':
                num*=3;
                break;
            case '%':
                num+=5;
                break;
            case '#':
                num-=7;
                break;
            }
        }
        printf("%.2lf\n", num);
    }
    return 0;
}