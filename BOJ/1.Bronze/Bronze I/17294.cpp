#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    if(str.size() == 1)
    {
        std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!"; 
        return 0;
    }

    bool flag = true;
    int temp = str[1] - str[0];
    for(int i = 2; str[i]; i++)
    {
        if(str[i]-str[i-1] != temp)
        {
            flag = false;
            break;
        }
    } 
    if(flag)
        std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    else
        std::cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
    return 0;
}