#include<iostream>
using namespace std;
int main(){
	string s = "Hello world";
	string sub = s.substr(1,2);//起始位置，步长 
	cout<<sub<<endl;
	return 0; 
} 
