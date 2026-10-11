class Solution {
public:
    bool isPalindrome(string s ){
        string s2 = s ;
        reverse(s2.begin(),s2.end() );
        return s==s2 ;
    }

    void getAllParts(string s , vector<vector<string>>&partitions , vector<string>&ans){
        if(s.empty()){
            partitions.push_back(ans) ;
            return ;
        }

     for(int i=0 ; i<s.size() ; i++ ){
        string part = s.substr(0,i+1);
        if(isPalindrome(part)){
        ans.push_back(part) ;
        getAllParts(s.substr(i+1) , partitions , ans );
        ans.pop_back();
        }
     }
    }
    vector<vector<string>> partition(string s) {
    vector<vector<string>>partitions ;
    vector<string>ans ;
   

    getAllParts(s,partitions , ans );
    return partitions ;
    }
};