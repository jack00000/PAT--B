//C/C++ʵ��
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
	 
    int n;//�ַ����� 
    char c[101];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        bool result = true; 
        int count1 = 0, count2 = 0, count3 = 0;
        int countP = 0, countT = 0;//���� 
        scanf("%s", c);//�����ַ� 
        
        for(int j=0;j<strlen(c);j++){
            if(c[j] != 'P' && c[j] != 'A' && c[j] != 'T'){//��PAT  �����ַ�  error 
                result = false;
                break;
            }
            if(c[j] == 'P'){//����P�������ַ� error 
                countP ++;
                if(countP == 2){
                    result = false;
                    break;
                }
            }
            if(c[j] == 'T'){//����P�������ַ� error 
                countT ++;
                if(countT == 2){
                    result = false;
                    break;
                }
            }
        }
        if(result){//error��ִ�� 
            string s = c;//��Ҫ������ת��Ϊ�ַ��� 
            count1 = s.find("P");//�ҵ���P����λ�� 
            count2 = s.find("A");
            count3 = s.find("T");
            if(count1 == -1 || count2 == -1 || count3 == -1){
                result = false;
            }
            else{
                result = ((count1 * (count3 - count1 - 1)) == (strlen(c) - count3 - 1)) ? true : false;
            }
        }
        if(result){ 
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
