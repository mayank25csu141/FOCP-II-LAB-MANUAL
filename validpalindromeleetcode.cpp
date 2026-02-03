class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]>='A'&& s[i]<='Z'){
                str+=s[i]+32;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                str+=s[i];
            }
            else if(s[i]>='0'&& s[i]<='9'){
                str += s[i];
            }
        }
        int a;
        int b;
        for(a=0,b=str.length()-1;a<=b;a++,b--){
            if(str[a]!=str[b]){
                return false;
            }
        }
        return true;
    }
};