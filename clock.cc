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

		void displayTime(void){
         cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"  . . . . . .In 12H clock system.\n";			
		}
		/*This function displays the values of the time in 24H clock system without the AM/PM */
		void displayTime_12Hours(void){
			cout<<hours<<":"<<mins<<":"<<secs<<"  . . . . . .In 24H clock system.\n";
		}

	protected:	int hours;
			 	int mins;
				int secs;
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

int main(){
	Clock clk;
	clk.setTime(22,2,40);
	clk.displayTime_12Hours(); /*Put before the setAMPM() call for the () not to interfere with the initialised values in setTime()*/
	clk.setAMPM();
	clk.displayTime();
	return 0;
}
