#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Sort(int *,long);


void merge_sort(int *arr,int begin,int mid,int end){
    int a=begin;
    int b=mid+1;
    int save[end-begin+1];
    for(int i=begin;i<=end;i++){
        if(a<=mid&&b<=end){
            if(arr[a]<arr[b]){
                save[i-begin]=arr[a];
                a++;
            }
            else{
                save[i-begin]=arr[b];
                b++;
            }
        }
        else{
            if(a>mid&&b<=end){
                save[i-begin]=arr[b];
                b++;
            }
            if(a<=mid&&b>end){
                save[i-begin]=arr[a];
                a++;
            }
        }
    }
    for(int i=begin;i<=end;i++){
        arr[i]=save[i-begin];
    }
    return;
}

void merge(int *arr,int begin,int end){
    int mid=(begin+end)/2;
    if(begin!=end){
        merge(arr,begin,mid);
        merge(arr,mid+1,end);

        merge_sort(arr,begin,mid,end);
    }
}

int main(){
	long n;
	int *arr,i;
	clock_t start,end;
	double diff;
	printf("Please enter the number:");
	scanf("%ld",&n);
	
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("Error: insufficient memory.\n");
		exit(1);
	}
	start=clock();
	Sort(arr,n);
	end=clock();
	diff=(double)(end-start)/CLOCKS_PER_SEC;
	printf("\n-->%lf sec",diff);
	return 0;
}
void Sort(int *arr,long n){
	int i,j;
	srand(time(0));
	for(i=0;i<n;i++){
		arr[i]=rand();
	}
	
	printf("By Merge sort:\n\nBefore:");
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n\n\nAfter:");
	/*for(i=1;i<n;i++){
		for(j=0;j<(n-i);j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
		printf("%d\n",i);
	}*/
	merge(arr,0,n-1);
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}

}


