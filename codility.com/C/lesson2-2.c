#include <string.h>

int solution(int A[], int N) {
    // write your code in C99
    int count = 0;
    int permutation[N];
    memset(permutation, 0, N * sizeof(int));
    
    for(int i = 0 ; i < N; i++){
        if(A[i] <= N && permutation[A[i]-1] == 0){
            permutation[A[i]-1] = 1;
            count++;
        }
    }
    
    return count == N ? 1 : 0;
}
