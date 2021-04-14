class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int max=0;
        for( auto i : nums){
            if(i == 1){
                cnt++;
                if(cnt>max){
                    max=cnt;
                }
            }
            else{
                cnt=0;
            }
        }
        return max;
    }
};
