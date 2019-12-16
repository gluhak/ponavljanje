#include<iostream>
using namespace std;
int main(){
	cout<<"[";
	int polje [10],brojac=4;
	for (int i=0;i<9;i++){
	polje[i]=brojac;
	brojac=brojac+2;
	if(i!=10){
	cout<<polje[i]<<", ";
}
	}
	cout<<"22";
	                     
		cout<<"]"<<endl;
		
        		
		
	system("pause");
	return 0;
}
