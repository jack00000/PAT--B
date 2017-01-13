/*����Ҫ���д���򣬼���2���������ĺ͡�������̡�
�����ʽ��
������һ���а��ա�a1/b1 a2/b2���ĸ�ʽ��������������ʽ�������������з��Ӻͷ�ĸȫ�����ͷ�Χ�ڵ�����������ֻ���ܳ����ڷ���ǰ����ĸ��Ϊ0��
�����ʽ��
�ֱ���4���а��ա�������1 ����� ������2 = ������ĸ�ʽ˳�����2���������ĺ͡�������̡�ע�������ÿ�������������Ǹ��������������ʽ��k a/b��������k���������֣�a/b�����������֣���Ϊ��������������ţ���������ĸΪ0���������Inf������Ŀ��֤��ȷ�������û�г������ͷ�Χ��������
��������1��
2/3 -4/2
�������1��
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
��������2��
5/3 0/6
�������2��
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
����

����⻨�����Һó�ʱ���AC����ʼд�˸����߰���ĳ���Ȼ����ִ�����һ���ַ���һ�������˲���10�����ʵ�ڸĲ���ȥ�ˣ�
���Ǿ���д��һ�������������ĳ�����ξ�Ȼһ��͹��ˡ�

������ѵĵط�����Ҫ�Ѹ��ֵ��������������ˣ�Ȼ�󾡿��ܵİѹ��ܲ�֣������������⣬���Ժܿ��ҵ������������Ҹ�����
Ҳ����Ҫ���������ط��᲻�������Ƶ����⣬��Ϊ�������ֻ�������������

��������Ҫϸ��Ϊ��
1.������������ķ�����
2.�����Լ���ķ����������һ��Ҫд�ģ�û�õ��϶��������⣬��С����������͵����д��
3.�ӷ���
4.������
5.�˷���
6.������
���м������Ե��üӷ���������֮ǰ���������ģ����������⣬����³����͵��������ˣ�ͬ������Ҳ���Ե��ó˷���

������Ҫע����ǣ�һ����Ҫ��int���ڼ���������п��ܳ��ִ������������õ���long long���ҿ�����������longҲ�ɹ��ģ�
����������ûд��С�������ķ��������Ի�����long long�ˣ�����һ�㡣

Դ����*/ 

//C/C++ʵ��
#include <iostream>
#include <cmath>

using namespace std;

//շת�����
int gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

void print(long long a, long long b){
    long long c = 0; //������ǰ����������֣�Ĭ����0
    if(a > 0){ //����
        if(b == 1){ //����3/1
            printf("%lld", a);
        }
        else if(a > b){ //����5/3
            c = a / b;
            a -= b * c;
            printf("%lld %lld/%lld", c, a, b);
        }
        else{ //����� ����3/5
            printf("%lld/%lld", a, b);
        }
    }
    else if(a == 0){ //����0/3
        printf("%c", '0');
    }
    else{ //����
        if(b == 1){ //����-3/1
            printf("(%lld)", a);
        }
        else if(-1 * a > b){ //����-5/3
            c = a / b;
            a = (-1 * a) % b;
            printf("(%lld %lld/%lld)", c, a, b);
        }
        else{ //�����
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
    //���������ʽ���Ǵ�������ʽ
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
    //���������ʽ���Ǵ�������ʽ
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
    //���������ʽ���Ǵ�������ʽ
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
        //���������ʽ���Ǵ�������ʽ
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    else{
        long long a3 = a1 * b2;
        long long b3 = b1 * a2;
        //���������ʽ���Ǵ�������ʽ
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
    //�Ȼ��������ʽ���Ǵ�������ʽ
    long long gcd1 = abs(gcd(a1, b1));
    a1 /= gcd1;
    b1 /= gcd1;
    long long gcd2 = abs(gcd(a2, b2));
    a2 /= gcd2;
    b2 /= gcd2;
    //ͳһ�������ʽ��������
    add(a1, b1, a2, b2);
    subtract(a1, b1, a2, b2);
    multiply(a1, b1, a2, b2);
    divide(a1, b1, a2, b2);
    return 0;
}
