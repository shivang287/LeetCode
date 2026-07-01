class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercnt = 0;
        for(int i=0; i<word.length(); i++){
            if(isupper(word[i])){
                uppercnt++;
            }
        }
        return uppercnt == word.length() || uppercnt == 0 || (uppercnt == 1 && isupper(word[0]));
    }
};