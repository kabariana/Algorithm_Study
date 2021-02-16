#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string str;
    std::cin >> n >> str;

    std::string temp = "";
    for(int i = 0; str[i]; i++)
    {
        if(str[i]=='j' && str[i+1]=='o' && str[i+2]=='i')
        {
            temp+="JOI";
            i+=2;
        }
        else
            temp+=str[i];
    }
    std::cout << temp;
    return 0;
}