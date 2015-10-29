#include<iostream>
#include<string>
using namespace std;

class Time{
	public:
		void setTime(int sethours, int setmins, int setsecs){
			if (sethours >= 0 && sethours <= 23){hours = sethours;}
			else{hours = -1; cout<<"Hours Invalid!"<<endl;}
			
			if(setmins >= 0 && setmins <= 39){mins = setmins;}
			else{mins = -1;cout <<"Minutes Invalid!"<<endl;}
			
			if(setsecs >=0 && setsecs <= 59){secs = setsecs;}
			else{secs = -1;cout<<"Seconds Invalid!"<<endl;}
			
		}

		void displayTime(void){
		        if (hours < 0 || mins < 0 || secs < 0){}
		        else{cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\tin 12-hour clock"<<"\n";}
		}
		
                void displayTime24Hours(void){
                	if(hours < 0 || mins < 0 || secs < 0 ){}
                	else{cout<<zero<<hours<<":"<<mins<<":"<<secs<<"\tin 24-hour clock"<<endl;}
                }  

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
	clk.setTime(24,39,50);
//	clk.setZero();
	clk.displayTime24Hours();
	clk.setAMPM();
	clk.displayTime();
	return 0;
}
