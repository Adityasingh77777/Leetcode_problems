class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // optimal sol
        unordered_set<int> st(nums.begin(),nums.end());

        int ans=0,n=nums.size();

        for(auto num:st){
            if(!st.count(num-1)){
                int curr=num;
                int len=1;

                while(st.count(curr+1)){
                    len++;
                    curr++;
                }

                ans=max(ans,len);
            }
        }
        return ans;
    }
};3