/*C/C++ʵ�������Ƕ��� dnΪ��dn = pn + 1- pn������ pi�ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
�ָ�������������N (< 105)������㲻����N���������������Եĸ�����
�����ʽ��ÿ�������������1����������������������N��
�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����
����������
20
���������
4*/ 
#include <stdio.h>
#include <iostream>

using namespace std;

bool array[100000];

int main(){
    int n;//���ķ�Χ 
    scanf("%d", &n);
    for(int i=2;i<n/2+1;i++){
        for(int j=2;j*i<=n;j++){
            array[i*j] = true;
        }
    }
    int count = 0, tmp = 2;
    for(int k=2;k<=n;k++){
        if(array[k] == false){
            if(k - tmp == 2){
                count ++;
                tmp = k;
            }
            else{
                tmp = k;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
