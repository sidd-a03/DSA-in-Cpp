#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 3};
    int n = nums.size();
    unordered_map<int,int> result;

    for(int val: nums) {
        result[val]++;
        if(result[val] > 1){
            cout << true;
            return 0;
        }
    } 

    cout << false;

    return 0;
}