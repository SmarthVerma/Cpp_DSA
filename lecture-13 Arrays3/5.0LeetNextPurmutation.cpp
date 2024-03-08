class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        //1)Finding pivot index
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
            index=i;
            break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        //2)sorting after index to end
        reverse(nums.begin()+index+1, nums.end());
        
        //3) just greater than idex
        int j;
        for(int i=index+1; i<=n-1; i++){
            if(nums[index]<nums[i]){
                j=i;
                break;
            }
        }
        //4) swapping idx with j
        int temp=nums[index];
        nums[index]=nums[j];
        nums[j]=temp;

    }
};