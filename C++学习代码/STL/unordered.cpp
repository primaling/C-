#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
	unordered_map <string,int> m ; //�����Զ����� 
	unordered_set <int> s;
	m["hello"]	= 2;    
	m["world"] = 3;
	cout<<m["hello"]<<endl;
} 
