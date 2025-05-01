#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    //lgoic for special case

    if(n<1){
        printf("wrong input\n");
        return -1;
    }

    int arr[n];
    //logic for taking input

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //logic for printing all subarray in an array
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            for(int k=i;k<=j;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
            
        }
    }











    return 0;
}