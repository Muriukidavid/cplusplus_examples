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
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
		}

	protected:	int hours;
			 	int mins;
				int secs;
				char ampm[3];
};

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
};

class Clock24: public Time{
	public:
		void setTwentyFour(void){
			if(hours>24){
			  	hours=hours-24;
			std::string str (" hr");
			str.copy(ampm, 3, 0);
		   }else{
		   	std::string str (" hr");
		   	str.copy(ampm, 3, 0);
		   }
	}
};
			
int main(){
	Clock12 clk;
	clk.setTime(6,25,40);
	clk.setAMPM();
	clk.displayTime();
	Clock24 clkt;
	clkt.setTime(17,47,49);
	clkt.setTwentyFour();
	clkt.displayTime();
	return 0;
}

