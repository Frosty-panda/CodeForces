//FOR MORE REFER
//https://www.geeksforgeeks.org/string-find-in-cpp/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	string a;
	getline(cin, a);
	string ho = "helo";
	int h,e,l1,l2,o;
	int e0, l10, l20;
	h = a.find(ho[0]);//give index of first occuring "h"
	a = a.substr(h+1);
	
	e = a.find(ho[1]);//give index of first occuring "e" AFTER h index 
	e0 = e+h;
	a = a.substr(e+1);
	
	l1 = a.find(ho[2]);//give index of first occuring "l" AFTER e-th index 
	l10 = l1 + e0;
	a = a.substr(l1+1);
	
	l2 = a.find(ho[2]);//give index of 2nd occuring "l" AFTER l1 index 
	l20 = l2 + l10;
	a = a.substr(l2+1);
	
	o = l20 + a.find(ho[3]);//give index of first occuring "o" AFTER l2 index 
	
	if(h <= e0 && e0 <= l10 && l10 <= l20 && l20 <= o){
		cout<<"YES";}
	else{
		cout<<"NO";
		//cout<<e0;
		}
	}
