/*����������13���Ƽ����ģ�

�����˵�0�������˳�Ϊtret��
����������1��12�Ļ����ķֱ�Ϊ��jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec��
�����˽���λ�Ժ��12����λ���ֱַ��Ϊ��tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou��
��������˵����֡�29������ɻ����ľ��ǡ�hel mar�����������ġ�elo nov����Ӧ�������֡�115����Ϊ�˷��㽻���������д����ʵ�ֵ���ͻ�������֮��Ļ��롣
�����ʽ��
�����һ�и���һ��������N��<100�������N�У�ÿ�и���һ��[0, 169)�����ڵ����� ���� �����ǵ����ģ������ǻ����ġ�
�����ʽ��
��Ӧ�����ÿһ�У���һ���������������һ�����Ե����֡�
����������
4
29
5
elo nov
tam
���������
hel mar
may
115
13
����

��������⣬�ҵ�һ�ξͺ���Ȼ��д�˸�����ת���ķ��������Ƿ��ֲ�������ô�鷳����Ҫ��ϸ�������������Ŀ������д��[0,169)�����֣�����һ����13������ֻ��������λ�������Բ�����ô�鷳��ֻҪ��������������ǵ��ͺ��ˡ�
1.���ȸ�����λ�ַ��ж��ǵ������ֻ��ǻ������֣�Ȼ��ֱ�д��������
2.������΢���Ѷȵľ��ǶԻ������ֵĴ��������ȷ��࣬�ҷֳ���С�ڵ���4λ�������4λ���ϵ����롣ǰ���п�����0-12��Ҳ�п�����13��������������������Ҫע����ǣ��������ֳ��˵�����0��ʱ��д0��ֻҪ��λ������������λ���������0��ʡ�Բ�д�����߿϶���>13�Ļ������֣�����0-2λ���λ���Ļ������ֱȽϣ������ͬ�������������4-6λ���λ���Ļ������ֱȽϣ������ͬ����������ɡ�
�����ҵķ���������һ���Ӿ��ǣ�
equal�ķ�Χ������ҿ����䣬������Ƚ�0-2λ�Ļ�����Ҫ�Ƚϵ�s.begin()+3��λ���ϣ�����0-2λ��

���⣬����⻹��Ҫע��ĵ��У�
1.��Ϊ��Ҫ������ո���ַ���������Ҫ����getline(cin, s);
2.��getline֮ǰҪ���cin��

cin.clear();
cin.ignore();
Դ����
*/
//C/C++ʵ��
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string mars1[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string mars2[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    cin >> n;
    cin.clear(); 
    cin.ignore();//������getline������Ҫ���cin�� 
    string s;
    for(int i = 0; i < n; ++i){
        getline(cin, s);
        if(s[0] >= '0' && s[0] <= '9'){ //�������� 
            stringstream ss;
            ss << s;
            int num;
            ss >> num;
            if(num < 13){
                cout << mars1[num] << endl;
            }
            else{
                if(num % 13 == 0){
                    cout << mars2[num / 13] << endl;
                }
                else{
                    cout << mars2[num / 13] << " " << mars1[num % 13] << endl;
                }
            }
        }
        else{ //�������� 
            if(s.size() <= 4){
                for(int j = 0; j < 13; ++j){
                    if(s == mars1[j]){
                        printf("%d\n", j);
                        break;
                    }
                    else if(s == mars2[j]){
                        printf("%d\n", j * 13);
                        break;
                    }
                }
            }
            else{
                int num = 0;
                for(int j = 0; j < 13; ++j){
                    if(equal(s.begin(), s.begin() + 3, mars2[j].begin())){ //equal��Χ������ҿ����䣬����Ҫ+3 
                        num += j * 13;
                        break;
                    }
                }
                for(int j = 0; j < 13; ++j){
                    if(equal(s.begin() + 4, s.end(), mars1[j].begin())){
                        num += j;
                        printf("%d\n", num);
                        break;
                    }
                }
            }
        }
    }
    return 0;
