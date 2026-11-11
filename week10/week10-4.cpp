//week10-4.cpp學習計畫Math第7題
//LeetCode 43. Multiply Strings很大數字乘法 用字串
class Solution {
public:
    vector<int>myStrVec(string num){//自己發明函式 字串便陣列
    vector<int> ans;
    for(int i=num.length()-1;i>=0;i--){//到過來的迴圈
        ans.push_back(num[i]-'0');//字母變數字
    }
    return ans;
}
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0";
        vector<int>a=myStrVec(num1);
        vector<int>b=myStrVec(num2);//把字串(倒過來的)陣列
        vector<int> ans(a.size()+b.size());

        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                ans[i+j]+=a[i] * b[j];
                ans[i+j+1]+=ans[i+j]/10;
                ans[i+j]=ans[i+j]%10;
            }
        }

        if(ans[ans.size()-1]==0)ans.pop_back();//把最高位0刪掉

        string ans2="";//把答案變回字串
        for(int i=ans.size()-1;i>=0;i--){
            ans2+='0'+ans[i];
        }
        return ans2;
    }
};
