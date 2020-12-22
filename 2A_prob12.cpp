#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	int m;
	cin >> n >> m;
	int k=0;
	while(n*m != 0){
		n -= 1;
		m -= 1;
		k += 1;
		}
	if(k%2 != 0)	
		cout <<"Akshat";
	else
		cout <<"Malvika";
}
