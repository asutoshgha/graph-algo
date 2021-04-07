class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l,k;
        int n=nums.size();
        for(l=n-2;l>=0;l--){
            if(nums[l]<nums[l+1])
                break;
        }
        if(l<0){
            sort(nums.begin(),nums.end());
            return;
        }
        else{
        for(k=n-1;k>l;k--){
            if(nums[k]>nums[l])
                break;
        }
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+l+1,nums.end());
    
    }
};

//leetcode link-https://leetcode.com/problems/next-permutation/submissions/
