#include<iostream>
#include<map>
using namespace std;
int main(){
	map <string,int> m ; // ��ֵ�ԣ���ȡ������m.size(); 
	m["hello"]	= 2;    // ��ֵ�ԣ����Զ������Լ�ֵ���ռ���С�������� 
	m["world"] = 3;
	cout<<m["hello"]<<endl;
} 
