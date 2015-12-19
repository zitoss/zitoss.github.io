int solution(int A[], int N) {
    // write your code in C99
    int sum = 0, cur = 0, min = -1;
    int i = 0;
    
    for (i = 0; i < N; i++){
       sum += A[i];   
    }
    
    for(i = 0; i < N-1; i++){
       cur += A[i];
       if(abs(sum - 2 * cur) < min || min == -1){
          min = abs(sum - 2 * cur);
       }
    }
    return min;
}
