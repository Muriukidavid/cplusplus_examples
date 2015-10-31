#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[]){
	int a=0;
	cout<<"value of argc: "<<argc<<"\n";
	cout<<"the value of argv[0]: "<<argv[0]<<"\n";
	cout<<"the value of argv[1]: "<<argv[1]<<"\n";
	a=atoi(argv[1]);	
	return 0;
}
