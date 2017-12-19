#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "src.h"
int main()
{
	srand(time(NULL));//这两句不要动
	src_base();//这两句不要动
	
	src a;
	int n;
	n=1000;
	string md5;
	int gb_cnt;
	
	gb_cnt=5;
	while(gb_cnt<0||gb_cnt>4) {
		puts("how many gbs do you want:");
		printf("1\n2\n3\n4\n");
		scanf("%d",&gb_cnt);
	}
	freopen("output.txt","w",stdout);//输出文件名
	int cnt=0;
	string tmp="";
	for (int k=0;k<gb_cnt;k++)
		for (int i=0;i<11511;i++)
			for (int j=0;j<11511;j++)
			{
				cnt++;
				a.random();
				tmp+=a.s+"\n";
				if (cnt==1024) {
					cout<<tmp;
					tmp="";cnt=0;
				}
				//a.print();
			}
				
	fclose(stdout);
	return 0;
}
