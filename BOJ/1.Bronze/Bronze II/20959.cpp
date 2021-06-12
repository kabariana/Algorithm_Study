#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    for(auto& i: str)
        if(!isdigit(i))
            i = ' ';
    std::stringstream ss(str);
    std::set<int> st;
    while(ss >> str) 
        st.insert(std::stoi(str));
    std::cout << st.size() << '\n';
    return 0;   
}