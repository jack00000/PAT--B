/*����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ��������������A������һ������B��
����ÿ1λ������A�Ķ�Ӧλ���ϵ����ֽ����������㣺������λ��
��Ӧλ��������Ӻ��13ȡ�ࡪ��������J����10��Q����11��K����12����ż��λ��
��B�����ּ�ȥA�����֣������Ϊ���������ټ�10���������λΪ��1λ��
�����ʽ��
������һ�������θ���A��B����Ϊ������100λ��������������Կո�ָ���
�����ʽ��
��һ����������ܺ�Ľ����
����������
1234567 368782971
���������
3695Q8118
����

1.���ȶ��������ַ�����Ȼ����ݳ��ȲΪ�̵Ĵ���ǰ�油0��Ϊ�˷���֮������㡣
2.������һ�����϶������ַ�����һ�����ˣ��ٰ�λ���Ӻ���ǰ�Աȣ���ÿλ����Ľ�������µ��ַ�����Ȼ����������

Դ����
*/
//C/C++ʵ��
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    string result = "";
    if(s1.size() > s2.size()){ //ǰ�泤 
        int val = s1.size() - s2.size();
        s2 = string(val, '0') + s2;
    }
    else if(s1.size() < s2.size()){ //���泤 
        int val = s2.size() - s1.size();
        s1 = string(val, '0') + s1;
    }
    int count = 1; //λ�� 
    for(int i = s1.size() - 1; i >= 0; --i){
        if(count % 2 == 1){ // ����
            int rest = (s1[i] + s2[i] - 2 * '0') % 13;
            if(rest >=0 && rest < 10){
                result = (char)(rest + '0') + result;
            }
            else if(rest == 10){
                result = "J" + result;
            }
            else if(rest == 11){
                result = "Q" + result;
            }
            else if(rest == 12){
                result = "K" + result;
            }
        }
        else{ //ż�� 
            int tmp = s2[i] - s1[i];
            if(tmp < 0){
                tmp += 10;
            }
            result = (char)(tmp + '0') + result;
        }
        ++count;
    }
    cout << result << endl;
    return 0;
}
