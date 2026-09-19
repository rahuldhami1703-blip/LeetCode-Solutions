class Solution {
public:
    string minWindow(string s, string t) {
        int target[256] = {0};
        for( char ch : t ){
            target[ch]++ ;
        }
        int n = s.length();
        int required= t.length();
        int i=0 , j=0 , count=0 , start=0 ;
        int minLength = INT_MAX ;
        
        while( j<n ){
            if( target[s[j]] > 0 ){
                count++ ;
            }
            target[s[j]]-- ;

            while( count==required ){
                if( minLength>j-i+1 ){
                    minLength = j-i+1 ;
                    start = i ;
                }
                target[s[i]]++ ;
                if( target[s[i]]>0 ){
                    count-- ;
                }
                i++;
            }
            j++ ;
        }
        return ( minLength==INT_MAX ) ? "" : s.substr(start,minLength );
    }
};