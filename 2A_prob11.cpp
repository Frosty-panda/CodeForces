#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> x(n);
	for(int i=0; i<n; i++){
		cin >> x[i];
		}
	int high = 0;
	int low = n-1;
	for(int i=0; i<n; i++){
		if(x[i] > x[high])
			high = i;//finding greatest of all from left
		int j= n-1-i;
		if(x[j]< x[low])		
			low = j;//finding lowest from right
		
		}
	int count = 0;
	
	
/*	while(true){
		if(high > 0){
			//Taking care of the case when low and high are adjacent....
			//bcoz it would lead to making the new low as "low - 1"
			if(high == low+1){
				int temp;
				int y;
				temp = x[low];
				y = low;
				x[low] = x[high];
				low = high;
				high = y;
				x[high] = temp;
				count += 1;}
			
			int temp;
			temp = x[high];
			x[high] = x[high-1];
			x[high-1] = temp;
			high = high - 1;
			count += 1;}
		
		if(low < n-1){
			
			if(high == low+1){
				int temp;
				int y;
				temp = x[low];
				y = low;
				x[low] = x[high];
				low = high;
				high = y;
				x[high] = temp;
				count += 1;}
			
				int temp;
				temp = x[low];
				x[low] = x[low+1];
				x[low+1] = temp;
				low += 1;
				count += 1;}
		
		if(high == 0 && low == n-1){
			break;}
	
	
	//cout<< count<<endl;
		}
*/
	if(high > low){
		count -= 1;}
	count += high;
	count += n-1-low;
	cout << count;

}
