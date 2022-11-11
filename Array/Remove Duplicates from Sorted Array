class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int ind=0;
       while(l<nums.size()-1){
            if(nums[l]==nums[l+1]){
               l++;
            }
            else{
                nums[ind]=nums[l];
                ind++;
                l++;
            }
        }
        nums[ind]=nums[l];
                ind++;
        return ind;
    }
};
