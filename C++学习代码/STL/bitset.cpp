#include<iostream>
#include<bitset>
using namespace std;
int main(){
	bitset <5> b(19);  //bΪ10011
	bitset <5> c();  //5��ʾ5��������λ����ʼ��Ϊ0
	/*
	bitset <5> d("11");  ��͵�2Ϊ��11��00011
	��Ч��
	string m = "00011"
	bitset <5> d(m,3,4); 
	*/
	cout<<b<<endl;
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<endl;
	} 
	cout<<endl;
	
	cout<<"�Ƿ���1 "<<b.any()<<endl;
	cout<<"�Ƿ񲻴���1 " <<b.none()<<endl;
	cout<<"1�ĸ��� "<<b.count()<<endl;
	cout<<"b��Ԫ�ظ��� " <<b.size()<<endl;
	cout<<"�±�Ϊi��Ԫ���ǲ���1 " <<b.test(0)<<endl;
	
	b.flip(1);//��1λȡ�� ,b.flip()��ȫ��ȡ�� 
	
	b.set(1); //��1λ����Ϊ1
	
	b.reset(1); //��1λ���㣬b.reset()��ȫ������
	
	/*unsigned long a = b.to_ulong();
		��������ת��Ϊ����	
	cout<<a<<endl; 
	*/
	return 0;
}
