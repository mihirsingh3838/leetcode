class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x= nums.size();

        int low=0, mid=0;
        int high= x-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low], nums[mid]);
                low++, mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};