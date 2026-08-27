class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size() ;

        sort (intervals.begin() , intervals.end() );

        vector<vector<int>>result ;
        result.push_back(intervals[0]);
        
        for(int i = 1 ; i< n ; i++ ){
            vector<int>&lastIntervals = result.back();

            if (lastIntervals[1]>=intervals[i][0]){
                lastIntervals[1] = max (lastIntervals[1] , intervals[i][1]) ;
            } else{
                result.push_back(intervals[i]) ;
            }
        }
        return result ;
   }
};  
