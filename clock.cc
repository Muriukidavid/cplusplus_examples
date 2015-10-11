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
class Clock24: public Time{
	public:
		void setHRS(void){
		std::string str (" HRS");
		str.copy(hrs, 4, 0);
		}
			void displayTime24(void){
			cout<<hours<<":"<<mins<<":"<<secs<<hrs<<"\n";
		}
				protected:
				 char hrs[4];
};
int main(){
	Clock clk;
	clk.setTime(13,25,40);
	clk.setAMPM();
	clk.displayTime();
	Clock24 hrs;
	hrs.setTime(13,25,40);
	hrs.setHRS();
	hrs.displayTime24();
	return 0;
}
