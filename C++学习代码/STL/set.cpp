#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;//会自动给里面的数字排序 
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(auto p=s.begin();p!=s.end();p++){
		cout<< *p<<" ";
	}
	cout<<endl;;
	
	cout<<(s.find(2)!=s.end())<<endl;//布尔值1,find是从1 2 3开始遍历判断 
	cout<<(s.find(4)!=s.end())<<endl;//1，因为find是指针，4刚好指向3的后面 
	
	s.erase(1);//删除1
	cout<<(s.find(1)!=s.end())<<endl;
} 
