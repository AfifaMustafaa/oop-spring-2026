#include<iostream>
using namespace std;
	int search(int nums[], int n ,int target) {
int low = 0, high = n-1;
while (low <= high) {
int mid = low + (high - low) / 2; // avoids overflow
if (nums[mid] == target)
return mid; // found
else if (nums[mid] < target)
low = mid + 1; // go right
else
high = mid - 1; // go left
}
return -1; // not found
}
int main(){
	int nums[6]={1, 2, 4 ,6 ,78, 9};
	int target =4;
	
	int result = search(nums, 6 , 4);
	
	if(result!= -1){
		cout<< "target found at index : "<<result<<endl;
		 
	}
	else{
		cout<<"target not found! "<<endl;
	}
	return 0;
}
