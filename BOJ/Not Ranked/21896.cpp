#include <bits/stdc++.h>

char str[3000001];

int main(int argc, char* argv[])
{
    int length = 0, cnt = 0;
    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    for(int i = 0; i<length; i++)
    {
        int tmp = i;
        while(i < length - 2 && str[i] == str[i+1])
            i++;
        if(str[i] < str[i+1])
            cnt += i - tmp + 1;
    }
    std::cout << cnt << '\n';
    return 0;
}