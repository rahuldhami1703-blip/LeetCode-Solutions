class Solution {
public:
    string longestPrefix(string s) {
      int n = s.size();
      int i=1 , length = 0 ;
      vector<int>lps(n,0) ;

      while( i<n ){
        if( s[i]==s[length] ){
            length+=1;
            lps[i]=length ;
            i+=1;
        }else{
            if( length!=0 ){
                length= lps[length-1];
            }else{
                lps[i]=0 ;
                i+=1 ;
            }
        }
      }
      string ans = "";  
      ans = s.substr( 0,length ) ;
      return ans ;
    }
};