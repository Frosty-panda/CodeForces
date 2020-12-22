#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	vector< vector<int> > v(5, vector<int>(5));//2D Vector
	v = {{0,0,0,0,0},
		 {0,0,0,0,0},
		 {0,0,0,0,0},
		 {0,0,0,0,0},
		 {0,0,0,0,0}};
		 int i0,j0;//marker to store i and j values of 1
	//making of the vector was not necessary...
	// still made the 2D matrix... 
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			int temp;
			cin >> temp;
			//v[i][j] = temp;
			if(temp == 1){
				i0 = i+1;
				j0 = j+1;
				v[i][j] = temp;
				}
			}
		}
	int count = 0;
	while(true){
		if(i0 < 3){
			count += 1;
			i0 += 1;}
		if(i0 > 3){
			count += 1;
			i0 = i0 - 1;}
		if(j0 < 3){
			count += 1;
			j0 += 1;}
		if(j0 > 3){
			count += 1;
			j0 -= 1;}
		if(j0 == 3 && i0 == 3){
			break;}
		}
	cout << count;
}
