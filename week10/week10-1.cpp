//week10-1.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int N){//只能被1跟本身整除
	for(int i=2;i<N;i++){
		if(N%i==0) return 0;
		}
		return 1;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int ans=0;
	//把a...b的每一個數字,都試一次
	for(int i=a;i<=b;i++){
		if(isPrime(i)) ans++;//判斷質數
	}
	cout<<ans<<"\n";
}
