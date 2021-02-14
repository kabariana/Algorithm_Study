#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[26] = { 0, };
    std::string str;
    std::getline(std::cin, str);

    for (int i = 0; str[i]; i++)
    {
        str[i] = std::toupper(str[i]);
        if(str[i]>='A'&&str[i]<='Z')
            arr[str[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c | ", 'A' + i);
        for (int j = 0; j < arr[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}