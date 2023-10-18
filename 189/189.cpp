#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() < 2){
            return;
        }
        if(k > nums.size()){
            k = k%nums.size();
        }
        vector<int> newNums(nums.size(),0);
        for(unsigned long int i = 0; i < nums.size(); i++ ){
            if ((i + k) >= nums.size()){
                newNums[i+k - nums.size()] = nums[i];
            }else{
                newNums[i+k] = nums[i];
            }
        }
        for(unsigned long int i = 0; i < newNums.size(); i++ ){
            nums[i] = newNums[i];
        }

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
    vector<int> v = {1,2,3,4,5,6,7};
    a.rotate(v,3);
    printVector(v,v.size());
    return 0;
}
