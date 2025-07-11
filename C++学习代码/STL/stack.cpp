#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;//栈的长度是s.size()，不可以用迭代器 
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top();
}
