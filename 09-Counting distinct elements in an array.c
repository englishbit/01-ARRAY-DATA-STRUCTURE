#include<stdio.h>
#define EMT -1




//LOGIC FOR INSERT FUNCTION IN SET DS

void insert(int hash[],int size,int x,int *crntsize){

    if(*crntsize>=size){
        printf("the hash table is full");
        return;
    }

    int indx=x%size;
    

    while(hash[indx]!=EMT&&hash[indx]!=x){
        indx=(indx+1)%size;

    }


    if(hash[indx]==EMT){
        hash[indx]=x;
        (*crntsize)++;
    }


}





int main(){

int n,count=0;
scanf("%d",&n);


//LOGIC FOR SPECIAL CASE
if(n<1){
    printf("wrong input\n");
    return -1;
}


int arr[n];
int input[n];

//LOGIC FOR FILLING THE ARRAY WITH -1
for(int i=0;i<n;i++){
    arr[i]=EMT;
}



//LOGIC FOR TAKING INPUT FOR SET DS
for(int j=0;j<n;j++){
    
    scanf("%d",&input[j]);

    int y=input[j];


    insert(arr,n,y,&count);

}



 




 //LOGIC FOR counting distinct elements in an array 
int counter=0;
for(int l=0;l<n;l++){
    if(arr[l]!=EMT){
        counter++;
    }
}

printf("the number of distinct elements is %d\n",counter);




    return 0;
}
