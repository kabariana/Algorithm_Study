#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        std::string p, tmp;
        std::cin >> p;

        int n;
        std::cin>> n;

        std::string ary;
        std::cin >> ary;

        std::deque<int> dq;

        for(int i = 0; i < ary.length(); i++)
        {
            if(ary[i] == '[') continue;
            else if(ary[i] >= '0' && ary[i] <= '9') // 두 자릿수 이상
                tmp += ary[i];
            else if(ary[i] == ',' || ary[i] == ']')
            {
                if(!tmp.empty())
                {
                    dq.push_back(std::stoi(tmp));
                    tmp.clear();
                }
            }
        }

        bool chkError = true;
        bool reversed = true;

        for(int i = 0; i< p.length(); i++)
        {
            if(p[i] == 'R')
                reversed = !reversed;
            else
            {
                if(dq.empty())
                {
                    chkError = false;
                    std::cout << "error\n";
                    break;
                }
                else
                {
                    if(reversed)
                        dq.pop_front();
                    else
                        dq.pop_back();
                }
            }
        }

        if(chkError)
        {
            if(reversed)
            {
                std::cout << "[";
                while(!dq.empty())
                {
                    std::cout << dq.front();
                    dq.pop_front();
                    if(!dq.empty())
                        std::cout << ",";
                }
                std::cout << "]\n";
            }
            else
            {
                std::cout << "[";
                while(!dq.empty())
                {
                    std::cout << dq.back();
                    dq.pop_back();
                    if(!dq.empty())
                        std::cout << ",";
                }
                std::cout << "]\n";
            }
        }
    }
    return 0;
}