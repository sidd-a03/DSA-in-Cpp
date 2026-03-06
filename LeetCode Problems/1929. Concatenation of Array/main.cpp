#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,4,1,2};
    vector<int> result(nums);

    for(int val: nums) {
        result.push_back(val);
    }

    for(int val: result)
        cout << val << endl;
    
    return 0;
}