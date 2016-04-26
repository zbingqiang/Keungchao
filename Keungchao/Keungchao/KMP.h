#pragma once

/* 进行字符串匹配
   匹配方法：
        1：寻找最大相同前后缀长度值数组Next
		   注：为什么用k=next[k]进行迭代不是很了解
		2：当在某个字符不匹配时回溯到Next[j]继续进行匹配

*/

#define aim_len 10

//  找到一组数组中最大相同前缀后缀长度值
//  原理：
void GetNext(char* p, int next[]);
void GetNextval(char* p, int next[]);

//进行KMP匹配
int KMP(char* area, char* aim);