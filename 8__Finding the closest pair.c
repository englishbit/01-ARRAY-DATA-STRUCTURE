#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){

        int n;
        scanf("%d",&n);
        int target;
        scanf("%d",&target);

        //logic for special case;

        if(target<0){
            printf("wrong input\n");
            return 1;
        }


        //logic for special case
        if(n<2){
            printf("wrong input\n");
            return 1;
        }

        //logic for taking the input
        int arr[n];
        for(int m=0;m<n;m++){
            scanf("%d",&arr[m]);
        }

        //logic for finding all pairs
        int min=INT_MAX;
        int indx_outer=-1;
        int indx_inner=-1;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int dfrnc=abs(arr[i]-arr[j]);

                    if(dfrnc<min){
                        min=dfrnc;
                        indx_outer=i;
                        indx_inner=j;
                        
                    }
                
            }
        }

        //logic for printing the closest pair
        if(indx_outer!=-1&&indx_inner!=-1){
            printf("the closest pair is %d  %d\n",arr[indx_outer],arr[indx_inner]);
        
        
        }else{
            printf("the closest pair is is not found\n");
        }
       











    return 0;
}
