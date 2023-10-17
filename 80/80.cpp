#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool two = false;
        int index = 0;
        for(long unsigned int i = 1; i < nums.size(); i++){
            if(nums[index] == nums[i] && !two){
                index++;
                nums[index] = nums[i];
                two = true;
            }else if(nums[index] != nums[i]){
                index++;
                nums[index] = nums[i];
                two = false;
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
    vector<int> v = {0,0,1,1,1,2,2,2};
    int index = a.removeDuplicates(v);
    cout << index << endl;
    printVector(v,index);
    return 0;
}