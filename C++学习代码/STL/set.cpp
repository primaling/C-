#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;//���Զ���������������� 
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(auto p=s.begin();p!=s.end();p++){
		cout<< *p<<" ";
	}
	cout<<endl;;
	
	cout<<(s.find(2)!=s.end())<<endl;//����ֵ1,find�Ǵ�1 2 3��ʼ�����ж� 
	cout<<(s.find(4)!=s.end())<<endl;//1����Ϊfind��ָ�룬4�պ�ָ��3�ĺ��� 
	
	s.erase(1);//ɾ��1
	cout<<(s.find(1)!=s.end())<<endl;
} 
