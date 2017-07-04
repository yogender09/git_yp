#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr;
    int n;
    int r;
    int i; 
    scanf("%d %d",&n,&r);
    arr = malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d ",&(arr[i]));
    
    for(i = 0; i < r; i++){
        int temp = arr[0];
        int j = 0;
        for(j = 1 ;j < n; j++){
            arr[j-1] = arr[j];
        }
        arr[j - 1] = temp; 
    }
    
    for(i = 0; i <n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
