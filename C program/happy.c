#include <stdio.h>
void pass_by_value(int x) {
    x = 5;// pass by value
}
void pass_by_reference(int *x) {
    *x = 5;// pass by reference
}
int main() {
    int x = 10;
    pass_by_value(x);
    printf("Pass by value : %d", x);
    pass_by_reference(&x);
    printf("\nPass by reference : %d", x);
    return 0;
}
