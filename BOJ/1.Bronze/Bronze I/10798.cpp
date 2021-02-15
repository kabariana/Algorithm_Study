#include <bits/stdc++.h>

int main(int argc, char* argv[])
{   
    char arr[5][16];
    for(int i = 0; i<5; i++)
    {
        int j = 0;
        std::cin >> arr[i];
        while(arr[i][j++] != '\0'){ }
        for(int k = j-1; k <15; k++)
            arr[i][k] = ' ';
    }
    for(int i = 0; i<15; i++)
        for(int j = 0; j<5; j++)
            if(arr[j][i] != ' ')
                std::cout << arr[j][i];
    return 0;
}