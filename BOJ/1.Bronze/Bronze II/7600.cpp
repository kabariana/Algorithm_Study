#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        std::string str;
        std::getline(std::cin, str);
        bool arr[26] = {false, };

        if(str == "#")
            break;

        for(int i = 0; str[i]; i++)
        {
            str[i] = std::tolower(str[i]);
            if(arr[str[i]-'a'] == true)
                continue;
            else
                arr[str[i]-'a'] = true;
        }

        int cnt = 0;
        for(int i = 0; i<26; i++)
            if(arr[i]==true)
                cnt++;
        std::cout << cnt <<'\n';
    }
    return 0;
}