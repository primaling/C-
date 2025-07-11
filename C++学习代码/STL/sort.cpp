#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int x,int y){
	return x>y;  //如果x>y,则保持xy ，如果x<y，则yx换位置 
}

int main(){
	vector <int> v;
	for(int i=1;i<=10;i++){
		v.push_back(i);
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0;i<=9;i++){
		cout<<v[i]<<" "; 
	}
	cout<<endl; 
} 
