
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/



class Solution {
public:
    string removeDuplicates(string s) {
         string unique="";
        int index=0;
        while(index < s.length()){
          if(unique.length()>0 && unique[unique.length()-1]==s[index]){
            unique.pop_back();
          }
          else{
            unique.push_back(s[index]);
          }
          index++;
        }
        return unique;
    }
        
    
};