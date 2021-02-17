// 영어 지문이 아닌 문제...
// 입력의 순서대로
// 1. Test Case
// 2. input string's length
// 3. input string
// 4. Converted string's first letter
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int tc;
    std::cin >> tc;
    while(tc--)
    {
        int n;
        std::string str;
        char cfl;
        std::cin >> n >> str >> cfl;

        int diff; 
        if(str[0]>cfl)
            diff = -1*(str[0]-cfl) + 26;
        else
            diff = std::abs(str[0]-cfl);

        std::string tmp = "";
        for(int i = 0; str[i]; i++)
            tmp+=char(int(str[i]+diff-97)%26+97);
        std::cout << tmp << '\n';
    }
    return 0;
}