#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(unsigned long int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }
};


int main(){
    Solution a;
    vector<int> v = {7,1,5,3,6,4};
    int m = a.maxProfit(v);
    cout << m << endl;
    return 0;
}
