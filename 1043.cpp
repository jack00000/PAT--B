/*����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ�����
�뽫�ַ����µ���˳�򣬰���PATestPATest....��������˳������������������ַ���
��Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬
�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������
�����ʽ��
������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����
�����ʽ��
��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�
����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
PATestPATestPTetPTePePee
����

��6��������¼PATest�ĳ��ִ�����Ȼ���մ�P��t��˳�������ÿ���һ�ΰѼ������Լ�1������ȫΪ0ʱ��ֹͣ������ɡ�

Դ����
*/
//C/C++ʵ��
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char c[10001];
    gets(c);
    int countP = 0, countA = 0, countT = 0, counte = 0, counts = 0, countt = 0;
    for(int i = 0; i < strlen(c); ++i){
        if(c[i] == 'P'){
            ++countP;
        }
        else if(c[i] == 'A'){
            ++countA;
        }
        else if(c[i] == 'T'){
            ++countT;
        }
        else if(c[i] == 'e'){
            ++counte;
        }
        else if(c[i] == 's'){
            ++counts;
        }
        else if(c[i] == 't'){
            ++countt;
        }
    }
    while(countP != 0 || countA !=0 || countT !=0 || counte != 0 || counts !=0 || countt !=0){
        if(countP != 0){
            printf("P");
            --countP;
        }
        if(countA != 0){
            printf("A");
            --countA;
        }
        if(countT != 0){
            printf("T");
            --countT;
        }
        if(counte != 0){
            printf("e");
            --counte;
        }
        if(counts != 0){
            printf("s");
            --counts;
        }
        if(countt != 0){
            printf("t");
            --countt;
        }
    }
    printf("\n");
    return 0;
}
