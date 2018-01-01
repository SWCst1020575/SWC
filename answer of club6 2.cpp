#include <iostream>  
#include <cstring>
int main(){
	char a[1000001],b[1000001];
	std::cin>>a>>b;
	if( strcmp(a,b) == 0){
		std::cout<<strlen(a);
	}
	else{
		std::cout<<strlen(a)+strlen(b);
	}
} 
