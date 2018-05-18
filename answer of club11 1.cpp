#include<iostream>
#include<cmath>
double triangle(double a,double b){
	return sqrt(a*a+b*b);
}
int main(){
	double a,b;
	std::cin>>a>>b;
	std::cout<<triangle(a,b);
} 
