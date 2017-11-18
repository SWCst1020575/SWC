#include<iostream>
int main(){
	int save,times,a[10000],b[10000],c[10000],a_t=0,b_t=0,c_t=0;
	std::cin>>times;
	for(int i=0;i<times;i++){
		std::cin>>save;
		if(save%3==0){
			a[a_t]=save;
			a_t++;
		}
		if(save%3==1){
			b[b_t]=save;
			b_t++;
		}
		if(save%3==2){
			c[c_t]=save;
			c_t++;
		}
	}
	for(int i=0;i<a_t;i++){
		std::cout<<a[i]<<" ";
	}
	std::cout<<"\n"; 
	for(int i=0;i<b_t;i++){
		std::cout<<b[i]<<" ";
	}
	std::cout<<"\n"; 
	for(int i=0;i<c_t;i++){
		std::cout<<c[i]<<" ";
	}
} 
