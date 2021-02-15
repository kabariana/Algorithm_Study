#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int arr[26] = {0, };

    while(n--)
    {
        std::string str;
        std::cin >> str;
        arr[str[0]-'a']++;
    }
    
    bool check = false;
    for(int i = 0; i<26; i++)
    {
        if(arr[i]>=5)
        {
            std::cout << (char)(i+'a');
            check = true;
        }
    }
    if(check == false)
        std::cout << "PREDAJA";
    return 0;
}