/*�����ձ������ͨ���ɡ��֡������ۡ������ڡ�������Ҫ������ɡ�����������Ǽ���һ����������ǰ����и�ʽ����ģ�
[����]([����][��][����])[����]
�ָ�����ѡ�õķ��ż��ϣ����㰴�û���Ҫ��������顣
�����ʽ��
����������ǰ����˳���Ӧ�����֡��ۡ��ڵĿ�ѡ���ż���ÿ����������һ�Է�����[]�ڡ�
��Ŀ��֤ÿ�����϶�������һ�����ţ���������10�����ţ�ÿ�����Ű���1��4���ǿ��ַ���
֮��һ�и���һ��������K��Ϊ�û�����ĸ��������K�У�ÿ�и���һ���û��ķ���ѡ��
˳��Ϊ���֡����ۡ��ڡ����ۡ����֡�������ֻ������������Ӧ�����е���ţ���1��ʼ�������ּ��Կո�ָ���
�����ʽ��
��ÿ���û�������һ����������ɵı��顣���û�ѡ�����Ų����ڣ��������Are you kidding me? @\/@����
����������
[�r][�q][o][~\][/~] [<][>]
[�s][�t][ ^][-][=][>][<][@][��]
[��][��][_][��][^] ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
���������
�r(�s���t)�q
<(@��=)/~
o(^��^)o
Are you kidding me? @\/@
����

�ȸ������еı��飬�����Ӧ�������У����õ���string���飬�����������һ���ѵ㣬
���Ǹ���string.find�����ҵ������ţ�Ȼ����string.substr��������󣬴�������ġ�֮��Ҫ��������ɡ�

�����Ŀӣ�
1.getline(cin,string)֮����Ҫ���cin����������

cin.sync();
cin.clear();
2.��Ŀ˵������ֻ������������Ӧ�����е���ţ���1��ʼ����
3.�����Ǹ��۾����������߼�Ӣ������

���еĿ�ȫ����һ�飬Ҫ��Ҫ��������

Դ����
*/
//C/C++ʵ��
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string hands, eyes, mouths;
    vector<string> hands_v(1), eyes_v(1), mouths_v(1); //�ȷ�һ��ռλ��
    //input hands
    int i = 0;
    getline(cin, hands);
    int end = hands.find(']', i);
    while(end != -1){
        int start = hands.find('[', i);
        hands_v.push_back(hands.substr(start + 1, end - start - 1));
        i = end + 1;
        end = hands.find(']', i);
    }
    cin.sync();
    cin.clear();
    //input eyes
    i = 0;
    getline(cin, eyes);
    end = eyes.find(']', i);
    while(end != -1){
        int start = eyes.find('[', i);
        eyes_v.push_back(eyes.substr(start + 1, end - start - 1));
        i = end + 1;
        end = eyes.find(']', i);
    }
    cin.sync();
    cin.clear();
    //input mouths
    i = 0;
    getline(cin, mouths);
    end = mouths.find(']', i);
    while(end != -1){
        int start = mouths.find('[', i);
        mouths_v.push_back(mouths.substr(start + 1, end - start - 1));
        i = end + 1;
        end = mouths.find(']', i);
    }
    cin.sync();
    cin.clear();
    int n;
    scanf("%d", &n);
    int tmp;
    for(int j = 0; j < n; ++j){
        string result = "";
        //����
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < hands_v.size()){
            result += hands_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //����
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < eyes_v.size()){
            result += ("(" + eyes_v[tmp]);
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //��
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < mouths_v.size()){
            result += mouths_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //����
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < eyes_v.size()){
            result += (eyes_v[tmp] + ")");
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        //����
        scanf("%d", &tmp);
        if(tmp > 0 && tmp < hands_v.size()){
            result += hands_v[tmp];
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        cout << result << endl;
    }
    return 0;
}
