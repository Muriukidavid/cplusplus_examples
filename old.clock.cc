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

<<<<<<< HEAD:old.clock.cc
		void displayTime(void){
         cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"  . . . . . .In 12H clock system.\n";			
		}
		/*This function displays the values of the time in 24H clock system without the AM/PM */
		void displayTime_12Hours(void){
			cout<<hours<<":"<<mins<<":"<<secs<<"  . . . . . .In 24H clock system.\n";
		}
=======
		virtual void displayTime(void){}
		
>>>>>>> 928598d90f8af867c2d49d911cfcd860e08ad9c2:clock.cc

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
<<<<<<< HEAD:old.clock.cc
	Clock clk;
	clk.setTime(22,2,40);
	clk.displayTime_12Hours(); /*Put before the setAMPM() call for the () not to interfere with the initialised values in setTime()*/
=======
	Clock12 clk;
	clk.setTime(16,50,29);
>>>>>>> 928598d90f8af867c2d49d911cfcd860e08ad9c2:clock.cc
	clk.setAMPM();
	clk.displayTime();
	Clock24 clkt;
	clkt.setTime(17,47,03);
	clkt.displayTime();
	return 0;
}

