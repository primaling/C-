#include<iostream>
#include<map>
using namespace std;
int main(){
	map <string,int> m ; // 键值对，获取长度是m.size(); 
	m["hello"]	= 2;    // 键值对，会自动把所以键值按照键从小到大排序 
	m["world"] = 3;
	cout<<m["hello"]<<endl;
} 
