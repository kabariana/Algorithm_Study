#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    bool flag = false;
 
    int p = 1;
    for(int i = 0; i<str.size()-1; i++)
    {
        int l = 1, h = 1;
        for(int j = 0; j<p; j++)
            l*=(str[j]-'0');
        for(int j = p; j<str.size(); j++)
            h*=(str[j]-'0');

        if(l==h)
        {
            flag = true;
            break;
        }
        p++;
    }
    if(flag)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}