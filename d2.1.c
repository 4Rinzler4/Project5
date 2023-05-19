#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    //виділення пам'яті під масив
    int  *arr = (int *)malloc(n * sizeof(int));

//введення елементів масиву з клавіатури
printf("Введіть елементи масиву:\n");
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
//Знаходження добутку ненульових елементів масиву
int product = 1;
for (int i = 0; i < n; i++){
    if (arr[i] != 0){
        product *= arr[i];
    }
}
printf("Добуток ненульових елементів масиву: %d\n", product);
//знаходження суми модулів елементів після першого від'ємного елемента
int sum = 0;
int found_negative = 0;
for (int i = 0; i < n; i++){
    if (found_negative) {
        sum += abs(arr[i]);
    }else if (arr[i]); {
        found_negative = 1;
    }
}
printf("Сума модулів елементів після першого від'ємного елемента: %d\n", sum);
//Звільнення пам'яті, виділеної для масиву
free(arr);
return 0;
}