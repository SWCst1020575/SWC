#include <iostream>
int main(){
	int student_num; //用於計算有多少學生 
	float student_score[40][2]; //記錄學生的分數 
	std::cin >> student_num;  
	//輸入 
	for(int i=0; i<student_num; i++){
		for(int j=0; j<2; j++){
			std::cin >> student_score[i][j];
		}
	}
	//輸出 
	for(int i=0; i<student_num; i++){
		std::cout << (student_score[i][0] + student_score[i][1])/2 <<std::endl;
	}
} 
