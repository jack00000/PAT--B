#include <stdio.h>/*����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
�����ʽ��ÿ�������������1��������������ʽΪ
��1�У�������n
��2�У���1��ѧ�������� ѧ�� �ɼ�
��3�У���2��ѧ�������� ѧ�� �ɼ�*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    char name[11],sid[11];//ѧ�� 
    char max_name[11],max_sid[11];
    int max_grade = 0,min_grade =100,grade;
    char min_name[11],min_sid[11];
    scanf("%d", &n);//ѧ������ 
    for(int i=0;i<n;i++){
        scanf("%s%s%d", name, sid, &grade);//�������� 
       // �Ƚ� grade 
        if(grade > max_grade){
            max_grade = grade;
            strcpy(max_name,name);//string copy 
            strcpy(max_sid,sid);
        }
        if(grade < min_grade){
            min_grade = grade;
            strcpy(min_name,name);
            strcpy(min_sid,sid);
        }
    }
    printf("%s %s\n", max_name, max_sid);
    printf("%s %s\n", min_name, min_sid);
    return 0;
}
