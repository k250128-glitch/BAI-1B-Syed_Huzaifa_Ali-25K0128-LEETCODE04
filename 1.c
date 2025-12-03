#include <stdio.h>


int climbStairs(int n) {
    if (n == 0 || n == 1) {
        return 1; // base cases
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;

    printf("Enter number of steps: ");
    scanf("%d", &n);

    int ways = climbStairs(n);
    printf("Number of distinct ways to climb %d steps: %d\n", n, ways);

    return 0;
}
