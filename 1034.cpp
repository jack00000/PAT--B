/*本题要求编写程序，计算2个有理数的和、差、积、商。
输入格式：
输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为0。
输出格式：
分别在4行中按照“有理数1 运算符 有理数2 = 结果”的格式顺序输出2个有理数的和、差、积、商。注意输出的每个有理数必须是该有理数的最简形式“k a/b”，其中k是整数部分，a/b是最简分数部分；若为负数，则须加括号；若除法分母为0，则输出“Inf”。题目保证正确的输出中没有超过整型范围的整数。
输入样例1：
2/3 -4/2
输出样例1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
输入样例2：
5/3 0/6
输出样例2：
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
分析

这道题花费了我好长时间才AC，开始写了个乱七八糟的程序，然后各种错，改完一处又发现一处，改了不下10遍程序实在改不下去了，
于是就重写了一个条理还算清晰的程序，这次居然一遍就过了。

这道题难的地方就是要把各种的情况都考虑清楚了，然后尽可能的把功能拆分，这样遇到问题，可以很快找到并改正，而且改正后，
也不需要考虑其他地方会不会有类似的问题，因为这个功能只由这个方法负责。

我这里主要细化为：
1.输出单个分数的方法；
2.求最大公约数的方法；（这个一定要写的，没用到肯定是有问题，最小公倍数可以偷懒不写）
3.加法；
4.减法；
5.乘法；
6.除法。
其中减法可以调用加法来做，我之前是这样做的，但是有问题，这次怕出错，就单独出来了；同理，除法也可以调用乘法。

另外需要注意的是：一定不要用int，在计算过程中有可能出现大数，所以我用的是long long，我看到别人有用long也成功的，
由于我这里没写最小公倍数的方法，所以还是用long long了，保险一点。

源代码*/ 

//C/C++实现
#include <iostream>
#include <cmath>

using namespace std;

//辗转相除法
int gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

void print(long long a, long long b){
    long long c = 0; //带分数前面的整数部分，默认是0
    if(a > 0){ //正数
        if(b == 1){ //形如3/1
            printf("%lld", a);
        }
        else if(a > b){ //形如5/3
            c = a / b;
            a -= b * c;
            printf("%lld %lld/%lld", c, a, b);
        }
        else{ //真分数 形如3/5
            printf("%lld/%lld", a, b);
        }
    }
    else if(a == 0){ //形如0/3
        printf("%c", '0');
    }
    else{ //负数
        if(b == 1){ //形如-3/1
            printf("(%lld)", a);
        }
        else if(-1 * a > b){ //形如-5/3
            c = a / b;
            a = (-1 * a) % b;
            printf("(%lld %lld/%lld)", c, a, b);
        }
        else{ //真分数
            printf("(%lld/%lld)", a, b);
        }
    }
}

void add(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" + ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * b2 + a2 * b1;
    long long b3 = b1 * b2;
    //化简到最简形式，非带分数形式
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void subtract(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" - ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * b2 - a2 * b1;
    long long b3 = b1 * b2;
    //化简到最简形式，非带分数形式
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void multiply(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" * ");
    print(a2, b2);
    printf(" = ");
    long long a3 = a1 * a2;
    long long b3 = b1 * b2;
    //化简到最简形式，非带分数形式
    long long gcd3 = abs(gcd(a3, b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3, b3);
    printf("\n");
}

void divide(long long a1, long long b1, long long a2, long long b2){
    print(a1, b1);
    printf(" / ");
    print(a2, b2);
    printf(" = ");
    if(a2 == 0){
        printf("Inf");
    }
    else if(a2 < 0){
        long long a3 = -1 * a1 * b2;
        long long b3 = -1 * b1 * a2;
        //化简到最简形式，非带分数形式
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    else{
        long long a3 = a1 * b2;
        long long b3 = b1 * a2;
        //化简到最简形式，非带分数形式
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    printf("\n");
}

int main(){
    long long a1, b1, a2, b2;
    long long c1 = 0, c2 = 0;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    //先化简到最简形式，非带分数形式
    long long gcd1 = abs(gcd(a1, b1));
    a1 /= gcd1;
    b1 /= gcd1;
    long long gcd2 = abs(gcd(a2, b2));
    a2 /= gcd2;
    b2 /= gcd2;
    //统一用最简形式参与运算
    add(a1, b1, a2, b2);
    subtract(a1, b1, a2, b2);
    multiply(a1, b1, a2, b2);
    divide(a1, b1, a2, b2);
    return 0;
}
