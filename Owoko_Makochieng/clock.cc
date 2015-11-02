#include<iostream>
#include<string>
using namespace std;

class Time{
	public:
		void setTime(int sethours, int setmins, int setsecs){
			hours = sethours;
			mins = setmins;
			secs=setsecs;
		}
		/*Display function for the 12HR format */
		void displayTime(void){
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"  . . . . . .In 12H clock system.\n";
		}
		/*Display function for the 24HR format */
		void displayTime24(void){
			cout<<hours<<":"<<mins<<":"<<secs<<hr<<"  . . . . . .In 24H clock system.\n";
		}

	protected:	int hours;
			 	int mins;
				int secs;
				char hr[3];
				char ampm[3];
				
			
};

class Clock: public Time{
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
};

class military: public Time{
public:
	void set_military()
	{
		hours=hours;
		 mins=mins; 
		 secs=secs;

		std::string str (" HR");
		str.copy(hr, 3, 0);
	}
	
};

int main(){
	Clock clk;
	clk.setTime(13,25,40);
	clk.setAMPM();
	clk.displayTime();


	military milt;
	milt.setTime(13,25,40);	
	milt.set_military();
	milt.displayTime24();
	
	return 0;
}