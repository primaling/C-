#include<iostream>
using namespace std;
int main(){
	string s = "Hello";
	string s1 = " world";
	string s2 =  s + s1;
	getline(cin,s);//如果是cin>>s;空格结束 
	cout<<s<<endl;
} 
