#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string key;
    std::cin >> key;

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> v(n);
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        std::cin>> v[i];
        // 동일한 문자열이 두 개 연결된 것으로 볼 수 있음
        v[i] = v[i] + v[i];
        if(v[i].find(key)!=std::string::npos)
            cnt++;
    }
    std::cout << cnt;
    return 0;

}