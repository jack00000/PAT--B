/*������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
�ָ���A��DA��B��DB�����д�������PA + PB��
�����ʽ��
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
�����ʽ��
��һ�������PA + PB��ֵ��
��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0*/
/*����

˼·���Ƿֱ��¼A��DA���ֵĴ�����B��DB���ֵĴ�����Ȼ�������������ó�ʵ�ʵ�PA��PB��������Ӽ��ɡ�*/

//C/C++ʵ��
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
    char a[11], b[11];
    char da, db;
    int count1 = 0, count2 = 0;
    int sum1 = 0, sum2 = 0;
    scanf("%s %c %s %c", a, &da, b, &db);
    for(int i = 0; i < strlen(a); i++){
        if(a[i] == da){
            count1++;
        }
    }
    for(int j = 0; j < count1; j++){
        sum1 += (int)(da - '0') * pow((double)10, j);
    }
    for(int i = 0; i < strlen(b); i++){
        if(b[i] == db){
            count2++;
        }
    }
    for(int j = 0; j < count2; j++){
        sum2 += (int)(db - '0') * pow((double)10, j);
    }
    printf("%d\n", sum1 + sum2);
    return 0;
} 
