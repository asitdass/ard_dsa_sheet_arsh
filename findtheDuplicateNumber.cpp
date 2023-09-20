class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1;
        map<int,int>m;
        for(auto i=0;i<n;i++){
            ++m[nums[i]];
        }
        for(auto i : m){
            if(i.second>1){
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
};
