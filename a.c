#include <stdio.h>

void swap(int a[],int pos1,int pos2){
    int s=a[pos1];
    a[pos1]=a[pos2];
    a[pos2]=s;
}

void per(int a[],int l,int now){
    if(now>=l-2){
        for(int i=0;i<l;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        swap(a,now,now+1);
        for(int i=0;i<l;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        swap(a,now,now+1);
        return;
    }
    else{
        for(int i=0;i<l-now;i++){
            swap(a,now,now+i);
            per(a,l,now+1);
            
        }
    }
}

int main(){
    int l;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&l);
    per(a,l,0);
}
