//week05-2.cpp 學習計畫 Built-in Function
//LeetCode 709. To Lower Case 大寫變小寫
//LeetCode很貼心 幫你把#unclude <cctype>偷偷寫好了
class Solution {
public:
    string toLowerCase(string s) {
        //s[0] = 'h';//不用寫這行,只是例子s[i]可改
        for(int i=0;i<s.length();i++){
            //以前if (a[i]>='A' &&a[i]<='Z') s[i] = s[i] -'A'+'a';
            //以前if(isupper(s[i]))s[i] = s[i]-'A'+'a';
            s[i] = tolower(s[i]); //前面要記得#include <cctype>
        }
        return s;
    }
};
