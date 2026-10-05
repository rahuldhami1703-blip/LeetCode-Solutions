class Solution {
public:
        bool possible(vector<int>& quantities, int n, int maxProducts) {
        int store = 0 ;
        for(int i=0 ; i<quantities.size() ; i++){
            store+= (quantities[i]+maxProducts-1)/maxProducts ;

        if(store>n){
            return false ;
        } 
        }
         return true ;
        }

    int minimizedMaximum(int n, vector<int>& quantities) {
       int start =1 ;
       int end = 0 ;

       for(int i = 0 ; i< quantities.size() ; i++ ){
        end =max (end , quantities[i]);
       }
       int answer = end ;

       while(start <= end ){
        int mid = start+(end-start)/2 ;

        if(possible(quantities , n , mid )){
            answer = mid ;
            end = mid-1 ;
        }else{
            start = mid+1 ;
        }
       }
      return answer ;
    }
};