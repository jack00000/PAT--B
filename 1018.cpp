/*���Ӧ�ö����桰���Ӽ�����������Ϸ������ͬʱ��������
�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô���Ƶ�ʤ�����
�����ʽ��
�����1�и���������N��<=105������˫������Ĵ��������N�У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�
C�������ӡ���J������������B������������1����ĸ����׷�����2�������ҷ����м���1���ո�
�����ʽ��
�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ�����3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ�
�м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣
����������
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
���������
5 3 2
2 3 5
B B
����

һ����9�������ȫ�����ǵ��Ϳ��ԣ������ʤ=�Ҹ����׸�=��ʤ��ƽ�������ͬ�����Խ�ʡ����������

�����Ŀӣ�
ʹ��scanf��ȡ��Ч�ַ�ʱһ��Ҫ��ǰ��ӿո���Ϊ������scanf()���ԣ�%c�Ǹ���Ϊ�����˵������ %cǰû�ո�scanf()����ȡ��׼�������еĵ�һ���ַ���%cǰ�пո�scanf()���ȡ��׼�������е�һ���ǿհ��ַ���
*/ 

//C/C++ʵ��
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int jiaWin = 0, jiaLose = 0, draw = 0;
    int jiaJWin = 0, jiaCWin = 0, jiaBWin = 0;
    int yiJWin = 0, yiCWin = 0, yiBWin = 0;
    char jia, yi;
    for(int i = 0; i < n; i++){
        scanf(" %c %c", &jia, &yi);
        if(jia == 'C'){
            if(yi == 'C'){
                draw++;
            }
            else if(yi == 'J'){
                jiaWin++;
                jiaCWin++;
            }
            else if(yi == 'B'){
                jiaLose++;
                yiBWin++;
            }
        }
        else if(jia == 'J'){
            if(yi == 'C'){
                jiaLose++;
                yiCWin++;
            }
            else if(yi == 'J'){
                draw++;
            }
            else if(yi == 'B'){
                jiaWin++;
                jiaJWin++;
            }
        }
        else if(jia == 'B'){
            if(yi == 'C'){
                jiaWin++;
                jiaBWin++;
            }
            else if(yi == 'J'){
                jiaLose++;
                yiJWin++;
            }
            else if(yi == 'B'){
                draw++;
            }
        }
    }
    printf("%d %d %d\n", jiaWin, draw, jiaLose);
    printf("%d %d %d\n", jiaLose, draw, jiaWin);
    printf("%c ", jiaBWin >= jiaCWin ? (jiaBWin >= jiaJWin ? 'B' : 'J') : (jiaCWin >= jiaJWin ? 'C' : 'J'));
    printf("%c\n", yiBWin >= yiCWin ? (yiBWin >= yiJWin ? 'B' : 'J') : (yiCWin >= yiJWin ? 'C' : 'J'));
    return 0;
}
  
