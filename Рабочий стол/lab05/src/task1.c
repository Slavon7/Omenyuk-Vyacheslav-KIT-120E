int main()
{
    int n = 21; //зміна n
    int a; //зміна а
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