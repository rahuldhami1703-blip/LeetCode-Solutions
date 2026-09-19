class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        int i = 1 , index = 0 ;
        vector<int>lps( n,index );

        while( i<n ){
            if( s[i]==s[index] ){
                index += 1 ;
                lps[i] = index ;
                i += 1 ;
            }else{
                if( index != 0 ){
                    index = lps[index-1] ;
                }else{
                    lps[i] = 0 ;
                    i += 1 ;
                }
            }
        }
        string ans = "" ;
        ans = s.substr( 0,index ) ;
        return ans ;
    }
};