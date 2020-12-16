#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'}; 

	string a;
	getline(cin, a);
	transform(a.begin(), a.end(), a.begin(), ::tolower);//makes it lowercase 
	for(int i=0; i<int(a.length()); i++){
		
		if(find(vowels.begin(), vowels.end(), a[i]) == vowels.end()){
			cout<<"."<<a[i];
		}	
	}
}
