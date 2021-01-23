int main()
{
    int num1 = 5951; //Восьмиричная система
    int num2, num3, num4, num5;
    int result,result1;

    num2 = num1 / 1000;
    num3 = num1 / 100 % 10;
    num4 = num1 % 100 / 10;
    num5 = num1 % 10;
    result = (num2 * 512) + (num3 * 64) + (num4 * 8) + (num5 * 1);
}