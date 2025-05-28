#include<stdio.h>
int main(){
        int n,max;
        //logic for taking the input
        scanf("%d",&n);
        int arr[n];

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

        }

        //logic for finding the max value
        max=arr[0];
        for(int i=1;i<n;i++){
             if(arr[i]>max){
                max=arr[i];
             }
        }
        
        printf("%d",max);






    return 0;
}
