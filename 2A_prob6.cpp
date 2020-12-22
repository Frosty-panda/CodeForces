#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	int n;//number of coins
	cin >> n;
	vector <int> x(n);//coins
	for(int i=0; i<n; i++){
		cin >> x[i];
		}
	sort(x.begin(), x.end(), greater<int> () );
	int sum=0;
	for(int i=0; i<n; i++){
		sum += x[i];
		}
	int min=0;//min no. of coins
	int me=0;
	int you;
	you = sum-me;
	while(me <= you){
		me +=  x[min];
		you -= x[min];
		min += 1;
		}
	cout << min;
}
