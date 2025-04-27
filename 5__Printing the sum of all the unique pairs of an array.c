#include<stdio.h>
int main(){

        int n;
        scanf("%d",&n);
        //logic for special case
        if(n<1){
            printf("wrong input\n");
            return 1;
        }

        //logic for taking the input
        int arr[n];
        for(int m=0;m<n;m++){
            scanf("%d",&arr[m]);
        }

        //logic for printing all pairs
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                printf("%d  %d\n",arr[i],arr[j]);
            }
        }













    return 0;
}