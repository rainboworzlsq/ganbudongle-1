//src.h
#pragma once  
#include <string>  
#include <iostream>
#include <string.h>
#include "MessageDigestAlgorithm5.h"

const int max_length=8;
const char min_charaterize=32;
const char max_charaterize=126;
const int total_charaterize=max_charaterize+1-min_charaterize;
const int total_charaterize2=total_charaterize*total_charaterize;
const int total_charaterize3=total_charaterize2*total_charaterize;
const int total_charaterize4=total_charaterize3*total_charaterize;

void src_base();

class src{
	public:
		int length;//原串长度
		string s;//原串
		src();//初始化
		src(const string &a);//用string初始化
		src(const char *a);//用char数组初始化
		void set(const string &a);//用string设置原串
		void set(const char *a);//用char数组设置原串
		void set(const int len);//设置原串长度，默认原串为 len个a组成
		void random(const int len);//随机产生长度为len的原串
		void random(void);//随机产生原串
		string cal_md5(void);//计算并返回md5
		void print();//输出原串
		void print_md5();//计算并输出md5
		void print_pair();//输出原串 md5
		void init();
	private:
		void random_length(void);//随机产生长度
};