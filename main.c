#include <stdio.h>

int main() {
    int numbers[5], input, sum = 0;

    for (int i = 0; i < 5; i++){
        printf("enter number %d: ", i+1);
        scanf("%d", &input);

        numbers[i] = input;
    }

    printf("\nOdd numbers entered: \n");
    for (int i = 0; i < 5; i++){
        if (numbers[i] % 2 == 1)
            sum += numbers[i];
    }

    printf("%d\n", sum);
    return 0;
}
