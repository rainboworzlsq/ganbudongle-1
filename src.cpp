#include "src.h"
#include "MessageDigestAlgorithm5.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

string std_length_str[max_length+1];
CMessageDigestAlgorithm5 Md5_productor;

src::src()
{
	length=0;s="";
}
void src_base()
{
	std_length_str[0]="";
	for (int i=1;i<=max_length;i++)
		std_length_str[i]=std_length_str[i-1]+"a";
}
src::src(const string &a)
{
	length=a.length();
	s=a;
}
src::src(const char *a)
{
	length=strlen(a);
	s=a;
}
void src::set(const string &a)
{
	length=a.length();
	s=a;
}
void src::set(const char *a)
{
	length=strlen(a);
	s=a;
}
void src::set(const int len)
{
	length=len;s=std_length_str[len];
}
void src::random(const int len)
{
	int i;
	length=len;s=std_length_str[len];
	for (i=0;i<length;i++)
		s[i]=rand()%total_charaterize+min_charaterize;
}
void src::random(void)
{
	this->random_length();
	this->random(length);
}
void src::random_length(void)
{
	int t;
	t=rand()%(total_charaterize4+1);
	if (t>total_charaterize3) {
		length=4;
	} else if (t>total_charaterize2) {
		length=3;
	} else if (t>total_charaterize) {
		length=2;
	} else if (t>0){
		length=1;
	} else {
		length=0;
	}
	if (length) {
		length+=4;
		return;
	}
	t=rand()%total_charaterize4+1;
	if (t>total_charaterize3) {
		length+=4;
	} else if (t>total_charaterize2) {
		length+=3;
	} else if (t>total_charaterize) {
		length+=2;
	} else {
		length+=1;
	}
}
string src::cal_md5(void)
{
	return Md5_productor.Encode(s);
}
void src::print()
{
	cout<<s<<endl;
}
void src::print_md5()
{
	cout<<this->cal_md5()<<endl;
}
void src::print_pair()
{
	cout<<s<<'\t'<<this->cal_md5()<<endl;
}
void src::init()
{
	cin>>s;length=s.length();
}