/*�ַ���APPAPT�а������������ʡ�PAT�������е�һ��PAT�ǵ�2λ(P),��4λ(A),��6λ(T)���ڶ���PAT�ǵ�3λ(P),��4λ(A),��6λ(T)��
�ָ����ַ�������һ�������γɶ��ٸ�PAT��
�����ʽ��
����ֻ��һ�У�����һ���ַ��������Ȳ�����10^5��ֻ����P��A��T������ĸ��
�����ʽ��
��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����
����������
APPAPT
���������
2
����

��ʼ��������һ�������㷨�����ʱ�ˣ��Ҫ����10^3�Σ������ٲο��˱��˵Ĵ����ѧ�������������
����˵���ǣ�
��ĩβ��ʼ����
1.���ҵ�T�ĸ�����
2.���ҵ�A�ĸ�����ÿ���ҵ��󶼰�A�����T�ĸ������ϣ���ΪAT�ĸ�����
3.���ҵ�P�ĸ�����ÿ���ҵ��󶼰�P�����AT�ĸ������ϡ�
����1000000007ȡ�����������Ōŵġ�

Դ����
*/
//C/C++ʵ�֣���������ʱ��
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long count = 0;
    int indexP = s.find('P');
    while(indexP != -1){
        int indexA = s.find('A', indexP + 1);
        while(indexA != -1){
            int indexT = s.find('T', indexA + 1);
            while(indexT != -1){
                ++count;
                indexT = s.find('T', indexT + 1);
            }
            indexA = s.find('A', indexA + 1);
        }
        indexP = s.find('P', indexP + 1);
    }
    printf("%lld\n", count % (long long)1000000007);
    return 0;
}
