#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

struct x{
	int home;
	int guest;
	}typedef x;

int main(){
	int n;
	cin >> n;
	vector<x> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].home >> v[i].guest;
		}
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(v[i].guest == v[j].home)
				count += 1;
			}
		}
	cout << count;
}
