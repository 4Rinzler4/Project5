#include <stdio.h> //підключеня бібліотек
void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;//оголошення змінних
    printf("Введіть розмір масиву: ");//введення значень
    scanf("%d", &n);
    int a[n];
    int positiveCount = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Введіть елемент a[%d]: ", i);//введення значень
        scanf("%d", &a[i]);

        if (a[i] > 0)
        {
            positiveCount++;
        }
    }
    int b[positiveCount];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[index] = a[i];
            index++;
        }
    }
    sortArray(b, positiveCount);
    printf("Масив b: ");//виведення результатів 
    for (int i = 0; i < positiveCount; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;//кінець програми
}
