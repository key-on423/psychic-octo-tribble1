// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
#include <stdio.h>
#include<string.h>

    
//int main()
//{
//
//    //int num1 = 0;
//    //int num2 = 0;
//    //int sum = 0;
//    //scanf_s("%d%d", &num1, &num2); // scanf 输入函数 &取地址符号
//    //sum = num1 + num2;
//    //printf("sum = %d\n", sum);
//        int input = 0;
//    printf("你是否愿意继续学习下去？\n");
//    printf("1 means yes, 0 means no\n");
//    scanf_s("%d", &input);
//    if (input == 1)
//        printf("进入米哈游工作");
//    else
//        printf("回家种红薯");
//    return 0;
//}
//int main()
//{
//    printf("好好学习编程语言\n");
//    int line = 0;
//    while (line < 20000000000)  // 循环操作
//    {
//        printf("敲一行代码:%d\n", line);
//        line++;
//    }
//    printf("幸福来敲门");
//    return 0;
//}

//int main()
//{int a = 30;  //在C语言中我们规定 0为假 非0为真
//    printf("%d\n", a);  
//    char ch = !a; //这里！a表示a的假函数 单目操作符 ： sizeof ! = - +....
//    printf("%d\n", ch); //输出结果为0             // sizeof 计算的是变量/类型所占空间的大小，单位是字节
//    return 0;        // int a =10 ,  sizeof (a)=4
//                       int arr[10] = 0 , printf ("%d\n", sizeof (arr) ) = 10*4 = 40
//                     转义字符：\n, \060, \.... \q不是
//                  int n = 10, int arr [n] = {0} 数组创建错误 []应为 数值 不应为 变量
//                printf ("%d\n", strlen ( "c:\test\121")) = 7
//}   //比较函数\取较大值

   /* int num1 = 20;
    int num2 = 30;
    if (num1 > num2)
        printf("较大的是：%d\n", num1);
    else
        printf("较大的是：%d\n", num2);
    return 0;*/
    //或者
    /*int Max(int x, int y)
    {
        if (x > y)
            return x;
        else
            return y;
    }
    int main()
    {
        int num1 = 20;
        int num2 = 30;
            int max = 0;
            max = Max(num1, num2);
            printf("max=%d\n", max);
            return 0;
    }*/

// int main()
//{
//    int a = 0;
//    int b = ~a;
//    printf("%d\n", b);//= -1  ~: 按位取反
//    return 0;
    //原码, 反码，补码
    //负数在内存中存储的时候，存储的是二进制的补码
   //使用的，打印的是这个数的原码
   // 1111111111111111111111111111111 补码  补码-1=反码
   // 1111111111111111111111111111110  反码   反码按位取反=原码 （开头符号位不变）
   // 1000000000000000000000000000001  原码  -1
   // 只要是整数，内存中存储的都是二进制的补码
   
   // 正数的原码 反码 补码 相同
   // 负数：
   // 原码→反码→补码
   // 直接按照正负 原码的符号位不变 反码+1
   // 写出的二进制序列 其他位按位取反得到
   //    //~按（2进制）位取反
           // 1010变  
           // 0101
    //1变0 0变1
  /*  }*/

//int main()
//{
//    int a = 10;
//    int b = a++; // 后置++,先使用，再++
//    // int b = ++a // 前置++, 先++，再使用 a=11 b=11
//    printf("a = %d b = %d\n", a, b); // a=11 b=10
//    return 0;
//}

//int main()
//{
//    int a = (int)3.14; // (类型） 强制转换 不建议
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;  //  条件操作符：exp1? exp2: exp3
//    max = (a > b ? a : b); // a>b为真时 取a 否者 取b
//    return 0;
//}  
//int main()
//{
//    int arr[10] = { 0 };
//    arr[4];// [] 下标引用操作符 
//}
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);// () 函数调用 work idea
//    return 0;
//
//}

//int main()
//{
//    register int a = 0; // 建议把a定义成寄存器存量
//    return 0;
//}

