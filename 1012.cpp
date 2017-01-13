/*��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������
�����ʽ��
������һ���и���M��N������Կո�ָ���
�����ʽ��
�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�
����������
5 27
���������
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103*/
//C/C++ʵ��
#include <stdio.h>
#include <iostream>

using namespace std;

int PNarray[10000] = {2}; //PNarray[0] = 2;

bool isPrimeNumber(int n, int PNarray[]){
    for(int i = 0; PNarray[i] * PNarray[i] <= n; i++){
        if(n % PNarray[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int index = 1;
    for(int i = 3; index < b; i += 2){ //��������b������������
        if(isPrimeNumber(i, PNarray)){ //is prime number
            PNarray[index++] = i; //store in prime number table//�������ڱ��� 
        }
    }
    int count = 0;
    for(int j = a - 1; j < b; j++){
        if(count % 10 != 0){
            printf("%c", ' ');
        }
        printf("%d", PNarray[j]);
        count++;
        if(count % 10 == 0){
            printf("%c", '\n');//10����һ�� 
        }
    }
   
    return 0;
}
