//����array
//һ������ ����� 1.��ͬ���͵�  ����Ԫ��2.���������ڴ�λ�����
//���ֶ��巽ʽ
/*
* 1.�������� ������[���鳤��]��
* 2.�������� ������[���鳤��]={ֵ1��ֵ2...};
* 3.�������� ������[]={ֵ1��ֵ2...};
*/

#include <iostream>
using namespace std;
int main1()
{//1
	int arr[5];
	arr[0] = 10;
	arr[1] = 13;
	arr[2] = 14;
	arr[4] = 14;
	arr[3] = 16;

		for (int i =0; i < 5; i++) {
		cout << arr[i] << endl;
		}
//2
	int arr1[5] = { 1,2 };
	cout << arr1[4] << endl;//�������һһ��Ӧ �Զ���0���
//3
	int arr2[] = { 1,2,3,5,5,6 };
	cout << arr2[3] << endl;


	return 0;
}





//2������
//use1 ͳ�����鳤��  sizeof(arr);
//use2 ��ȡ�����׵�ַcout<<arr<<endl;
int main2()
{
int	arr[] = { 2, 3, 4 };
cout << sizeof(arr) << endl;
cout << sizeof(arr[1]) << endl;
cout << sizeof(arr) / sizeof(arr[1]) << endl;
cout << arr << endl;//16���� �׵�ַ
cout << (int) arr << endl;//10����
cout <<(int) & arr[0] << endl;//��һ��Ԫ�صĵ�ַ��������ͬ
cout << (int)&arr[1] << endl;//������ͬ������ĸ��ֽڣ�

	return 0;
}





//3���� ��ֻС�������
//һ�������м�¼����ֻС������ �ҳ����ص�С��
int main3()
{
	int p[] = { 111,122,133 };
	int max = 0;
		for (int i =0; i < 3; i++)
		{	
			if (p[i] > max) { max = p[i]; }		
		} 
			cout << max << endl;

	return 0;
}
//4���� ����Ԫ������
int main4()
{
	int arr4[] = { 1,2,3,4,5 };
	int s = 0;
	int e = sizeof(arr4)/sizeof(arr4[1]) - 1;
	
	while(s<e)
	{int t = arr4[s];
	arr4[s] = arr4[e];//�Ⱥ����߲��ɻ���
	arr4[e] = t;
		e--; s++;
		
	}for (int i = 0; i < 5; i++)
		{
			cout << arr4[i] << endl;
		}

	return 0;
}




//5ð������
//��һ��������������
//��������=Ԫ�ظ���-1
//ÿ�ֶԱȴ���=Ԫ�ظ���-��������-1
int main5()
{
	int arr[] = { 4,2,8,0,5,7,3,9,1 };
	for (int i = 0; i < 9 - 1; i++)
	{//�ڲ�ѭ���Ա�
		for (int j = 0; j < 9 - i - 1; j++)
		{//�����һ�����ֱȵڶ������ִ󣬽�������������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;


			}
		}
	}
	for (int i = 0; i < 9; i++) {

		cout << arr[i] << endl;

	}
return 0;
}





//6��ά����
/*data_type data_name[line number][column number];
data_type data_name[line number][column number]={{1,2},{3,4}}
type number[line][column]={1,2,3,4}
type number[][column]={1,2,3,4}
*/
int main6()
{
	//1data_type data_name[line number][column number];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	
	cout << arr[0][0] << endl; 
	//Ƕ��ѭ����� 
	//������� �ڲ�����
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}
	}

	//2data_type data_name[line number][column number]={{1,2},{3,4}}
	int	arr1[2][3] = { {11,22,33},{1111,222,333} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr1[i][j] << " ";
		}cout << endl;
	}


	//3type number[line][column]={1,2,3,4}
	int arr2[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << " ";
		}cout << endl;
	}



	//4type number[][column ]={1,2,3,4}
	int arr3[][3] = { 1,2,3,1,23,3 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}cout << endl;
	}

	return 0;
}





//7������
//use�ڴ�ռ� �׵�ַ
int main7()
{
	double arr[2][3] = { {1,2,3},{4,5,6} };
	cout << sizeof(arr) << endl;
	cout << "the first line" << sizeof(arr[0]) << endl;
	cout << "the first number" << sizeof(arr[0][0]) << endl;
	cout << arr << endl;
	cout << (int)arr << endl;
	cout << (int)&arr[0][0] << endl;
	return 0;
}




//���� ���Գɼ�ͳ��
/*�ֱ��������ͬѧ�ܳɼ�
*			chinese		math		english
* alice		100			100			100	
* bob		90			50			100
* cindy		60			70			80
*
*/
int main()
{
	int gra[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string name[3] = { "alice","bob","cindy"};
	for (int i = 0; i < 3; i++) {int sum = 0;
		for (int j = 0; j < 3; j++) 
		{
			
			sum += gra[i][j];

			
		}
		cout <<name[i] <<sum << endl;
	}
	return 0;
}

