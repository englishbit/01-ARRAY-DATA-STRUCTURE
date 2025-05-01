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

    //takig the target value
    int target;
    scanf("%d",&target);
    int count=0;

    //logic for finding all subarray in an array

    for(int i=0;i<n;i++){
        int count_sum=0;

        for(int j=i;j<n;j++){
            count_sum+=arr[j];
            if(target==count_sum){
                count++;
            }
            
        }
    }

    printf("the number of subarray is %d\n",count);










    return 0;
}