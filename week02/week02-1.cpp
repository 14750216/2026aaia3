///week02-1.cpp 練習C++ string 字串
///File-Save As 存檔成.cpp 檔
#include <iostream> ///上週交的
#include <string> ///今天新教的
///以前大一C語言是用char name[100];宣告麻煩
///scnaf("%s",name); //讀資料也很麻煩,一堆

int main()
{
    std::cout<<"請輸入你的名字:";
    std::string name; ///使用標準的[字串]
    std::cin >>name;
    std::cout << name << "你好,你會用字串了";
    }
