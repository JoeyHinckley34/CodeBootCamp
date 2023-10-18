#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

int main(){
    Solution a;
    vector<int> v = {1,1,1,1,1,2,2,2};
    int major = a.majorityElement(v);
    cout << major << endl;
    return 0;
}