/*���������Ǹ�10��������A��B(<=2^30-1)�����A+B��D (1 < D <= 10)��������
�����ʽ��
������һ�������θ���3������A��B��D��
�����ʽ��
���A+B��D��������
����������
123 456 8
���������
1103
����

���Ǹ��ݶ̳����Ĵ���ʵ�֣�ƽʱ�������������ģ��������ջ����ϰһ�¡�

�����Ŀӣ�
���ջ����0������ͷ������0�������������ʵ��Ҳͬ��*/ 

//C/C++ʵ��
#include <iostream>
#include <stack>

using namespace std;

int main(){
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    stack<int> s;
    int tmp = a + b;
    int rest;
    do{
        s.push(tmp %d);
        tmp /= d;
    }while(tmp != 0);
    while(!s.empty()){
        printf("%d", s.top());
        s.pop();
    }
    printf("%c", '\n');
    return 0;
}
