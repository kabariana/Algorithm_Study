// Bronze 2의 1373번 문제랑 다를게 없음?
#include <bits/stdc++.h>

std::string func(std::string str)
{
    int res = 0;
    std::string temp;
    for(int i = 0; str[i]; i++)
        res = res*2+(str[i]-'0');
    temp = std::to_string(res);
    return temp;
}

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    std::string tmp;

    int len = str.size()%3;

    if(len!=0)
        tmp.append(func(str.substr(0,len)));

    for(int i = len; str[i]; i+=3)
        tmp.append(func(str.substr(i,3)));

    std::cout << tmp;
    return 0;
}