int solution(int X, int Y, int D) {
    // write your code in C99
    int steps = (Y-X)/D;
    steps += ((Y-X) % D == 0) ? 0 : 1;
    return steps;
}
