#include<stdlib.h>
#include<iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
using namespace std;

void Alarm(char on_time [64]){
	while(true) {
		time_t t = time(0);
		char tmp[64];
		strftime( tmp, sizeof(tmp), "%X",localtime(&t) );
		cout << tmp << endl;
		if( strcmp(on_time, tmp ) == 0 ){ MessageBeep(MB_OK);   ; break; }
		system("cls");

	}// while()
	
} // Alarm()

int main()
{
	//Alarm("06:50:00"); // 電子顯示 && 鬧鐘
} // main()


