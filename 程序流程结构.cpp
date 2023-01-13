#include <iostream>
using namespace std;
//顺序结构 选择结构 循环结构
  // 选择结构
     //1if 
//输入a 若a>600 输出good
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



//3多条件 if;else if...else
//INPUT a,if a>20,best;if a >10,good;if <0a,normal;if 都不满足,bad.
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


//4嵌套if
//引用以上 并附加条件 if a>30,levelc;if a>40,levelb;(b and c are both best)
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

//5练习案例
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




//6三目运算符
//expression1?expression2:expression3
//if 1 is true,2 will be executed and returned
//if 1 is false,3will be executed and returned
//create three variables a,b,c;compare a with b,and aasign the larger to c
int main6()
{
    int a = 10; int b = 20;

  int c = (a > b ? a : b);
  cout << c << endl;

   
    //可以继续赋值(the value of b will change)
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
// if 可以是区间   switch 只能是整数





//循环结构
  //8while
     //输出0到9

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





//9案例 猜数字游戏

#include <ctime>//引用随机数种子的时候用到的头文件
int main9()
{//添加随机数种子 防止每次都一样
    srand((unsigned int)time(NULL));
    int a = rand() % 100 + 1;//生成一个区间[1，100]随机数
   // cout << "the answer is" << a << endl;
    int guess = 0;
    
    while (1)//1代表死循环 在break之前 一直循环
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
//do(循环语句)while(循环条件)
//区别 与while statement区别 execute first and then judge
//输出0~9
int main10()
{
    int a = 0;
    do { cout << a << endl; a++; } while (a < 10);

    return 0;
}





//11水仙花数
//一个三位数 每个个位数的三次幂之和等于它本身
/*
水仙花数153
个位 153%10=3（对数字取模于10）
十位153/10=15（int是整数）  15%10=5（先整除10 再取模）
百位 153/100=1(直接整除100)
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
//for (起始表达式；条件；末尾循环体){循环语句 ;}
//输出0~9
int main12()
{
    for (int a = 0; a < 10; a++) { cout << a << endl; }
    return
        0;
}



//13案例 敲桌子
//1~100 个位有 十位有7 or 7的倍数；打印敲桌子
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





//14嵌套循环
//print stars 
int main14()
{for (int a=0;a<10;a++){
    for (int i = 0; i < 10; i++)
    {  cout << " *"; }//print one line  }
    cout << endl;}
  return 0;
}



//15乘法口诀表
//列数*行数=结果   列数<=行数
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






//跳转语句jump statement
//16 break
/*
switch 语句中 终止case 或跳出switch
loop statement 中 ，跳出当前循环语句
nested loop，跳出最近的内层循环语句
*/
int main16()
{//1
   cout << "请选择你的修狗" << endl;
     cout<< "1.边牧" << endl;
     cout << "2.柯基" << endl;
     cout << "3.二哈" << endl;
     int dogs = 0;
     cout << "input the number" << endl;
     cin >> dogs;

     switch (dogs)
     {
     case 1:cout << "边牧属于你了" << endl; break;
     case 2:cout << "柯基属于你了" << endl; break;
     case 3:cout << "二哈属于你了" << endl; break;
     }

     //2
     //在5处停止
     for (int i = 0; i < 10; i++) { 
         if (i == 5) {
             break;
         } { cout << i << endl; }
     }
     //3 
     //梯形
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < i; j++)
         { if (j == 5) { break; }
         cout << j; }cout << endl;
     }

 return 0;
}

    
    



//17 continue
//跳过本次循环中尚未执行语句，继续执行下一次循环
//输出奇数
int main18()
{
    for (int a = 0; a < 10; a++) {
        if (a % 2 == 0) { continue; }
        cout << a << endl;
    }
    return 0;
}




//18goto
//goto 标记   （执行到go to时，跳到标记位置）
int main()
{
    cout << "paradise" << endl; goto flag;
    cout << "cute" << endl;
flag: 
    cout << "is" << endl;
    cout << "a palce" << endl;

    return 0;
}
