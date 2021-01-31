#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	const int N = 48;
	const int LL = 255;
	char GL[48] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    char str[255] = "HLor"; //масив
    char a,b;
    int z = 0;
    char p;
    int c=0;


    for(int i = 0;i <= N;i++)
    	for(int j = 0;j <= LL;j++){
   
    	if(GL[i] == str[j]){
     		z++;
     	}
      }
    
    return 0;
}
