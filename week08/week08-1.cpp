//week08-1.cpp 學習計畫Matrix 第1題 最有錢的
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;//最有錢的人 有多少錢(先設成a)
        for(vector<int> a:accounts){//大資料結構(距陣) 取出鐘資料結構
            int now=0;//迴圈前面now是0
            for(int num:a){//中資料結構(陣列)取 出小資料結(int)
                now+=num;//迴圈裡面慢慢加
            }
            ans=max(ans,now);//迴圈後面拿出來用
            //以前是用if(now>ans)ans=now;
        }
        return ans;
    }
};
