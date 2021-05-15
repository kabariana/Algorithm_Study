#include <bits/stdc++.h>
using namespace std;

int N, res;
string str, tmp;
char init = '+';
bool flag;

void func()
{
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            tmp += str[i];
        else{
            if(init == '+')
                res += stoi(tmp);
            else if(init == '-')
                res -= stoi(tmp);
            else if(init == '*')
                res *= stoi(tmp);
            else if(init == '/')
                res /= stoi(tmp);
            tmp = "0";
            if(str[i] == 'P')
                init = '+';
            else if(str[i] == 'S')
                init = '-';
            else if(str[i] == 'M')
                init = '*';
            else if(str[i] == 'U')
                init = '/';
            else
            {
                flag = true;
                init = '+';
                cout << res << ' ';
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> N >> str;
    func();
    if(!flag)
        cout << "NO OUTPUT\n";
    return 0;
}