//int main()
//{
//  int a = 10;
//   a = -2;
//    printf("%d", a);
//    int 定义的变量是有符号的
//     signed int; signed 通常省略
//    unsigned int num = 1; // 无符号
//    return 0;
//} 
//int main()
//{
//      // typedef 类型重定义
//    typedef unsigned int u_int;
//   // unsigned int num = 20; // = u_int num2 =20
//    u_int num2 = 20;
//    printf("%d", num2);
//
//    return 0;
//}
//void test()
//{
//    static int a = 1; // a 是一个静态的局部变量  a 不销毁保存上一个留下的值 输出 2 3 4 5 6
//   // int a = 1; 输出 2 2 2 2 2 
//    // static 修饰局部变量 
//    //局部变量的生命周期变长
//    a++;
//        printf("a=%d\n", a);
//}
//int main()
//{
//    int i = 0;
//        while (i < 5)
//        {
//            test();
//                i++;
//        }
//}
// static 修饰全局变量 
//改变了变量的作用域 让静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件就没法再使用了
//int main()
//{ //extern 声明外部符号的
//    extern int g_val;
//    printf("g_val=%d\n", g_val);
//    return 0;
//}
// static 修饰函数
// static修饰函数改变了函数的链接属性，
//  外部链接属性 → 内部链接属性
// #define 定义标识符常量
// #define  可以定义宏 带参数
//#define Max 100
// 函数的实现 ↓
 /*int Max (int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a = 10;
    int b = 20;
    int max = Max(a, b);
    printf("max = %d\n", max);
    return 0;
 }*/
 // 宏的定义
//#define Max(x,y) (x>y?x:y)
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //函数
//    int max = Max(a, b);
//    printf("max = %d\n", max);
//    //宏的方式
//    max = Max(a, b);
//    printf("max = %d\n", max);
//    return 0;
//}
// 指针
//int main()
//{
//    int a = 10;
//    //&a取地址
//   int* p = &a; //取地址 p里面存a的地址
//    // 有一种变量是用来存放地址的-指针变量
//  //  printf ("%p\n", &a);
//   // printf("%p\n", p);
//    *p = 20;// *p  *解引用操作符
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'a';
//    printf("%c\n", ch);
//    printf ("%d\n", sizeof(pc));//=4 32位平台是4个字节 64位平台是8个字节
//    return 0;
// }
//创建一个结构体类型
//#include <stdio.h>
//struct Book
//{
//    char name[20];
//    short price;
//};
//int main()
//{
//    struct Book b1 = { "C语言程序设计",55 };
//    strcpy(b1.name,"C++");  // strcpy-string copy- 字符串拷贝-库函数-string.h 才可以改名字 2020版不要加这个
//    printf("%s\n", b1.name);
//    //struct Book* pb = &b1;
//    //// 利用pb
//    ////.操作符  用到结构体变量.成员
//    ////->       用到结构体指针->成员
//    ///*printf("%s\n", (*pb).name);
//    //printf("%d\n", (*pb).price);*/
//    ////等于↓
//    //printf("%s\n", pb->name);
//    //printf("%d\n", pb->price);
//   /* printf("书名:%s\n", b1.name);
//    printf("价格:%d\n", b1.price);
//    b1.price = 15; //变量可以直接变值
//        printf("修改后的价格:%d\n", b1.price);*/
//    return 0;
//}

//int main()
//{
//    printf("你要好好学习嘛？\n");
//    printf("1 mean yes 0 mean no \n");
//    int input = 0;
//    scanf_s("%d", &input);
//    if (input == 1)
//    
//        printf("成功\n");
//    else
//        printf("种红薯\n");
//        
//    
//
// 
//    return 0;
//}

