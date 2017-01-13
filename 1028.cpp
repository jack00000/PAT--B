/*ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�
����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���������֪����û�г���200������ˣ���������2014��9��6�գ����Գ���200������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���
�����ʽ��
�����ڵ�һ�и���������N��ȡֵ��(0, 10^5]�����N�У�ÿ�и���1���˵��������ɲ�����5��Ӣ����ĸ��ɵ��ַ��������Լ�����yyyy/mm/dd��������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�
�����ʽ��
��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���
����������
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
���������
3 Tom John
����

1.��д�����޺����ޣ������ڲ�������2014/09/06����������1814/09/06��
2.Ȼ������compare�����ж��Ƿ�Ϊ�Ϸ����ڣ�����ǺϷ����ھʹ��뵽�ṹ�������У��ṹ�壺�������꣬�£��գ���
3.�ٽ��ṹ�����������������õ����������Կ�ͷ�ļ�Ϊ���곤�ģ�ĩβ��Ϊ�����׵ġ�

�����ٰ�Ϊ�Ϸ�������Ϊ1��0���ǽ�ȥ����Ϊ��ȷ�𰸡�

Դ����
*/ 
//C/C++ʵ��
#include <iostream>

using namespace std;

typedef struct information{
    char name[6];
    int year, month, day;
}info;

int compare(const void *a_t, const void *b_t){
    info *a = (info *)a_t, *b = (info *)b_t;
    if(a->year != b->year){
        return a->year - b->year;
    }
    else if(a->month != b->month){
        return a->month - b->month;
    }
    else{
        return a->day - b->day;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    info table[n], first = {"first", 2014, 9, 6}, last = {"last", 1814, 9, 6}; //֮��ĳ�n
    int count = 0;
    for(int i = 0; i < n; ++i){
        scanf("%s %d/%d/%d", table[count].name, &table[count].year, &table[count].month, &table[count].day);
        if(compare(&table[count], &first) > 0 || compare(&table[count], &last) < 0){
            continue;
        }
        ++count;
    }
    qsort(table, count, sizeof(table[0]), compare);
    if(count == 1){
        printf("1 %s %s\n", table[0].name, table[0].name);
    }
    else if(count > 1){
        printf("%d %s %s\n", count, table[0].name, table[count - 1].name);
    }
    else{
        printf("0\n");
    }
    return 0;
}

