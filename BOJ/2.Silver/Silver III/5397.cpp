// STL::List 문제
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();

    while(T--)
    {
        std::string str;
        std::cin >> str;
        std::list<char> l;
        
        // 반복자의 처음위치
        std::list<char>::iterator iter = l.end();

        for(int i = 0; str[i]; i++)
        {
            if(str[i]=='<')
            {
                if(iter == l.begin())
                    continue;
                iter--;
            }
            else if(str[i]=='>')
            {
                if(iter == l.end())
                    continue;
                iter++;
            }
            else if(str[i]=='-')
            {
                if(iter == l.begin())
                    continue;
                iter = l.erase(--iter);
            }
            else
                l.insert(iter, str[i]);
        }

        for(auto i = l.begin(); i != l.end(); i++)
            std::cout << *i;
        std::cout << '\n';
        l.clear();
    }
    return 0;
}
