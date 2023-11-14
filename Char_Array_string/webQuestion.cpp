/*
https://leetcode.com/problems/reverse-string/submissions/1098540249/
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0 , e = s.size()-1;

        while(st<e){
            swap(s[st++] , s[e--]);
        }

    }
};
