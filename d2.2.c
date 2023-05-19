#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10//розмір масиву
int main(){
    int array[SIZE];
    int product = 1;//добуток ненульових елементів
    int sum = 0;//сума модулів елементів після першого від'ємного елемента
    int negativeFound = 0;//прапорець для позначення знаходження першого від'ємного елемента
    //ініціалізація генератора псевдовипадкових чисел
    srand(time(NULL));
    //заповнення масиву випадковими числами
    for (int i = 0; i < SIZE; i++){
        array[i] = rand() % 201 - 100;//випадкове число від -100 до 100
    }
    //виведення масиву на екран
    printf("Масив: ");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
printf("\n");
//обчислення добутку ненульових елементів масиву
for (int i = 0; i < SIZE; i++){
    if (array[i] != 0) {
        product *= array[i];
    }
}
//обчислення суми модулів елементів після першого від'ємного елемента
for (int i = 0; i < SIZE; i++) {
    if(negativeFound) {
        sum += abs(array[i]);
    }else if (array[i] < 0){
        negativeFound = 1;
    }
}  
//виведення результатів  
printf("Добуток ненульових елементів: %d\n", product);
printf("Сума модулів елементів після першого від'ємного елемента: %d\n", sum);
return 0;
}