/*һ������һ��д�����������������ʽ��N/M������M��Ϊ0����������ָ���Ӻͷ�ĸû�й�Լ���ķ�����ʾ��ʽ��
�ָ�����������ȵ������� N1/M1 �� N2/M2��Ҫ���㰴��С�����˳���г�����֮���ĸΪK����������
�����ʽ��
������һ���а�N/M�ĸ�ʽ���������������������һ����������ĸK������Կո�ָ�����Ŀ��֤����������������������1000��
�����ʽ��
��һ���а�N/M�ĸ�ʽ�г�������������֮���ĸΪK������������������С�����˳�������1���ո�ָ���
����β�����ж���ո���Ŀ��֤������1�������
����������
7/18 13/20 12    �г�����֮���ĸΪK��������
���������
5/12 7/12
����

1.�������ݣ�
2.ɸѡ����Χ��[1,k]֮���k���ʵ������������飻
3.�ж���������������Ĵ�С�����������ޣ�
4.�����Ϸ�Χ������������

ע�⣺�����������������ǰ>��Ҳ���ܺ�>ǰ������Ҫ���жϴ�С�������������ޡ�

Դ����
*/ 
//C/C++ʵ��
#include <iostream>
#include <vector>

using namespace std;

bool prime(int m, int n){ //Ĭ��nΪ����
    int remainder;
    while(m){
        remainder = n % m;
        n = m;
        m = remainder;
    }
    if(n == 1){ //���Լ����1������
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    vector<int> v;
    v.push_back(1);
    for(int i = 2; i < k; ++i){
        if(prime(i, k)){
            v.push_back(i);
        }
    }
    double r1 = (double)n1 / (double)m1;
    double r2 = (double)n2 / (double)m2;
    double lower, greater;
    if(r1 > r2){
        greater = r1;
        lower = r2;
    }
    else{
        greater = r2;
        lower = r1;
    }
    bool first = true;
    for(int i = 0; i < v.size(); ++i){
        double result = (double)v[i] / (double)k;
        if(first && result > lower && result < greater){
            first = false;
            printf("%d/%d", v[i], k);
        }
        else if(result > lower && result < greater){
            printf(" %d/%d", v[i], k);
        }
    }
    printf("\n");
    return 0;
}
