#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<string> strs = {"bat","bag","bank","band"};
    int n = strs[0].size();
    string res = "";

    for(int i = 0; i < n; i++) {
        for(string s: strs) {
            if(i == s.size() || s[i] != strs[0][i]){
                cout << res << endl;
                return 0;
            }
        }
        res += strs[0][i];
    }

    cout << res << endl;

    return 0;
}