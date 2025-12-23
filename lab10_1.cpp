#include<iostream>
using namespace std;

int main(){
	int count[5] = {};	 					//Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int i = 1;
	do{
	    char grade;
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == '0') {                  //The loop must be terminated when grade = '0'
		    i--;
		    break;
		}
		if(grade == 'A'){                   //if grade is A
			count[0]++;
			i++;                            //Do something
		}else if(grade == 'B'){             //if grade is B
			count[1]++;
			i++;                            //Do something
		}else if(grade == 'C'){             //if grade is C
			count[2]++;
			i++;
		}else if(grade == 'D'){             //if grade is D
			count[3]++;
			i++;
		}else if(grade == 'F'){             //if grade is F
			count[4]++;
			i++;
		                                    //and so on ... for grade = C, D, F	
		}else{                              //grade is wrong input
			cout << "Wrong input. Please input again.\n"; //Do something
		} 
	}while(true);
	
	
		
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}