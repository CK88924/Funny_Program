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
		cout << "�︹:"; 
		cin >> num;
		guess[i] = num;
		cout << endl;
		
	}// for(��J�︹)
	
	cout <<"�S�O���︹:";
	cin >> choose_sp; // �S�O���︹ 
	cout << endl;
	
	
	
	for(int i = 0 ; i < 6 ; i++ ) {
		for(int j = 0 ; j < 6 ; j++ ) {
			if (guess[i] == ans[j] )  {
				res.push_back(true);
				
			}// if(����}�C�r�ꤸ��)
			
		}// for(���O�_����(�����}�C))
		
	}// for(���O�_����(�︹�}�C))
	
	int counter = count( res.begin(), res.end(), true);
	
	if(counter == 6 ){ cout << "�Y��";}
	
	else if (counter == 5 && choose_sp == sp  ){ cout << "�G��";}
	else if (counter == 5   ){ cout << "�T��";}
	
	else if (counter == 4 && choose_sp == sp  ){ cout << "�|��";}
	else if (counter == 4  ){ cout << "����";}
	
	else if (counter == 3 && choose_sp == sp  ){ cout << "����";}
	else if (counter == 2 && choose_sp == sp  ){ cout << "�C��";}
	else if (counter == 3 ){ cout << "����";}
	
} // Draw()




int main() {
	string ans[6] = {"08","13","20","28","33","40" };
	Draw(ans,"06");
	
	
} // main()


