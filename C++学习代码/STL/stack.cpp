#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;//ջ�ĳ�����s.size()���������õ����� 
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top();
}
