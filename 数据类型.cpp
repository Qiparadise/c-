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
/*����
1��define�곣��
2.const���α���
*/
#define Day 7 //DAYΪ���� �����޸�
int main3() {
	cout << "һ���У�" << Day << "��";

	const int month = 12;
	cout << "һ���ɣ�" << month << "���·�" << endl;
	return 0;
}




//class 6
/*�ؼ��֣���ʶ����
�ѱ����õĴ�
��int*/



//class 7
/*��ʶ����������1.�����ǹؼ��� ��int int=10 ������
2.����ĸ ���� �»������ int _123a=10
3.��һ���ַ�����������
*/



//class8
/*��������(������������ʵ��ڴ�ռ䣩
* 1.short������ 
* 2.int���� 
* 3.long������
* 4.long long�������� 
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





//class 9 sizeof�ؼ��֣�ͳ����������վ���ڴ��С
#include<iostream>
using namespace std;
int main5()
{
	short num1 = 10;
	int num2 = 12;
	long num3 = 13;
	long long num4 = 14;
	cout << "ռ��" << sizeof(num1) << endl;
	cout << "ռ��" << sizeof(long long) << endl;
	return 0;
	
	//short<int<=long<=long long
}




//class 10ʵ�ͣ������ͣ�
/*1.������float����λ��Ч���֣�
2.˫����double��15~16λ��Ч���֣�
Ĭ������¶����6λ��Ч����
*/
#include<iostream>
using namespace std;
int main6()
{
	float f1 = 3.14f;
	float f2 = 3.12;
	//��������3��14��3��12�� �ᷢ�ִ�f����ʾ����float ����������ʾdouble �������Ĭ��double��
	cout << "f1=" << f1 << endl;
	double d1 = 3.3;
	cout << "d1 =" << d1 << endl;
	//��ѧ������
	float f3 = 3e2;//3*10^2
	cout << "f3=" << f3 << endl;
	float f4 = 3e-2;//3*0.1^2
	cout << "f4=" << f4 << endl;
	return 0;
}
//ctrl +F5 run




//class11�ַ��� 
//char ch='a';(����������ֻ��һ���ֽ�)���洢��Ԫ�洢�ַ���Ӧ�ı��룩
#include<iostream>
using namespace std;
int main7()
{//1.����
	char ch = 'a';
	cout << ch << endl;
	//2.�鿴��ӦASCII����(A-65 a-97)
	cout << int(ch) << endl;
	return 0;
}




//class 12ת���ַ� ����ʾ������ʾ��ASCII�ַ���
#include<iostream>
using namespace std;
int main8()
{
	cout << "hello\nworld" << endl;
	//2.\t ˮƽ�Ʊ�������һ��TABλ�� ������������ݸ����룩
	cout << "aaaaaa\thello" << endl;
	cout << "aa\thello" << endl;
		//3.'\\'����'\'
	cout << "\\" << endl;
	return 0;
}



//class 13�ַ�����
#include <iostream>
using namespace std;
int main9()
{//char������[]="�ַ���"(style of C)
	char str1[] = "hello";
	cout << str1 << endl;
//string name ="string"(style of c++)
	//(��֮ǰҪ����һ��ͷ�ļ�#include <string> *�°汾���ü�)
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


//class 15 ��������
#include <iostream>
using namespace std;
int main()
{//1.����
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




