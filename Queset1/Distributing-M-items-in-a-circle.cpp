problem statement: Distributing M items in a circle of size N starting from K-th position
/*
N : size of circle
M : Number of items
K : starting position
*/

int Solution::solve(int M, int N, int K) {
    return ((M%N) + ((K%N) - 1)) % N;
}
