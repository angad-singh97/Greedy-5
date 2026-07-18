/*
TC - 
SC - 
Issues Faced - 
Solved on LeetCode - 

*/


class Solution {
    public:
        bool isMatch(string s, string p) {
    
            int n = s.size();
    
            int m = p.size();
    
            int j = 0; //this will move through string s
    
            for (int i = 0; i < m ; i++) {
                //iterate over the pattern, and keep cutting through the string
    
                if (p[i] == '*') {
    
                } else if (p[i] == '?') {
                    if (j >= n) { //pattern still remaining but ran out of string to match to (? cannot match with empty string)
                        return false;
                    } else {
                        j += 1; //? always matches a single char
                    }
    
                } else {
                    if (j >= n) { //pattern still remaining but ran out of string to match to
                        return false;
                    } else if (p[i] != s[j]) { //string still remaining but does not match
                        return false;
                    } else { //advance ahead in the string
                        j += 1;
                    }
                }
            }
            
        }
    };
