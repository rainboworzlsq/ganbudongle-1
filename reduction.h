#pragma once  
#include<string>  
#include<iostream>  
using namespace std;

const int reduction_cnt=3;
typedef string(*rpf)(const string &);
rpf rp[reduction_cnt];