int main()
{
    float HRN = 28.5f; //Гривні
    const float USD = 0.03555f; //Долари
    float EUR = 0.030f; //Евро
    float RUB = 2.72f; //Рус. рубиль
    float resultUSD, resultEUR, resultRUB; //Переменная с результатами 

    resultUSD = HRN * USD; // Конвертер в долар
    resultEUR = HRN * EUR; // Конвертер в евро
    resultRUB = HRN * RUB; // Конвертер в рубиль
}