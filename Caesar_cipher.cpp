#include <stdio.h>
#include<stdlib.h>
char Reference_Table[]={'a','b','c','d',
                        'e','f','g','h',
						'i','j','k','l',
						'm','n','o','p',
						'q','r','s','t',
						'u','v','w','x','y','z'};//办跑计 
						
char * Caesar_Cipher_Encode(char code[],int a,char ch, int b){
	static char encode[26];
	int num[26];
	int ref_len = sizeof(Reference_Table)/sizeof(Reference_Table[0]);
	int code_len = sizeof(code)/sizeof(code[0]);
	int num_len = sizeof(num)/sizeof(num[0]);
	int index = 0;
	for(int i = 0 ; i < num_len; i++){
		num[i] = 0;
	}// for(﹍て num)
	
	for(int i = 0;  i < code_len; i++){
		for(int j = 0 ; j < ref_len; j++ ){
			if(Reference_Table[j] == code[i] ){
				printf("%d\t", (j+1));
			}//if(т才竚)
		} // for(筂菌把酚皚) 
	}//for(筂菌盞絏皚) 
	printf("\n");
	
	
	
	for(int i = 0;  i < code_len; i++){
		for(int j = 0 ; j < ref_len; j++ ){
			if(Reference_Table[j] == code[i] ){
				if(ch == '+' ){
					if( (((((j+1) * a)) + b)  %26 ) != 0 ){
					printf("%d\t",((((j+1) * a)) + b)  %26 );
					num[index] = ((((j+1) *a )+ b) % 26 );
					index++;
						
					} // if( != 0)
					else{
						printf("%d\t",((((j+1) * a)) % 26 )  + b );
						num[index] = ((((j+1) *a )% 26 ) + b );
						index++;
					}//else(==0)
					
				
				} // if(ch == +)
				
			
			}//if(т才竚)
		} // for(筂菌把酚皚) 
	}//for(筂菌盞絏皚)
	printf("\n"); 
	index = 0;
	
	for(int i = 0 ; i < num_len; i++){
		printf("%c\t", Reference_Table[num[i]-1] );
		encode[index] = Reference_Table[num[i]-1];
		index++; 
	}//for(筂菌锣传皚)
	return encode;	
} // Caesar_Cipher_Encode()






char *Caesar_Cipher_Decode(char *code , int a, char ch , int b){
	static char decode[26];
	int num[26];
	int ref_len = sizeof(Reference_Table)/sizeof(Reference_Table[0]);
	int code_len = sizeof(code)/sizeof(code[0]);
	int num_len = sizeof(num)/sizeof(num[0]);
	int index = 0;
	
	for(int i = 0 ; i < num_len; i++){
		num[i] = 0;
	}// for(﹍て num)
	
	
	
	for(int i = 0;  i < code_len; i++){
		for(int j = 0 ; j < ref_len; j++ ){
			if(Reference_Table[j] == code[i] ){
				printf("%d\t", (j+1));
			}//if(т才竚)
		} // for(筂菌把酚皚) 
	}//for(筂菌盞絏皚) 
	printf("\n");
	
	for(int i = 0;  i < code_len; i++){
		for(int j = 0 ; j < ref_len; j++ ){
			if(Reference_Table[j] == code[i] ){
				if(ch == '+' ){
					
					if( (((((j+1) * a)) + b)  %26 ) != 0 ){
						printf("%d\t",((((j+1) * a)) + b)  %26 );
						num[index] = ((((j+1) *a )+ b) % 26 );
						index++;
						
					} // if( != 0)
					else{
						printf("%d\t",((((j+1) * a)) % 26 )  + b );
						num[index] = ((((j+1) *a )% 26 ) + b );
						index++;
					}//else(==0)
					
				
				} // if(ch == +)
			
			
			}//if(т才竚)
		} // for(筂菌把酚皚) 
	}//for(筂菌盞絏皚)
	printf("\n"); 
	
	index = 0;
	
	for(int i = 0 ; i < num_len; i++){
		printf("%c\t", Reference_Table[num[i]-1] );
		decode[index] = Reference_Table[num[i]-1];
		index++; 
	}//for(筂菌锣传皚)

	return decode;
	
	
}//Caesar_Cipher_Decode() 
						
int main(){
	char code[26];
	printf("Enter Code: ");
	scanf("%s", &code);
	char * get_code = Caesar_Cipher_Encode(code,3,'+',5 );;
	printf("\n");
	Caesar_Cipher_Decode(get_code, 9, '+', 7 );

  // 盞g: (7,0)	 秆盞 z(5,0) 
	   
}//main()
