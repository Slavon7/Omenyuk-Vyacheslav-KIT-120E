#include <stdio.h>
#include <string.h>
 
int main()
{
    
    char *s = "Hello world privet";
  
    int z = 1;
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i-1] ==' ' && s[i] !=' '){
           z++;
        }
    }
        printf("%d", z);
}
