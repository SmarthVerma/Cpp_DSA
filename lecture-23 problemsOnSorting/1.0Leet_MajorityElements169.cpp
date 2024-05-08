#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n/2;

            int count=0;
            int maxcount=0;
            int majEle=nums[0];

            for(int i=1; i<n; i++){
                if(nums[i]==nums[i-1]) count++;
                else count =0;

                if(count>max){
                    max=count;
                    majEle=nums[i];
                }
            }

            return majEle;
    }
};
}