/*Ӣ������ѧ�Ұ����ٺ�ϲ���ﳵ����˵��Ϊ����ҫ�Լ����ﳵ��������������һ��������������E��
��������E���ﳵ����EӢ����������E����˵�������Լ���E����87��
�ָ���ĳ��N����ﳵ���룬���������Ӧ�İ�������E��<=N����
�����ʽ��
�����һ�и���һ��������N��<=10^5�����������ﳵ���������ڶ��и���N���Ǹ�����������ÿ����ﳵ���롣
�����ʽ��
��һ���и���N��İ���������
����������
10
6 7 6 9 3 10 8 2 7 8
���������
6
����

��������˺þò��ñ��������˲��ֲ��Ե㣬����ǲ�һ�����Ե�û��ͨ����Ӧ�����������������ģ�
������Ȿ�������ⲻ���������׽������
����򵥡����롱һ�£����E����ﳵ��������>����E����ô���E�������������ڿ����кܶ��E���������������
��������������ֵE��
ע�⣺�������3 1 2 3����ô�����1����Ϊ����1��������2�죬����2��������1�죬����3��������0�죬
����ֻ��E=1����E���ﳵ����EӢ�������������Բ��㣬ֻҪ����>=E���ɣ����ǵ��ǵ��ڡ�������û�з���������ֵ��Ҫ���0��
������㷨�Ƕ�������н������򣬽������еĺô��ǿ���ֱ�Ӽ�������Eֵ��
���ȸ������������Ϊ��10 9 8 8 7 7 6 6 3 2
1.��10��10���±�1�Ƚϣ�10 > 1��������1����ﳵ����1Ӣ�
2.��9��9���±�2�Ƚϣ�9 > 2��������2����ﳵ����2Ӣ���Ϊ10 > 9��9���ϣ�����10�϶����ϣ�����ͬ������
3.��8��8���±�3�Ƚϣ�8 > 3��������3����ﳵ����3Ӣ�
4.��8��8���±�4�Ƚϣ�8 > 4��������4����ﳵ����4Ӣ�
5.��7��7���±�5�Ƚϣ�7 > 5��������5����ﳵ����5Ӣ�
6.��7��7���±�6�Ƚϣ�7 > 6��������6����ﳵ����6Ӣ�
7.��6��6���±�7�Ƚϣ�6 > 7���������������ֵEΪ6��
������Ҫע����ǣ���ȫ��������������Ļ���Ҫ������������Ľ�β��ֹͣ������Խ�硣

Դ����
*/ 
//C/C++ʵ��
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> v(n + 1);
    for(int i = 1; i <= n; ++i){
        scanf("%d", &v[i]);
    }
    sort(v.begin() + 1, v.end(), compare); //desc
    int e = 0;
    int i = 1;
    while(i <= n && v[i] > i){
        ++e;
        ++i;
    }
    printf("%d\n", e);
    return 0;
}