// 그리디 문제
// 행동의 최소 - 0으로만 또는 1로만 이루어진 영역의 개수 중 적은 것
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    int chunk1, chunk0;
    chunk0 = chunk1 = 0;

    if(str[0] == '1')
        chunk1++;
    else
        chunk0++;
    
    for(int i = 1; str[i]; i++)
    {
        if(str[i] != str[i-1])
        {
            if(str[i]=='0')
                chunk0++;
            else
                chunk1++;
        }
    }
    std::cout << std::min(chunk0, chunk1);
    return 0;
}