class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; int high = n-1; int temp = 0;
        while(temp<=high){
            if(nums[temp]==0){
                swap(nums[temp],nums[low]);
                low++;
                temp++;
            }else if(nums[temp]==1){
                temp++;
            }else{
                swap(nums[temp],nums[high]);
                high--;
            }
        }
    }
};
