/*
	����һ����ģΪO(n)�����⣬�������äĿö�ٵİ취��Ч��ΪO(n)
	�����ö��ַ��������Ч�ʿ������O(log2(n))
	
	�����㷨�������˶��ַ���������ֲ��ң�������Ƽ������������򣬺ϲ��������Ŷ��������߶�����
	
	���������ǰ��������еĶ��ڴ�����ֵx �����е��м�λ��ʼ�Ƚ�
	1)����ǰ�м�λ��ֵ����x����ҳɹ�
	2)��xС�ڵ�ǰ�м�λ��ֵ���������е���������(���е�ǰ���)�в���
	3)��x���ڵ�ǰ�м�λ��ֵ��������������(���еĺ���)�в���
	������ʧ�ܣ���ǰ��������ָ����ָ��Ԫ���������д���x����С�� 
*/

/*
	��һ���������ϵĿ�Ƭ�������������Զ
	n�ſ�Ƭ��������������ܳ�����1/2+1/3+1/4+...+1/(n+1)��Ƭ����
	
	���룺��һ�����������������
	���һ����0.00��ʾ�������ÿ����������һ��
	��һ����λ����������c��Сֵ0.01 ���ֵ5.20
	
	�������ÿ����������c,���Ҫ�����Ƭ����c������Ҫ�ÿ�Ƭ����Ŀ 
*/ 

#include<iostream>
using namespace std;
const int maxn = 300;
const double delta = 1e-8;
int zero(double x)
{
	if(x<-delta)
		return -1;
	return x > delta;
}

int main(void)
{
	double len[maxn];
	int total;
	len[0] = 0.0;
	for(total=1;zero(len[total-1]-5.20)<0;total++)
	{
		len[total] = len[total-1]+1.0/double(total+1);
	}
	double x;
	cin>>x;
	while(zero(x))
	{
		int l,r;
		l = 0;
		r = total;
		while(l+1<r){
			int mid = (l+r)/2;
			if(zero(len[mid]-x)<0)
			{
				l = mid;
			}
			else{
				r = mid;
			}
		}
		cout<<r<<" card(s)"<<endl;
		cin>>x;
	}
	return 0;
 } 