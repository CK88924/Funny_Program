#include<iostream>
#include<cstdlib>
#include <vector>
using namespace std;

void run(){
	int people =0;
	int light = 0;
	cout <<"计:"<<" " <<"縊计" << endl; 
	cin >> people >> light;
	int all_light[light]={0};
	int all_light_len = sizeof(all_light)/sizeof(all_light[0]);
	int count = 0;
	 
	for(int i = 1; i <= people ; i++){
		for(int j = 0; j < all_light_len; j++){
			if(i%2 !=0 &&  (j+1) % i == 0 ){
				all_light[j] = 1;
			}//if(计  縊计 )
			
			
			else if(i%2 ==0 && (j+1) % i ==0 ){
				all_light[j] = 0;
			}//else if( 案计  縊计 )
		
		}//for(–Ω筂菌┮Τ縊)
		cout << "材" << i << "挡狦:"<<endl; 
		
		for(int i = 0 ;  i < all_light_len; i++ ){
			cout << all_light[i]<< endl;
		}//for(筂菌 all_light)
		
		
		
	}//for(计)
	
	for(int i = 0 ;  i < all_light_len; i++ ){
		if(all_light[i]==1 ){count++;}
	}//for(筂菌 all_light)
	cout <<"程沧獹:" << count <<"辐縊" << endl; 
		
}//rum()



int main(){
	run();
	
}//main()
/*
1 1 1 1 1
1 0 1 0 1
1 0 1 0 1
*/
