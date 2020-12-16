#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <string> a(n+1);
	for(int i=0; i<n+1; i++){
		getline(cin, a[i]);
		//cout << a[i].length()<<endl;
		}
	for(int i=0; i<n+1; i++){
		if(a[i].length() > 10){
			ostringstream ss;// This is an output string stream
			ss << (a[i].length()-2);//pushing value in ss
			string s2; 
			s2 = ss.str();//converting ss to string using .str() method
			string temp;
			temp = a[i];
			a[i].clear();
			a[i].append(temp, 0 , 1);//appending 1 char from 0th index of temp to a[i]
			a[i].append(s2);
			//cout << *temp;
			a[i].append(temp, temp.length()-1, 1);//appending 1 char from (length-1) index of temp to a[i]
			 }
		}
	for(int i=0; i<n+1; i++){
		cout << a[i]<<endl;
		//cout << a[i].length()<<endl;
		}
	}
