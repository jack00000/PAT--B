/*����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�

����������

Hello World Here I Come
���������

Come I Here World Hello*/ 
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char c[82];
    gets(c+1);
    c[0] = ' ';
    for(int i=strlen(c);i>=0;i--){
        if(c[i] == ' '){
            printf("%s", c+i+1);
            c[i] = '\0';
            if(i == 0){
                printf("%c", '\n');
            }
            else{
                printf("%c", ' ');
            }
        }
        else{
            continue;
        }
    }
    return 0;
}
