class Solution {
public:
    void getAllComb(vector<int>&arr , int idx  , int tar , vector<vector<int>>&ans , vector<int>&combin){
        if(tar==0){
             ans.push_back(combin);
              return ;
        }
        if(idx== arr.size() || tar< 0 ){
            return ;
        }

     combin.push_back(arr[idx]);
     getAllComb(arr , idx , tar-arr[idx] , ans , combin);
     combin.pop_back();
     getAllComb(arr , idx+1  , tar , ans , combin );
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans ;
        vector<int>combin ;
        getAllComb(arr , 0 , target , ans , combin );
        return ans ; 
    }
};