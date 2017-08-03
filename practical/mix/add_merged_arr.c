#include<stdio.h>
#include<stdlib.h>
int *sorted (int *a1, int n1, int *a2, int n2)
{
    int *arr = malloc((n1+n2)*sizeof(int));
    unsigned int i = 0, j = 0, k = 0, j_new_start = 0;
    if(n1>n2) {
        for(i = 0;i<n1;i++) {
            j = j_new_start;
            for(;j<n2;j++) {
                if(a1[i]<=a2[j]) {
                    arr[k++] = a1[i];
                    break;
                } else {
                    arr[k++] = a2[j];
                    j_new_start = j+1;
                }
            }
        }
        while(j<n2)
            arr[k++] = a2[j++];
    } else {
        for(i = 0;i<n2;i++){
            j = j_new_start;
            for(;j<n1;j++){
                if(a2[i]<=a1[j]){
                    arr[k++] = a2[i];
                    break;
                } else {
                    arr[k++] = a1[j];
                    j_new_start = j+1;
                }
            }
        }
        while(j<n1)
            arr[k++] = a1[j++];
    }
    return arr;
}

int main()
{
    int a1[5] = {1,6,7,10,15};
    int a2[4] = {6,8,9,16};
    int *ret = NULL;
    int i = 0;

    ret = sorted(a1,5,a2,4);

    while(i < 9){
        printf("%d ",ret[i]);
        i++;
    }
    printf("\n");
    free(ret);
    sleep(100);
    return 0;
}
