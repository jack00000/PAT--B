/*C/C++ʵ������������ĸB����ʾ���١�����ĸS��ʾ��ʮ�����á�12...n������ʾ��λ����n��<10����������ʽ�������һ��������3λ��������������234Ӧ�ñ����ΪBBSSS1234����Ϊ����2�����١���3����ʮ�����Լ���λ��4��
�����ʽ��ÿ�������������1����������������������n��<1000����
�����ʽ��ÿ���������������ռһ�У��ù涨�ĸ�ʽ���n��
��������1��
234
�������1��
BBSSS1234
��������2��
23
�������2��
SS123*/
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    int n, count = 0, ge = 0, shi = 0, bai = 0;
    scanf("%d", &n);
    while(n != 0){
        if(count == 0){
            ge = n % 10;
            n /= 10;
            count ++;
        }
        else if(count == 1){
            shi = n % 10;
            n /= 10;
            count ++;
        }
        else{
            bai = n % 10;
            n /= 10;
        }
    }
    if(bai != 0){
        for(int i=0;i<bai;i++){
            printf("%c", 'B');
        }
    }
    if(shi != 0){
        for(int j=0;j<shi;j++){
            printf("%c", 'S');
        }
    }
    if(ge != 0){
        for(int k=0;k<ge;k++){
            printf("%d", k+1);
        }
    }
    printf("%c", '\n');
    return 0;
}
