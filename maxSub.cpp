#include <stdio.h>
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	while(true){
		int n;
		
		int a[5000];
		scanf("%d",&n);
		if(n==0)
			break;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		int max_sum=0;
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
			max_sum=max(max_sum,sum);
			if(sum<0)
				sum=0;
		}
		printf("%d\n",max_sum);
			
	}
} 
