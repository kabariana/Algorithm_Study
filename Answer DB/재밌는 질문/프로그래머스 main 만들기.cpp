#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int x = 0; x < numbers.size(); x++) {
        int a = 0;
        for (int y = 0; y < numbers.size(); y++) {
            if (x == y)    continue;
            a = numbers[x] + numbers[y];
            if (find(answer.begin(), answer.end(), a) == answer.end())
                answer.push_back(a);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    string str;
    cin >> str;

    // 앞 뒤 [ ] 제거 
    str.erase(find(str.begin(), str.end(), '['));
    str.erase(find(str.begin(), str.end(), ']'));

    vector<int> v, ans;
    istringstream stream(str);
    string stringbuffer;
    while (getline(stream, stringbuffer, ','))
        v.push_back(stoi(stringbuffer));

    ans = solution(v);

    cout << "[" << ans[0];
    for (int i = 1; i < ans.size(); i++)
        cout << "," << ans[i];
    cout << "]\n";
    return 0;
}