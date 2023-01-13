#include <iostream>
//class16算术运算符（处理四则运算）
/*
加+减-乘*除/
取余%
前置递增++
后置递增++
前置递减--
后置递减--
*/

using namespace std;
int main1()
{
	int a1 = 1;
	int a2 = 2;
	cout << a1 + a2 << endl;
	cout << a1 - a2 << endl;
	cout << a1 * a2 << endl;
	cout << a1 / a2 << endl;//因为是int 所以cout整数 将小数部分去除
	cout << a1 % a2 << endl;
	++a1;
	cout << "a2=" << a1 << endl;
	a2++;
	cout<<"a2="<<a2<<endl;
	//区别 
	//前置递增先加一再运算
	int b1 = ++a2 * 10;
	cout <<"b1="<< b1 << endl;
	cout << "a2=" << a2 << endl;
	//后置递增先运算再加一
	int b2 = a1++ * 10;
	cout << "a1=" << a1 << endl;
	cout << "b2=" << b2 << endl;

	return 0;

}




//class19赋值运算符(给变量赋值)
/*
 a=2
 a+=2
 a-=2
 a*=2
 a/=2
 a%=2
 (与python同)
 */
int main2()
{
int a = 3;
a %= 2;
cout << a  << endl;
return 0;
}




//class20(比较运算符)
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
	//"(）"改变优先级  输出bool值
}




//class 21 逻辑运算符(根据表达式的值 返回真值或假值)
//!非 if a is false, then !a is true
//&&与 a&&b if a and b are ture, then a&&b is true
//||非 a||b  if one of a and b is true, then a||b is true
int main()
{
	int c = 0;int d= 2;

	cout << !!c << endl;
	cout << (c || d) << endl;
}



