/*����Ļ���Ҫ��ǳ��򵥣�����N��ʵ�����������ǵ�ƽ��ֵ�������ӵ�����Щ�������ݿ����ǷǷ��ġ�
һ�����Ϸ�����������[-1000��1000]�����ڵ�ʵ����������ྫȷ��С�����2λ���������ƽ��ֵ��ʱ��
���ܰ���Щ�Ƿ������������ڡ�
�����ʽ��
�����һ�и���������N��<=100�������һ�и���N�������������ּ���һ���ո�ָ���
�����ʽ��
��ÿ���Ƿ����룬��һ���������ERROR: X is not a legal number��������X�����롣
�����һ��������������The average of K numbers is Y��������K�ǺϷ�����ĸ�����Y�����ǵ�ƽ��ֵ��
��ȷ��С�����2λ�����ƽ��ֵ�޷����㣬���á�Undefined���滻Y�����KΪ1���������The average of 1 number is Y����
��������1��
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
�������1��
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
��������2��
2
aaa -9999
�������2��
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined
����

����ķ����ǣ�
1.���г��ȣ�̫��ֱ��out��
2.������ȷ��ϣ���ʼ����������С�������Ŀ���������1�����Ƿ�����һ�������з����ַ�С����������Ҳ�϶�Ϊ�Ƿ���
3.���ⲽ��϶���ֻ�����ֺ�С���㻹�и��ŵ�����ˣ����ų�С������泬����λ��������ó���-С������������Ƿ����3����
����ȥ�����������С���㿪ͷ��������Լ����������С�����ڵ�2��λ�ã�����Ϊ1������������Ż�����С�����β�������
ҲҪ���ǽ�ȥ������һ��Ҳ������ⲻ�Ͻ��ĵط�������϶���С�����β�����Ϊ�Ƿ�������ĸ����Ե��޷�ͨ����ȥ������ͨ����

�����³���000000.1������������ǰѶԳ��ȵ��ж�ȥ���ˣ�����������е�4�����Ե㲢û���������ݡ�

�����Ŀӣ�
1.stringstreamת��ʱ��Ҫ������պ�����״̬��־�Ĳ������������������������

stringstream.clear(); //����stringstream��״̬��־
stringstream.str(""); //�������
2.��֪���ǲ��ǿӣ����Ǹĵ��ˣ����ǿ�ʼ����double�ͱ���>=1000�Ƚϵģ�������double��int����ȱȽϳ����⣬
���Ի���ֻ�Ƚ�double�ͱ���<1000�Ƚϱ���һЩ��
3.ԭ������˵������k=1ʱ���number������numbers��

Դ����
*/
//C/C++ʵ��
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string tmp;
    double tmp_d;
    int tmp_i;
    stringstream ss;
    int correctCount = 0;
    double sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        bool correct = true;
        bool minus = false; 
        if(tmp[0] == '-'){
            minus = true;
        }
        int count = 0; //����С����ĸ���
        int j = (minus == false ? 0 : 1);
        for(; j < tmp.size(); ++j){
            if(tmp[j] == '.'){
                ++count;
                if(count > 1){ //С�����������1 
                    correct = false;
                    break;
                }
            }
            else if(tmp[j] >= '0' && tmp[j] <= '9'){
                continue;
            }
            else{ //��С���������
                correct = false;
                break;
            }
        }
        if(!correct){
            cout << "ERROR: " << tmp << " is not a legal number" << endl;
        }
        else{
            if(count == 0){ //���� 
                ss << tmp;
                ss >> tmp_i;
                ss.clear(); //����stringstream��״̬��־
                ss.str(""); //�������
                if(tmp_i < -1000 || tmp_i > 1000){
                    correct = false;
                }
                else{
                    sum += tmp_i;
                    ++correctCount;
                }
            }
            else{ //С�� 
                int point = tmp.find('.');
                if(tmp.size() - point > 3){ //С������泬��2λ 
                    correct = false;
                }
                //else if(point == tmp.size() - 1){ //С���������һλ��Ҳ���� 
                //    correct = false;
                //}
                else if(minus == true && point == 1){ //���磺-.x
                    correct = false;
                }
                else if(minus == false && point == 0){ //���磺.x
                    correct = false;
                }
                else{
                    ss << tmp;
                    ss >> tmp_d;
                    ss.clear(); //����stringstream��״̬��־
                    ss.str(""); //�������
                    if(tmp_d < -1000 || tmp_d > 1000){
                        correct = false;
                    }
                    else{
                        sum += tmp_d;
                        ++correctCount; 
                    }
                }
            }
            if(!correct){
                cout << "ERROR: " << tmp << " is not a legal number" << endl;
            }
        }
    }
    if(correctCount == 0){
        printf("The average of 0 numbers is Undefined\n");
    }
    else if(correctCount == 1){
        printf("The average of 1 number is %.2f\n", sum);
    }
    else{
        printf("The average of %d numbers is %.2f\n", correctCount, sum / correctCount);
    }
    return 0;
}
