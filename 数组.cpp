//数组array
//一个集合 存放了 1.相同类型的  数据元素2.由连续的内存位置组成
//三种定义方式
/*
* 1.数据类型 数组名[数组长度]；
* 2.数据类型 数组名[数组长度]={值1，值2...};
* 3.数据类型 数组名[]={值1，值2...};
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
	cout << arr1[4] << endl;//如果不能一一对应 自动用0填充
//3
	int arr2[] = { 1,2,3,5,5,6 };
	cout << arr2[3] << endl;


	return 0;
}





//2数组名
//use1 统计数组长度  sizeof(arr);
//use2 获取数组首地址cout<<arr<<endl;
int main2()
{
int	arr[] = { 2, 3, 4 };
cout << sizeof(arr) << endl;
cout << sizeof(arr[1]) << endl;
cout << sizeof(arr) / sizeof(arr[1]) << endl;
cout << arr << endl;//16进制 首地址
cout << (int) arr << endl;//10进制
cout <<(int) & arr[0] << endl;//第一个元素的地址与数组相同
cout << (int)&arr[1] << endl;//其他不同（相差四个字节）

	return 0;
}





//3案例 三只小猪称体重
//一个数组中记录了三只小猪体重 找出最重的小猪
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
//4案例 数组元素逆置
int main4()
{
	int arr4[] = { 1,2,3,4,5 };
	int s = 0;
	int e = sizeof(arr4)/sizeof(arr4[1]) - 1;
	
	while(s<e)
	{int t = arr4[s];
	arr4[s] = arr4[e];//等号两边不可互换
	arr4[e] = t;
		e--; s++;
		
	}for (int i = 0; i < 5; i++)
		{
			cout << arr4[i] << endl;
		}

	return 0;
}




//5冒泡排序
//将一组数据升序排列
//排序轮数=元素个数-1
//每轮对比次数=元素个数-排序轮数-1
int main5()
{
	int arr[] = { 4,2,8,0,5,7,3,9,1 };
	for (int i = 0; i < 9 - 1; i++)
	{//内层循环对比
		for (int j = 0; j < 9 - i - 1; j++)
		{//如果第一个数字比第二个数字大，交换这两个数字
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





//6二维数组
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
	//嵌套循环输出 
	//外层行数 内层列数
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





//7数组名
//use内存空间 首地址
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




//案例 考试成绩统计
/*分别输出三名同学总成绩
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

