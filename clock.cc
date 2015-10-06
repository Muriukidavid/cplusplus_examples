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
                        cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\tin
                        hour clock"<<"\n"; 
		}
          
                   void displayTime24Hours(void){
                   cout<<zero<<hours<<":"<<mins<<":"<<secs<<"\tin 
                      hour clock"<<endl;

	protected:	int hours;
			 	int mins;
				int secs;
				char ampm[3];
                                char zero[1];
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
	clk.setTime(13,25,40);
	clk.setAMPM();
	clk.displayTime();
	return 0;
}
