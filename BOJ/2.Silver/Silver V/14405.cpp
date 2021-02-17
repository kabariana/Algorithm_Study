#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    bool flag = true;

    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]=='p'&&str[i+1]=='i')
            i+=2;
        else if(str[i]=='k'&&str[i+1]=='a')
            i+=2;
        else if(str[i]=='c'&&str[i+1]=='h'&&str[i+2]=='u')
            i+=3;
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}