//int main()
//{
//    int age = 0;
//    scanf_s("%d", &age);
//    if (age < 18)
//        printf("未成年\n");
//    else if (age >= 18 && age < 28)
//        printf("青年\n");
//    else if (age >= 28 && age < 50)
//        printf("壮年\n");
//    else if (age >= 58 && age < 90)
//        printf("老年\n");
//    else
//        printf("老不死\n");
//    return 0;
////}
//int main()
//{
//    printf("你喜欢爱莉希雅还是流萤？\n");
//    printf("1 means 喜欢爱莉希雅 2 means 喜欢流萤 3 means 都喜欢\n");
//    int num1 = 0;
//    scanf_s("%d", &num1);
//    if (num1 == 1)
//        printf("你永远喜欢爱莉希雅\n");
//    else if (num1 > 1 && num1 <= 2)
//        printf("你永远喜欢流萤\n");
//    else
//        printf("你永远喜欢爱莉希雅和流萤\n");
//
//        return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int num = 1;
//    while (num <= 100) //while下面大括号不能少  if {}看情况放
//    {
//        if (num % 2 == 1)
//            printf("%d ", num);
//           num++;
//
//        }
//    return 0;
// }
//int main()
//{
//    int day = 0; //day只能定义整
//        scanf_s("%d", &day); //(switch（类型） case （整型） break （终止）没有break 一直执行下来
//        switch (day)
//        {//default: 
//            //printf("输入错误\n") 一般放在最后
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//        default:
//            printf("输入错误\n");
//        }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//        while (i < 11)
//        {
//            printf("%d ", i);
//            i++;
//        }
//    return 0;
//}
//int main()
//{
//    int ch = getchar();
//    putchar(ch);
//    return 0;
//}
//int main()
//{
//    int ch = 0;
//    while((ch=getchar() )!= EOF) //ctrl + z
//    {                            //EOF- end of file-> -1  文件结束
//        putchar(ch);
//    }
//    return 0;
//}
//#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    int re = 0;
//    char password[20] = {0};
//        printf("请输入您的密码");//输入过后 输入缓冲区里还有\n会被 re识别=10 所以
//        //需要打出多的getchar把不需要的符号全部吸收走
//
//        scanf("%s", password);
//        getchar ();
//        //当输入空格时password只能识别空格前的 空格后的会被后面识别
//        while ((ch = getchar()) != '\n')//当符号过多时采用此类方法
//        {
//            ;
//        }
//        printf("请再次确认(Y/N)");
//        re = getchar();
//        if (re == 'Y')
//        {
//            printf("确认成功\n");
//        }
//        else
//        {
//            printf("放弃确认\n");
//        }
//    return 0;
//    }
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'8')
//            continue;
//            putchar(ch);
//        
//
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1;i <= 10;i++)
//    {
//        if (i == 5)
//            continue;
//            printf("%d ", i);
//}
//
//    return 0;
//}
//int main()
//{
//    int k = 0;
//    int i = 0;
//    for (i=0,k=0;k=0;i++,k++)//k=0 0为假 循环0次
//        //初始化 调整 判断都可以省略
//        //for循环的判断部分省略，那判断条件就是：恒为真
//        //如果不是非常熟练不要随便省略 
//    
//        printf("666\n");
//
//
//    return 0;
//} 
//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}
//int main()
//{
//    int n = 3;
//    int i = 0;
//    int ret = 1;
//    int sum = 0;
//    for (i= 1;i<=n;i++)
//    {
//        ret = ret * i;//前ret空变量 后ret已知变 量
//       sum = sum + ret;
//        }
//    printf("sum = %d\n", sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1;n <= 3;n++)
//    {
//        ret = ret * n;//求n的阶乘的和
//            sum = sum + ret;
//    }
//    printf("sum = %d", sum);
//    return 0;
//
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf_s("%d", &n);
//    for (i = 1;i <= n;i++)
//    {
//        ret = ret * i; //求n的阶乘 注意多项式时 ret的值是否需要重新赋值1
//        sum = sum + ret;//求n的阶乘的累积和
//    }
//    printf("ret = %d\n", ret);
//    printf("sum = %d\n", sum);
//    return 0;
//}
//int main()
//{   //普通效率版
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 7;
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for (i = 0;i < sz;i++)
//    {
//        if(k==arr[i])
//        {
//            printf("下标为: %d\n", i);
//            break;
//        }
//     }
//
//    if (i == sz)
//        printf("找不到");
//    //写一个代码，在arr数组（有序的）中找到7
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;  //整数数组无需考虑\0问题，字符串或字符数组要考虑\0是否会引起下标加1
//    int left = 0;//左下标
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int right = sz - 1;//右下标
//    while(left<=right)
//    {
//    int mid = (left + right) / 2; //二分查找
//    
//    
//        if (arr[mid] > k)
//        {
//            right = mid - 1;
//
//        }
//        else if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            printf("找到了，下标是%d\n", mid);
//            break;
//        }
//        if (left > right)
//        {
//            printf("找不到");
//        }
//       } 
//    return 0;
//    
//}
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//
//int main()
//{
//    char arr1[] = "结束并非终结 ，而是希望的开始";
//    char arr2[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//            printf("%s\n", arr2);
//            Sleep(200);//1000ms=1s
//            system("cls");//执行系统命令的一个函数-cls-清空屏幕
//            left++;
//            right--;
//    }
//    printf("%s\n", arr2);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 0;i < 3;i++)
//    {
//        printf("请输入你的密码");
//        scanf("%s", &password);
//        if (strcmp(password,"123456789")==0)//等号不能用来比较两个字符串相等,应该使用一个库函数-strcmp
//        {
//            printf("登入成功\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误\n");
//        }
//    }
//    if (3 == i)
//    {
//        printf("三次密码均错误请，退出程序\n");
//    }
//    return 0;
//}







// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
