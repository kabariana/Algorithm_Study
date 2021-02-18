#include <bits/stdc++.h>

int status[5];
char apartment[510][510];

int main(int argc, char* argv[])
{
    int m, n;
    std::cin >> m >> n;
    // 문자열 배열 입력
    for(int i = 0; i<m*5+1; i++)
    {
        std::string str;
        std::cin >> str;
        for(int j = 0; j<str.length(); j++)
            apartment[i][j] = str[j];
    }

    for(int i = 1; i<m*5+1; i+=5)
    {
        for(int j = 1; j<n*5+1; j+=5)
        {
            if(apartment[i][j] == '.')
                status[0]++;
            else if(apartment[i+1][j]=='.')
                status[1]++;
            else if(apartment[i+2][j]=='.')
                status[2]++;
            else if(apartment[i+3][j]=='.')
                status[3]++;
            else
                status[4]++;
        }
    }

    for(int i = 0; i<5; i++)
        std::cout << status[i] << ' ';
    return 0;
}