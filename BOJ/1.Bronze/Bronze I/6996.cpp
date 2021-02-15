#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;
    while(t--)
    {
        std::string a, b;
        std::cin >> a >> b;

        int n = 26;
        int* ar = new int[n];
        int* br = new int[n];

        for(int i = 0; i<26; i++)
            ar[i] = br[i] = 0;

        for(int i = 0; a[i]; i++)
            ar[a[i]-'a']++;
        
        for(int i = 0; b[i]; i++)
            br[b[i]-'a']++;

        bool flag = true;
        for(int i = 0; i<26; i++)
        {
            if(ar[i]!=br[i])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            std::cout << a << " & " << b << " are anagrams.\n";
        else
            std::cout << a << " & " << b << " are NOT anagrams.\n";
        delete[] ar;
        delete[] br;
    }
    return 0;
}