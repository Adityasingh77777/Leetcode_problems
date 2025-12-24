class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=0,x=0;
        for(int i=0;i<nums.size();i++){
            if(x==0) curr=nums[i];
            if(nums[i]==curr){
                x++;
            }
            else x--;
            cout << x << " ";
        }

        return curr;
    }
};