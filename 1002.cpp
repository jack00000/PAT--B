#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//�����ַ��� 
	int j;
	char c[101];
	scanf("%s",c);
	//�ж� ��1��ֻ��P T��һ������P��ǰ�����඼��A��2��PT��������һ��    ����ȷ 
	int count=0,count1=0,count2=0;
	//ֻ��һ��p 
	for(j=0;j<=strlen(c);j++)
	{
		c[j]='P';
		count++; 
		if(count==2)
		{
		cout<<"NO"<<'\n';
		break;
		
		
	    }
		else {		
	         //ֻ��һ��T 
	         for(j=0;j<=strlen(c);j++)
	       {
		    c[j]='T';
		       count1++; 
		      if(count1==2)
		     {
			 cout<<"NO"<<'\n';break;}
		     //PT������ 
		        else
				 {
				 	string s=c;
				 	    count=s.find("P");//���ַ���Ӧλ�� 
					 	count1=s.find("T");
				 	j=count-count1;
				 	if(j<=-2)
				 	{
				 		cout<<"NO"<<'\n';
				 		break;
					 }
					 else//���඼��A 
					 {
					 	for(j=0;j<=count||count<j<count1||count1<j<=strlen(c);j++)
						 {
						 	if(c[j]=='A'){
							 
						 	cout<<"YES"; break;}
						 	else{
							 cout<<"NO";
						 	break;}
						  } 
						  break;
					 	
					 }
					 break;
				}
				break; 
            
                
			}
			break;
				     
		}	 		
	}
} 
 

