//week01-2.cpp
#include <iostream>///c++ 的輸入輸出功能強大
int main()
{
    int N;
    std::cin >> N;///c++輸入資料 標準::輸入 送到右邊 N
    int b = N, ans = 0;
    while (N>0){
    	ans = ans*10 + N%10;
    	N =N / 10;
    }
    ///c++輸入資料 將右邊的整數 依序送到左邊送出
    ///錯std:: cout << b << ans << b+ans; //WRONG-ANSWER
    ///上面漏了"+" 漏了"=" 又漏了 跳行
    std::cout << b << "+" << ans << "=" <<b+ans << std::endl;///正確
    std::cout << b << "+" << ans << "=" <<b+ans << "\n";///也正確
    }
