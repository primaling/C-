#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue <int> s;//���еĳ�����s.size()���������õ����� 
	for(int i=1;i<=10;i++){
		s.push(i);
	}
	cout<<s.front()<<endl;
	cout<<s.back()<<endl;
	
	s.pop();
	cout<<s.front();
}
