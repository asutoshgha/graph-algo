class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> q;
        int i=0;
        vector<int> ans;
      //find max in first k elements and store in deque
        for(;i<k;i++){
            
            while((!q.empty()) && nums[i]>=nums[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        
        for(;i<n;i++){
            ans.push_back(nums[q.front()]);
            //remove elements from the maxwindow which are'nt part of that window
            while((!q.empty()) && q.front()<=i-k){
                q.pop_front();
            }
            
            while((!q.empty()) &&  nums[i]>=nums[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        if(!(q.empty()))
        ans.push_back(nums[q.front()]);
        return ans;
    }
};
