#include <bits/stdc++.h>

char arr[101][101];

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    
    int len = str.length();
    int r, c, dr, dc;

    for(int dr = 1; dr <= len; dr++)
    {
        for(int dc = 1; dc <= len; dc++)
        {
            if(dr<=dc && dr*dc==len)
            {
                r = dr;
                c = dc;
            }
        }
    }

    int v = 0;
    for(int i = 0; i < c; i++)
        for(int j = 0; j<r; j++)
            arr[j][i] = str[v++];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            std::cout << arr[i][j];

    return 0;
}