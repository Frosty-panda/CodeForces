#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	string a;
	string b;
	getline(cin, a);
	getline(cin, b);
	transform(a.begin(), a.end(), a.begin(), ::tolower);//makes it lowercase 
	transform(b.begin(), b.end(), b.begin(), ::tolower);//makes it lowercase 
	char a1[a.length()+1];
	char b1[b.length()+1];
	strcpy(a1, a.c_str());
	strcpy(b1, b.c_str());
	int f = strcmp(a1, b1);
	
	cout<< f;
	}
