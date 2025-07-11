#include<iostream>
#include<bitset>
using namespace std;
int main(){
	bitset <5> b(19);  //b为10011
	bitset <5> c();  //5表示5个二进制位，初始化为0
	/*
	bitset <5> d("11");  最低的2为是11，00011
	等效于
	string m = "00011"
	bitset <5> d(m,3,4); 
	*/
	cout<<b<<endl;
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<endl;
	} 
	cout<<endl;
	
	cout<<"是否有1 "<<b.any()<<endl;
	cout<<"是否不存在1 " <<b.none()<<endl;
	cout<<"1的个数 "<<b.count()<<endl;
	cout<<"b中元素个数 " <<b.size()<<endl;
	cout<<"下标为i的元素是不是1 " <<b.test(0)<<endl;
	
	b.flip(1);//第1位取反 ,b.flip()是全部取反 
	
	b.set(1); //第1位设置为1
	
	b.reset(1); //第1位归零，b.reset()是全部归零
	
	/*unsigned long a = b.to_ulong();
		将二进制转换为整数	
	cout<<a<<endl; 
	*/
	return 0;
}
