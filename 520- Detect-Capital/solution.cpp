class Solution {
public:

    bool all_small(string test){
        for(int i=0;i<test.length();i++){
            if(!(test[i]>='a' && test[i]<='z'))
            return false;
        }
        return true;
     }

      bool all_capital(string test){
        for(int i=0;i<test.length();i++){
            if(!(test[i]>='A' && test[i]<='Z'))
            return false;
        }
        return true;
     }

     bool first_capital(string test){
         for(int i=1;i<test.length();i++){
            if(!(test[0]>='A' && test[0]<='Z') || !(test[i]>='a' && test[i]<='z') )
            return false;
        }
        return true;
     }

    bool detectCapitalUse(string word) {
    bool ans = all_small(word) || all_capital(word) || first_capital(word);
    return ans;
      }

};
