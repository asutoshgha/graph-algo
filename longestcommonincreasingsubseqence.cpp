class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> seq;
       seq.push_back(a[0]);
       
       for(int i=1;i<n;i++){
           if(seq.back()<a[i]){
               seq.push_back(a[i]);
           }
           else{
           int ind=lower_bound(seq.begin(),seq.end(),a[i])-seq.begin();
           seq[ind]=a[i];
           }
           
       }
       return seq.size();
    }
};
//O(nlogn) solution
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis(nums.size(),1);
        int n=nums.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] && lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;
            }
        }
        return *max_element(lis.begin(), lis.end());
    }
};
//O(n^2) approach
