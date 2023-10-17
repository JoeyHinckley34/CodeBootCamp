#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0){
            return 0;
        }
        int index = 0;
        for(long unsigned int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
               nums[index] = nums[i];
               index++;
            }
            
       }
       return index;
    }
};

int main(){
    Solution a;
    vector<int> v = {0,1,2,3,2,2,3};
    int index = a.removeElement(v,3);
    cout << index << endl;
    for(int i = 0; i < index; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

