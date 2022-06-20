#include<stdlib.h>
#include<iostream>
#include<vector>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

void Draw(string ans[6], string sp ) {
	vector<bool> res;
	string guess[6] = {""} ;
	string num = "";
	string choose_sp = "";
	
	for(int i = 0 ; i < 6 ; i++){
		cout << "選號:"; 
		cin >> num;
		guess[i] = num;
		cout << endl;
		
	}// for(輸入選號)
	
	cout <<"特別號選號:";
	cin >> choose_sp; // 特別號選號 
	cout << endl;
	
	
	
	for(int i = 0 ; i < 6 ; i++ ) {
		for(int j = 0 ; j < 6 ; j++ ) {
			if (guess[i] == ans[j] )  {
				res.push_back(true);
				
			}// if(比較陣列字串元素)
			
		}// for(比對是否中獎(中獎陣列))
		
	}// for(比對是否中獎(選號陣列))
	
	int counter = count( res.begin(), res.end(), true);
	
	if(counter == 6 ){ cout << "頭獎";}
	
	else if (counter == 5 && choose_sp == sp  ){ cout << "二獎";}
	else if (counter == 5   ){ cout << "三獎";}
	
	else if (counter == 4 && choose_sp == sp  ){ cout << "四獎";}
	else if (counter == 4  ){ cout << "五獎";}
	
	else if (counter == 3 && choose_sp == sp  ){ cout << "六獎";}
	else if (counter == 2 && choose_sp == sp  ){ cout << "七獎";}
	else if (counter == 3 ){ cout << "普獎";}
	
} // Draw()




int main() {
	string ans[6] = {"08","13","20","28","33","40" };
	Draw(ans,"06");
	
	
} // main()


