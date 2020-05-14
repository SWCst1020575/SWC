#include <stdio.h>
int sum=0;
void swap(int a[],int pos1,int pos2){
    int s=a[pos1];
    a[pos1]=a[pos2];
    a[pos2]=s;
}

void per(int a[],int n,int now,int r){
    if(now>=n-2){
        for(int i=r-1;i<n;i++){
            int t=0;
            for(int j=0;j<r-1;j++){
                if(a[i]<a[j])
                    t=0;
                else{
                    t=1;
                    break;
                }
            }
            if(t==0){
                if(a[i]==1){
                    sum+=1;
                    break;
                }
                else
                    break;
            }
        }
        /*for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");*/
        swap(a,now,now+1);
        for(int i=r-1;i<n;i++){
              int t=0;
              for(int j=0;j<r-1;j++){
                  if(a[i]<a[j])
                      t=0;
                  else{
                      t=1;
                      break;
                  }
              }
              if(t==0){
                  if(a[i]==1){
                      sum+=1;
                      break;
                  }
                  else
                      break;
              }
        }

        /*for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");*/
        swap(a,now,now+1);
        return;
    }
    else{
        
        for(int i=0;i<n-now;i++){
            swap(a,now,now+i);
            per(a,n,now+1,r);
            swap(a,now,now+i);
        }
    }
}

int main(){
    int n,r;
    int b=1;
    int a[11]={1,2,3,4,5,6,7,8,9,10,11};
    scanf("%d %d",&n,&r);
    if(r<=n){
        if(n>1)
            per(a,n,0,r);
    }
    for(int i=1;i<=n;i++)
        b*=i;
    float ans = (float)sum/(float)b;
    printf("%f",ans);
}
