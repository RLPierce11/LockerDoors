//*************************************************************************************************
//	Name:	Ryan Pierce
//	Date:	1-27-2021
//*************************************************************************************************

#include <iostream>

using namespace std;


int main(){
	
	int size;
	cout << "Enter number of lockers: ";
	cin >> size;
	size += 1;
	char arr[size];
	for(int i = 0; i < size; i++){
		arr[i] = 'X';
	}
	int locker_num;
	for(int k = 1; k < size; k++){
		locker_num = k;
		while(locker_num <= size){
			if(arr[locker_num] == 'X'){
				arr[locker_num] = 'O';
			}else{
				arr[locker_num] = 'X';
			}
			locker_num = locker_num + k;
		}
	}
	cout << "Open lockers at the end of simulation:" << endl;
	for(int j = 1; j < size; j++){
		if(arr[j] == 'O'){
			cout << j << endl;
		}
	}
	
	return 0;
}
