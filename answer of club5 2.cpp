#include <iostream>
int main(){
	int student_num; //�Ω�p�⦳�h�־ǥ� 
	float student_score[40][2]; //�O���ǥͪ����� 
	std::cin >> student_num;  
	//��J 
	for(int i=0; i<student_num; i++){
		for(int j=0; j<2; j++){
			std::cin >> student_score[i][j];
		}
	}
	//��X 
	for(int i=0; i<student_num; i++){
		std::cout << (student_score[i][0] + student_score[i][1])/2 <<std::endl;
	}
} 
