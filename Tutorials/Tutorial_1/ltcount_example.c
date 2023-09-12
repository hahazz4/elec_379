#include <stdio.h>
#define N 6
int x[N] = {7,5,3,1,7,3};
int cnt[N];
void LTCOUNT (int *a, int *lt_count, int n){
    int i, j;

    for (i = 0; i < n; i++){
        lt_count[i] = 0;
        for (j = 0; j < n; j++){
            if (i != j)
                lt_count[i] = lt_count[i] + 1;
        }
    }
}

int main (void){
    int i;

    LTCOUNT(x, cnt, N);
    
    for(i = 0; i < N; i++){
        printf("%d %d\n", x[i], cnt[i]);
    }

    return 0;
}
