#include <stdio.h>


// AUTHOR : AYOUB ELKTIBI 

void trie(int *p , int n){
    int *i , *j , temp;
    for(i = p ; i < p +n-1 ; i++){
        int *index = i;
        for(j = i+1 ; j < p+n ; j++){
            if(*j < *index)index = j;
        }
        temp = *i;
        *i = *index;
        *index = temp;
    }
}

int main() {
    int *p , n;
    scanf("%d" , &n);
    p = (int *)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &p[i]);
    }
    trie(p , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d \t" , p[i]);
    }
	return 0;
}
