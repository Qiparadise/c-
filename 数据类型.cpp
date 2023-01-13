#include<iostream>
using namespace std;
int main2()
{
	int a = 10;
	cout << "a = " <<a<< endl;
	system("pause");
	return 0;
}



//CLASS 5
/*常量
1，define宏常量
2.const修饰变量
*/
#define Day 7 //DAY为常量 不可修改
int main3() {
	cout << "一周有：" << Day << "天";

	const int month = 12;
	cout << "一年由；" << month << "个月份" << endl;
	return 0;
}




//class 6
/*关键字（标识符）
已被征用的词
如int*/



//class 7
/*标识符命名规则：1.不能是关键字 如int int=10 不可以
2.由字母 数字 下划线组成 int _123a=10
3.第一个字符不能是数字
*/



//class8
/*数据类型(给变量分配合适的内存空间）
* 1.short短整型 
* 2.int整形 
* 3.long长整型
* 4.long long长长整型 
*/
#include<iostream>
using namespace std;
int main4()
{
	short num1 = 10;
	int num2 = 12;
	long num3 = 13;
	long long num4 = 14;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	return 0;
	
}





//class 9 sizeof关键字：统计数据类型站的内存大小
#include<iostream>
using namespace std;
int main5()
{
	short num1 = 10;
	int num2 = 12;
	long num3 = 13;
	long long num4 = 14;
	cout << "占用" << sizeof(num1) << endl;
	cout << "占用" << sizeof(long long) << endl;
	return 0;
	
	//short<int<=long<=long long
}




//class 10实型（浮点型）
/*1.单精度float（七位有效数字）
2.双精度double（15~16位有效数字）
默认情况下都输出6位有效数字
*/
#include<iostream>
using namespace std;
int main6()
{
	float f1 = 3.14f;
	float f2 = 3.12;
	//把鼠标放在3，14和3，12上 会发现带f的显示的是float 而不带的显示double （计算机默认double）
	cout << "f1=" << f1 << endl;
	double d1 = 3.3;
	cout << "d1 =" << d1 << endl;
	//科学计数法
	float f3 = 3e2;//3*10^2
	cout << "f3=" << f3 << endl;
	float f4 = 3e-2;//3*0.1^2
	cout << "f4=" << f4 << endl;
	return 0;
}
//ctrl +F5 run




//class11字符型 
//char ch='a';(单引号里面只能一个字节)（存储单元存储字符对应的编码）
#include<iostream>
using namespace std;
int main7()
{//1.创建
	char ch = 'a';
	cout << ch << endl;
	//2.查看对应ASCII编码(A-65 a-97)
	cout << int(ch) << endl;
	return 0;
}




//class 12转义字符 （表示不能显示的ASCII字符）
#include<iostream>
using namespace std;
int main8()
{
	cout << "hello\nworld" << endl;
	//2.\t 水平制表（跳到下一个TAB位置 可以让输出内容更整齐）
	cout << "aaaaaa\thello" << endl;
	cout << "aa\thello" << endl;
		//3.'\\'代表'\'
	cout << "\\" << endl;
	return 0;
}



//class 13字符串型
#include <iostream>
using namespace std;
int main9()
{//char变量名[]="字符串"(style of C)
	char str1[] = "hello";
	cout << str1 << endl;
//string name ="string"(style of c++)
	//(用之前要包含一个头文件#include <string> *新版本不用加)
	string str2 = "world";
	cout << str2 << endl;
	return 0;
}



//class 14 bool
#include <iostream>
using namespace std;
int main10()
{//true1  false0(everything is ture except 0)
	bool flag = true;
	cout << flag << endl;
	bool flag1 = false;
	cout << flag1 << endl;
	return 0;
}


//class 15 数据输入
#include <iostream>
using namespace std;
int main()
{//1.整型
	int a = 0;
	cout << "please input the value of a" << endl;
	cin >> a;
	cout << "the value:" << a << endl;

	//2.float
	float b = 0;
	cout << "please input" << endl;
	cin >> b;
	cout << "the value" << b << endl;
	//3.string
	string c = "0";
	cin >> c;
	cout << c << endl;
	//4.char 
	char d = '0';
	cin >> d;
	cout << d << endl;
	//5.bool
	bool e = 0;
	cin >> e;
	cout << e << endl;
	return 0;
}




