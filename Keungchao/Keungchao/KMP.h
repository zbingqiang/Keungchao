#pragma once

/* �����ַ���ƥ��
   ƥ�䷽����
        1��Ѱ�������ͬǰ��׺����ֵ����Next
		   ע��Ϊʲô��k=next[k]���е������Ǻ��˽�
		2������ĳ���ַ���ƥ��ʱ���ݵ�Next[j]��������ƥ��

*/

#define aim_len 10

//  �ҵ�һ�������������ͬǰ׺��׺����ֵ
//  ԭ��
void GetNext(char* p, int next[]);
void GetNextval(char* p, int next[]);

//����KMPƥ��
int KMP(char* area, char* aim);