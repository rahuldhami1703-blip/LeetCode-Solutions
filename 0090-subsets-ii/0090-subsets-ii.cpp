class Solution {
public:
    void getAllSubset (vector<int>&nums , vector<int>&ans , int i , vector<vector<int>>&allSubset ){
        if( i==nums.size() ){
            allSubset.push_back(ans);
            return ;
        }
        ans.push_back(nums[i]);
        getAllSubset(nums ,ans , i+1 , allSubset );
        ans.pop_back();

        int idx= i+1 ;
        while(idx < nums.size() && nums[idx]==nums[i]){
            idx++ ;
        }
         getAllSubset (nums, ans , idx ,allSubset );
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin() , nums.end() ) ;

       vector<int>ans ;
       vector<vector<int>>allSubset ;
       getAllSubset(nums , ans ,0 , allSubset );

       return allSubset ;
    }
};