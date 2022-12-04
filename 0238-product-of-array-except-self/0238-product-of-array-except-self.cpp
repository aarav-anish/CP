class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prdt = 1, cnt = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                prdt *= nums[i];
            }
            else {
                cnt++;
            }
        }
        
        for(int i=0; i<nums.size(); i++) {
            if(cnt > 1)
                nums[i] = 0;
            else if(cnt==1) {
                if(nums[i] == 0)
                    nums[i] = prdt;
                else
                    nums[i] = 0;
            }
            else {
                nums[i] = prdt/nums[i];
            }
        }
        return nums;
    }
};