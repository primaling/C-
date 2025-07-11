#include<iostream>
#include<vector>//可变数组 
using namespace std;
int main(){
	vector <int> v;//数组大小v.size（）为0 
	v.resize(10);//分配数组大小 
	for(int i=0;i<v.size();i++){
		v[i] = i;
	} 
	v.push_back(11);//末尾加新数据，自己扩大数组大小 
	for(auto p = v.begin(); p!=v.end(); p++){
		cout<< *p<<" ";
	}
		//迭代器，不用找边界条件 数组用不上 
	
	return 0;
	//vector <int> v(10,0) 十个数全是0|||||初始化也是0 
}
