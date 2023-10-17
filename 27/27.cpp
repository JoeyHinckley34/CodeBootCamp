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

void printVector( vector<int> v, int s){
    for(int i = 0; i < s; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    Solution a;
    vector<int> v = {0,9,1,9,2,3,9,9,4};
    int index = a.removeElement(v,9);
    cout << index << endl;
    printVector(v,index);
    return 0;
}

