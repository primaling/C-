#include<iostream>
#include<vector>//�ɱ����� 
using namespace std;
int main(){
	vector <int> v;//�����Сv.size����Ϊ0 
	v.resize(10);//���������С 
	for(int i=0;i<v.size();i++){
		v[i] = i;
	} 
	v.push_back(11);//ĩβ�������ݣ��Լ����������С 
	for(auto p = v.begin(); p!=v.end(); p++){
		cout<< *p<<" ";
	}
		//�������������ұ߽����� �����ò��� 
	
	return 0;
	//vector <int> v(10,0) ʮ����ȫ��0|||||��ʼ��Ҳ��0 
}
