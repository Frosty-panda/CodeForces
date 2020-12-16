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
	int n = a.length();
	vector <int> b;
	for(int i=0; i<n+1; i++){
		if(i%2 == 0){
			stringstream temp;
			temp << a[i];
			int x;
			temp >> x;
			b.push_back(x);}//pushing only odd values i.e. all except + sign..
		}
	//int n1 = int(sizeof(b)/sizeof(b[0]));
	sort(b.begin(), b.end());
	int j=0;
	for(int i=0; i< n; i++){
		if(i%2 == 0){
			cout<< (b[j]);
			j += 1;}
		else{
			cout<<"+";
			}
		}
	}
