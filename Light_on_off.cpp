#include<iostream>
#include<cstdlib>
#include <vector>
using namespace std;

void run(){
	int people =0;
	int light = 0;
	cout <<"�H��:"<<" " <<"�O��" << endl; 
	cin >> people >> light;
	int all_light[light]={0};
	int all_light_len = sizeof(all_light)/sizeof(all_light[0]);
	int count = 0;
	 
	for(int i = 1; i <= people ; i++){
		for(int j = 0; j < all_light_len; j++){
			if(i%2 !=0 &&  (j+1) % i == 0 ){
				all_light[j] = 1;
			}//if(�H���_�� �B �O������ )
			
			
			else if(i%2 ==0 && (j+1) % i ==0 ){
				all_light[j] = 0;
			}//else if( �H������ �B �O������ )
		
		}//for(�C���M���Ҧ��O)
		cout << "��" << i << "�H���G:"<<endl; 
		
		for(int i = 0 ;  i < all_light_len; i++ ){
			cout << all_light[i]<< endl;
		}//for(�M�� all_light)
		
		
		
	}//for(�H��)
	
	for(int i = 0 ;  i < all_light_len; i++ ){
		if(all_light[i]==1 ){count++;}
	}//for(�M�� all_light)
	cout <<"�̲׫G:" << count <<"���O" << endl; 
		
}//rum()



int main(){
	run();
	
}//main()
/*
1 1 1 1 1
1 0 1 0 1
1 0 1 0 1
*/
