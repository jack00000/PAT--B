/*��������[-2^31, 2^31]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��
�����ʽ��
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���
�����ʽ��
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����
����������4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false*/
 //C/C++ʵ��
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int t;
    long long a, b, c;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        printf("Case #%d: %s\n", i + 1, (a + b > c ? "true" : "false"));
    }
    return 0;
}
