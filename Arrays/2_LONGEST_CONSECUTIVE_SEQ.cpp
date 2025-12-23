class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // brute force solution 
        sort(nums.begin(),nums.end());
        int c=1,n=nums.size(),maxi=1;
        if(n<=1) return n;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                c++;
            }
            else if(nums[i]-nums[i-1]==0){
                continue;
            }
            else{
                c=1;
            }
            
            maxi=max(maxi,c);
        }
        return maxi;
    }
};