#include <iostream>
//class16����������������������㣩
/*
��+��-��*��/
ȡ��%
ǰ�õ���++
���õ���++
ǰ�õݼ�--
���õݼ�--
*/

using namespace std;
int main1()
{
	int a1 = 1;
	int a2 = 2;
	cout << a1 + a2 << endl;
	cout << a1 - a2 << endl;
	cout << a1 * a2 << endl;
	cout << a1 / a2 << endl;//��Ϊ��int ����cout���� ��С������ȥ��
	cout << a1 % a2 << endl;
	++a1;
	cout << "a2=" << a1 << endl;
	a2++;
	cout<<"a2="<<a2<<endl;
	//���� 
	//ǰ�õ����ȼ�һ������
	int b1 = ++a2 * 10;
	cout <<"b1="<< b1 << endl;
	cout << "a2=" << a2 << endl;
	//���õ����������ټ�һ
	int b2 = a1++ * 10;
	cout << "a1=" << a1 << endl;
	cout << "b2=" << b2 << endl;

	return 0;

}




//class19��ֵ�����(��������ֵ)
/*
 a=2
 a+=2
 a-=2
 a*=2
 a/=2
 a%=2
 (��pythonͬ)
 */
int main2()
{
int a = 3;
a %= 2;
cout << a  << endl;
return 0;
}




//class20(�Ƚ������)
/*
==
!=
<
>
<=
>=
*/
int main3()
{
	int a = 1;
	int b = 2;
	cout << (a == b) << endl;
	return 0;
	//"(��"�ı����ȼ�  ���boolֵ
}




//class 21 �߼������(���ݱ��ʽ��ֵ ������ֵ���ֵ)
//!�� if a is false, then !a is true
//&&�� a&&b if a and b are ture, then a&&b is true
//||�� a||b  if one of a and b is true, then a||b is true
int main()
{
	int c = 0;int d= 2;

	cout << !!c << endl;
	cout << (c || d) << endl;
}



