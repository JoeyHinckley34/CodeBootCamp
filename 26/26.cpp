#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(long unsigned int i = 1; i < nums.size(); i++){
            if(nums[index] != nums[i]){
                index++;
                nums[index] = nums[i];
            }
        }
        return index+1;
    }
};

void printVector( vector<int> v, int s){
    for(int i = 0; i < s; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    Solution a;
    vector<int> nums = {1,1,2,3,4,4};
    int index = a.removeDuplicates(nums);
    printVector(nums,index);
}
