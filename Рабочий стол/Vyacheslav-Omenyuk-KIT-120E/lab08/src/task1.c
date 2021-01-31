#include <stdio.h>

int func_lab5(int b) {

    int n = 10;
    b = n;
    int a = 0;
    int j = 0; //зміна j
    int k = 0; //зміна k

    for (int i = 0; i <= n; i++) //цикл i до n
    {
        if (i % 7 == 0) //якщо  i ділиться без остачі
        {
            a = i; // i змінюемо на а
        }
    }

    while (j <= n) { //цикл j до n
        j++; // збільшення 
        if (j % 7 == 0) //якщо j ділиться без остачі
        {
            a = j; // j змінюемо на а
        }
    }
    do {
        k++; // збільшення 

    } while (k <= n); { //цикл k до n
        if (k % 7 == 0) //якщо k ділиться без остачі
        {
            a = k; // k змінюемо на а
        }
        
    }
    return 0;
}

int func_lab6(int bb)
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



int main()
{
    int dilen7 = func_lab5(0);
    int soglasni = func_lab6(0);
}
