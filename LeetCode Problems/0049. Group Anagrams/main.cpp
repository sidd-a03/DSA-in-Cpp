#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<string> strs = {"act","pots","tops","cat","stop","hat"};

    vector<vector<string>> res;
    unordered_map<string, vector<string>> mpp;

    for(string str: strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        mpp[sortedStr].push_back(str);
    }

    for(auto it: mpp) 
        res.push_back(it.second);

    return 0;
}