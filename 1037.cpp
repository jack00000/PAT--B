/*������ǹ����������ԣ����֪��ħ�����������Լ��Ļ���ϵͳ ����
 ���纣����߹����ģ���ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ�����ɣ������ס���
 ���ڣ���������Ӧ���ļ�ǮP����ʵ����ǮA�����������дһ��������������Ӧ�ñ��ҵ���Ǯ��
�����ʽ��
������1���зֱ����P��A����ʽΪ��Galleon.Sickle.Knut���������1���ո�ָ���
��Galleon��[0, 10^7]�����ڵ�������Sickle��[0, 17)�����ڵ�������Knut��[0, 29)�����ڵ�������
�����ʽ��
��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ�����
��������1��
10.16.27 14.1.28
�������1��
3.2.1
��������2��
14.1.28 10.16.27
�������2��
-3.2.1
����

�����ȶ�����ɵ�λΪKnut�ģ�Ȼ���ټ��㼴�ɣ�ע����Ϊ�������Ҫ��P��ȥA��Ȼ�����P��A��ȣ������0.0.0��
0 
Դ����
*/ 
//C/C++ʵ��
#include <iostream>

using namespace std;

int main(){
    long long priceG, priceS, priceK, payG, payS, payK;
    scanf("%lld.%lld.%lld %lld.%lld.%lld", &priceG, &priceS, &priceK, &payG, &payS, &payK);
    long long priceSum = priceG * 17 * 29 + priceS * 29 + priceK;
    long long paySum = payG * 17 * 29 + payS * 29 + payK;
    if(priceSum > paySum){
        printf("-");
        long long changeSum = priceSum - paySum;
        long long changeG = changeSum / (17 * 29);
        changeSum -= changeG * 17 * 29;
        long long changeS = changeSum / 29;
        changeSum -= changeS * 29;
        long long changeK = changeSum;
        printf("%lld.%lld.%lld\n", changeG, changeS, changeK);
    }
    else if(priceSum == paySum){
        printf("0.0.0\n");
    }
    else{
        long long changeSum = paySum - priceSum;
        long long changeG = changeSum / (17 * 29);
        changeSum -= changeG * 17 * 29;
        long long changeS = changeSum / 29;
        changeSum -= changeS * 29;
        long long changeK = changeSum;
        printf("%lld.%lld.%lld\n", changeG, changeS, changeK);
    }
    return 0;
}
