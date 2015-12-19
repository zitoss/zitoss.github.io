int solution(int A[], int N) {
    // write your code in C99
    int sum_cur = 0, sum_should = 0;
    for(int i = 0; i < N; i++){
        sum_cur += A[i];
        sum_should += i+1;
    }
    sum_should += N+1;
    return (sum_should - sum_cur);
}
