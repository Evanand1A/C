#include <stdio.h>
// 4. Print minimum no. of notes required
int main() {
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount;
    int temp_amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    temp_amount = amount;
    printf("Minimum number of notes required:\n");
    for (int i = 0; i < 9; i++) {
        if (temp_amount >= notes[i]) {
            int count = temp_amount / notes[i];
            printf("%d note(s) of Rs. %d\n", count, notes[i]);
            temp_amount = temp_amount % notes[i];
        }
    }
    return 0;
}
