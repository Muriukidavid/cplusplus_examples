#include<iostream>
#include<string>
using namespace std;

class Time{
	public:
	Time(){	//consturctor initializes variables and other objects
		hours=mins=secs=-1;
	}	//end of constructor
	
	~Time(){}	//destructor destroys/closes resources to reclaim memory
	
		void setTime(int sethours, int setmins, int setsecs){
		if(sethours>23 || sethours<0)
		{
			cout<<"Invalid hours"<<endl;
			}else{
			hours = sethours;}
		if(setmins>59 || setmins<0)
		{
			cout<<"Invalid minutes"<<endl;}
			else{
			mins = setmins;}
		if(setsecs>59 || setsecs<0)
		{
			cout<<"Invalid seconds"<<endl;}
			else{
			secs=setsecs;}
			
		}

		virtual void displayTime(void){}
		

	protected:	int hours;
			int mins;
			int secs;
			char ampm[3];
};	//end class Time

class Clock12: public Time{
	public:
		void setAMPM(void){
			if(hours>=12){
				if(hours>12)
					hours=hours-12;
				std::string str (" PM");
				str.copy(ampm, 3, 0);
			}else{
				std::string str (" AM");
				str.copy(ampm, 3, 0);
			}
		}
		void displayTime(void){
		if(hours == -1 ||mins==-1||secs==-1){
		cout<<"Invalid time"<<endl;}
		else{
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
			}
		}
};

class Clock24: public Time{
	public:
		void displayTime(void){
		if(hours == -1 ||mins==-1||secs==-1){
		cout<<"Invalid time"<<endl;}
		else{
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";}
		}
};
			
int main(){
	Clock12 clk;
	clk.setTime(16,50,29);
	clk.setAMPM();
	clk.displayTime();
	Clock24 clkt;
	clkt.setTime(17,47,03);
	clkt.displayTime();
	return 0;
}

