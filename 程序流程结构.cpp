#include <iostream>
using namespace std;
//˳��ṹ ѡ��ṹ ѭ���ṹ
  // ѡ��ṹ
     //1if 
//����a ��a>600 ���good
int main1()
{
    int a = 0;
    cout << "please input" << endl;
    cin >> a;
    if (a>600)
    {
        cout << "good" << endl;
      
    }
    return 0;
}
    



//2if else 
//input a ,if a>600,print good,if not print bad
int main2()
{
    int a = 0;
    cin >> a;
    if (a>600)
    {
        cout << "good" << endl;
    }
    else
    {
        cout << "bad" << endl;
    }
    return 0;
 }



//3������ if;else if...else
//INPUT a,if a>20,best;if a >10,good;if <0a,normal;if ��������,bad.
int main3()
{
    int a = 0;
    cout << "QINGinput a" << endl;

    cin >> a;
    if (a > 20){cout << "best" << endl; }
    else if (10 < a ) { cout << "good" << endl; }
    else if (0 < a ) { cout << "normal" << endl; }
    else { cout << "bad" << endl; }
    return 0;

     
}


//4Ƕ��if
//�������� ���������� if a>30,levelc;if a>40,levelb;(b and c are both best)
int main4()
{
    int a = 0;
    cout << "QINGinput a" << endl;

    cin >> a;
    if (a > 20)
    {
        cout << "best" << endl;
        if (a>40)
        {   cout << "LB" << endl; }
        else { cout << "LC" << endl; }

    }
    else if (10 < a) { cout << "good" << endl; }
    else if (0 < a) { cout << "normal" << endl; }
    else { cout << "bad" << endl; }
    return 0;


}

//5��ϰ����
//there are three pigs called ABC weighing,please input the weight of ABC 
//and judge who is the heaviest
int main5()
{
    int a = 0; int b = 0; int c = 0;
    cin >> a;
    cin >> b; 
    cin >> c;
    if (a > b)
    {
        if (a> c)
        {
            cout << "a" << endl;
        }
        else
        {
            cout << "c" << endl;
        }
      
    }
    else
    {if(b>c)
    {
        cout << "b" << endl;
    }
    else
    {
        cout << "c" << endl;
    }
    }
    system("pause");
    return
        0;
}




//6��Ŀ�����
//expression1?expression2:expression3
//if 1 is true,2 will be executed and returned
//if 1 is false,3will be executed and returned
//create three variables a,b,c;compare a with b,and aasign the larger to c
int main6()
{
    int a = 10; int b = 20;

  int c = (a > b ? a : b);
  cout << c << endl;

   
    //���Լ�����ֵ(the value of b will change)
    int d = (a > b ? a : b) = 98;
    cout << a << endl;
    cout << b << endl;
    return 0;

}


//7 switch statement
int main7()
{
    int paradise = 0;
    cin >> paradise;
    switch(paradise)
    { 
    case 10:
        cout << "you are smart" << endl; break;
    case 0:
        cout << "you are silly" << endl; break;
    default:
        cout << "what are u doing" << endl; break;

    }
    return 0;
}
//diferences:
// if ����������   switch ֻ��������





//ѭ���ṹ
  //8while
     //���0��9

int main8()
{
    int a = 0;
    while (a < 10)
    {
        
        cout << a << endl;
        a++;
    }
    return 0;
}





//9���� ��������Ϸ

#include <ctime>//������������ӵ�ʱ���õ���ͷ�ļ�
int main9()
{//������������ ��ֹÿ�ζ�һ��
    srand((unsigned int)time(NULL));
    int a = rand() % 100 + 1;//����һ������[1��100]�����
   // cout << "the answer is" << a << endl;
    int guess = 0;
    
    while (1)//1������ѭ�� ��break֮ǰ һֱѭ��
    {
        cin >> guess;
        if (guess > a)
        {          cout << "too big" << endl;        }
        else if (guess < a)
        {
            cout << "too small" << endl;      }
        else
        {
            cout << "u win" << endl;
            break;
        }
        
    }
    return 0; 
}



//10 do ...while
//do(ѭ�����)while(ѭ������)
//���� ��while statement���� execute first and then judge
//���0~9
int main10()
{
    int a = 0;
    do { cout << a << endl; a++; } while (a < 10);

    return 0;
}





//11ˮ�ɻ���
//һ����λ�� ÿ����λ����������֮�͵���������
/*
ˮ�ɻ���153
��λ 153%10=3��������ȡģ��10��
ʮλ153/10=15��int��������  15%10=5��������10 ��ȡģ��
��λ 153/100=1(ֱ������100)
*/
//print all the three-digit first
//find the narcissistic number then
int main11()
{
    int num = 100;
    do {
        int a = 0; int b = 0; int c = 0;
        a = num % 10; b = num / 10 % 10; c = num / 100;
        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
    return 0;


}




//12for loop statement
//for (��ʼ���ʽ��������ĩβѭ����){ѭ����� ;}
//���0~9
int main12()
{
    for (int a = 0; a < 10; a++) { cout << a << endl; }
    return
        0;
}



//13���� ������
//1~100 ��λ�� ʮλ��7 or 7�ı�������ӡ������
int main13()
{
   
   
 
    for (int i = 1; i < 101; i++)
    {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
            cout << "tape at the table" << endl;
        }
        else { cout << i << endl; }
    }
  return 0;
}  





//14Ƕ��ѭ��
//print stars 
int main14()
{for (int a=0;a<10;a++){
    for (int i = 0; i < 10; i++)
    {  cout << " *"; }//print one line  }
    cout << endl;}
  return 0;
}



//15�˷��ھ���
//����*����=���   ����<=����
int main15()
{
    for ( int i = 1; i < 10; i++) {
      //  cout << i <<endl;
        for (int j = 1; j <=i; j++)
        {
            cout << j<<"*"<<i<<"="<<i*j<<" ";
        }cout << endl;

}
    return
        0;
} 






//��ת���jump statement
//16 break
/*
switch ����� ��ֹcase ������switch
loop statement �� ��������ǰѭ�����
nested loop������������ڲ�ѭ�����
*/
int main16()
{//1
   cout << "��ѡ������޹�" << endl;
     cout<< "1.����" << endl;
     cout << "2.�»�" << endl;
     cout << "3.����" << endl;
     int dogs = 0;
     cout << "input the number" << endl;
     cin >> dogs;

     switch (dogs)
     {
     case 1:cout << "������������" << endl; break;
     case 2:cout << "�»���������" << endl; break;
     case 3:cout << "������������" << endl; break;
     }

     //2
     //��5��ֹͣ
     for (int i = 0; i < 10; i++) { 
         if (i == 5) {
             break;
         } { cout << i << endl; }
     }
     //3 
     //����
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < i; j++)
         { if (j == 5) { break; }
         cout << j; }cout << endl;
     }

 return 0;
}

    
    



//17 continue
//��������ѭ������δִ����䣬����ִ����һ��ѭ��
//�������
int main18()
{
    for (int a = 0; a < 10; a++) {
        if (a % 2 == 0) { continue; }
        cout << a << endl;
    }
    return 0;
}




//18goto
//goto ���   ��ִ�е�go toʱ���������λ�ã�
int main()
{
    cout << "paradise" << endl; goto flag;
    cout << "cute" << endl;
flag: 
    cout << "is" << endl;
    cout << "a palce" << endl;

    return 0;
}
