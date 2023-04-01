#include <stdio.h>

int minJumps(int arr[], int n) {
    int maxReach = arr[0]; // maximum distance reachable from the current index
    int steps = arr[0]; // number of steps that can be taken from the current index
    int jumps = 1; // number of jumps taken so far

    for (int i = 1; i < n - 1; i++) {
        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i]; // update maxReach
        steps--; // decrement steps
        if (steps == 0) { // if we have taken all possible steps from the current index
            jumps++; // make a jump
            if (maxReach <= i) { // if we cannot reach any further
                return -1;
            }
            steps = maxReach - i; // update steps
        }
    }

    if (maxReach >= n - 1) { // if we have reached the end of the array
        return jumps + 1; // we need one more jump to reach the end
    }

    return -1; // we cannot reach the end of the array
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}; // example array
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array
    int jumps = minJumps(arr, n); // minimum number of jumps to reach the end of the array
    printf("Minimum numberof jumps: %d\n", jumps);
    return 0;
}
