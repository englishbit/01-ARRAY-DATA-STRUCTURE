#include<stdio.h>
int main(){
           int arr[]={2,5,2,6,7,0,10,22,1,4};
           int size=sizeof(arr)/sizeof(arr[0]);
        
           for(int i=0;i<size;i++){
                    int left=-1;
                    int right=-1;    
                    if(i>0){
                        left=arr[i-1];
                        
                    }
                    if(i<size-1){
                        right=arr[i+1];

                    }
                    printf("%d left:%d right:%d\n",i,left,right);
           }




    return 0;
}
