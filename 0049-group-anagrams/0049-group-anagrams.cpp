class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result ;
        int n = strs.size();
        unordered_map<string,vector<string>>m ;
        for( int i=0 ; i<n ; i++){
            string str = strs[i];
            sort( str.begin() , str.end() ) ;
            m[str].push_back(strs[i]);
        }
        for(auto x:m){
            result.push_back(x.second);
        }
        return result ;
    }
};