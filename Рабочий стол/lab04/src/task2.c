int main()
{
    float a = 123.656f; // Змінна
    int b, c, d, g;
    float y; // Змінна
    float z;
    
    b = a * 1000;
    c = b % 1000; // Післе запятой
    d = b / 1000; // Перед запятой
    if(d == 0){
        return 1;
    }
    else{
        y = (c + 0.0) / d;
    	z = ((int)(y * 100)) / 100.0;
    }
   
}
