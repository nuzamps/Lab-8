#include <iostream>
#include <tuple>
using namespace std;

int rowcol=8;
int myarray[8][8];

int main(){
	int num=0;
	
	
	for(int i=0; i<rowcol; i++){
		
		for(int j=0; j<rowcol; j++){
			
			if(i>=j){
				myarray[i][j]=++num;
				
			}
			else
			    myarray[i][j]=0;
		}
		
		
	}
		
}

int LinearIndx(int myarray[8][8], int rowcol, int a, int b){
	int array[8];
	int c;
	int n=0;
	for(int i=0; i<rowcol;i++){
		
		for(int j=0; j<rowcol; j++){
			if(i==a && j==b){
				c=myarray[i][j];
			}
			if(myarray[i][j]==0){
				continue;
			}
			else{
			    int index=((a+1)*a)/2+b;
			    array[index]=myarray[i][j];
			}
			    
		}
		
	}
	int arraylength=sizeof(array)/sizeof(array[0]);
	
	for(int i=0; i<arraylength; i++){
		if(array[i]==c){
			n=i;
		
		}
	}
	return n;
	
}

void InverseIndx(int onedimarray[], int k){
	int onedimindex=0;
	int twodimarray[8][8];
	int a,b;
	
	
	for(int i=0; i<rowcol; i++){
		
		for(int j=0; j<rowcol; i++){
			if(onedimindex==k){
				a=i;
				b=j;
			}
			if(i>=j){
				twodimarray[i][j]=onedimarray[onedimindex];
			}
			else
			    continue;
			onedimindex=onedimindex+1;
		}
		
	}
	cout<< a<<"and"<<b; ;
	
}

