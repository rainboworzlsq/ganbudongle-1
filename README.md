# ganbudongle
一些东西的说明和备忘
备忘：组织邀请成员的链接
https://github.com/organizations/rainbowTableForMd5Cracker/invite

需要include的.h
#include "src.h"
#include "MessageDigestAlgorithm5.h"

原串最长为8位，每一位有95种可见字符的可能，可见字符是ascii码32-126
已有的全局变量说明

	const int max_length=8;//原串最长长度
	const char min_charaterize=32;//最小的字符
	const char max_charaterize=126;//最大的字符
	const int total_charaterize=max_charaterize+1-min_charaterize;//字符个数
	const int total_charaterize2=total_charaterize*total_charaterize;//2个字符所能表示的可能数
	const int total_charaterize3=total_charaterize2*total_charaterize;//3个字符所能表示的可能数
	const int total_charaterize4=total_charaterize3*total_charaterize;//4个字符所能表示的可能数

 

已经有的类及其方法说明
需要

	class src{
	        public:
	                int length; //原串长度
	                string s; /原串
	                src(); //初始化
	                src(const string &a); /用string初始化
	                src(const char *a); //用char数组初始化
	                void set(const string &a);//用string设置原串
	                void set(const char *a);//用char数组设置原串
	                void set(const int len);//设置原串长度，默认原串为 len个a组成
	                void random(const int len);//随机产生长度为len的原串
	                void random(void);//随机产生原串(会随机产生长度和随机生成该长度的字符串)
	                string cal_md5(void);//计算并返回md5
	                void print();//输出原串
	                void print_md5();//计算并输出md5
	                void print_pair();//输出原串 md5
	                void init();
	        private:
	                void random_length(void);//随机产生长度
	};
 

已经使用的全局变量（意味着你们命名应该避开）

	string std_length_str[max_length+1];//这个无需理会
	CMessageDigestAlgorithm5 Md5_productor;//这个是一个Md5生成器
	//Md5_productor（string）即可返回该string的md5串

