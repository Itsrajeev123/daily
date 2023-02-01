class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n=candies.size();
       int max=INT_MIN;
       vector<bool> result;
       for(int i=0;i<n;i++){
           if(max<=candies[i]){
               max=candies[i];
           }
       }
       for(int i=0;i<n;i++){
           candies[i]=candies[i]+extraCandies;
       }
       for(int i=0;i<n;i++){
           if(max<=candies[i]){
               result.push_back(true);
           }
           else{
               result.push_back(false);
           }
       }
       return result;
    }
};
