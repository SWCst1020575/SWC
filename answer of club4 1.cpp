#include<iostream>
int main(){
	int save,times,a=0,b=0,c=0;
	std::cin>>times;
	for(int i=0;i<times;i++){
		std::cin>>save;
		if(save%3==0)
			a++;
		if(save%3==1)
			b++;
		if(save%3==2)
			c++;
	}
	std::cout << a <<" "<< b <<" "<< c;
} 
