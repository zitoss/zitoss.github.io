#include <string.h>

int solution(int X, int A[], int N) {
    // write your code in C99
    int maxTime = 0;
    int pos[X];
    memset(pos, -1, X * sizeof(int));
    
    for(int i = 0; i < N; i++){
        if( pos[A[i]-1] == -1 && A[i] <= X ){
            pos[A[i]-1] = i;
        }
    }
    
    for(int i = 0; i < X; i++){
        if(pos[i] == -1) return -1;
        maxTime = maxTime < pos[i] ? pos[i] : maxTime;
    }
    
    return maxTime;
}
