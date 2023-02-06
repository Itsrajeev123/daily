class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a=(n*(n+1))/2; //whole array sum[0,n] tak k liye ...
        int b=0;         
        for(int i=0;i<n;i++){
            b+=nums[i];
        }
        return a-b;
        
    }
};
