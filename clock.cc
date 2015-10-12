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
                       if(ampm=="AM"||ampm=="PM")
			cout<<"12H clock system "<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
                       else
                        cout<<"24H clock system "<<hours<<":"<<mins<<":"<<secs<<" "<<ampm<<endl;
		}

	protected:	int hours;
			 	int mins;
				int secs;
				string ampm;
};

class Clock: public Time{
	public:
		void setAMPM(void){
			if(hours>=12){
				if(hours>12)
					hours=hours-12;
				//std::string str (" PM");
				//str.copy(ampm, 3, 0);
                                ampm="PM";
			}else{
				//std::string str (" AM");
				//str.copy(ampm, 3, 0);
                                ampm="AM";
			}
		}
};

class clock_24h: public Time
{
 public:
  void set_24()
  {
   hours=(hours>=0&&hours<24)?hours:0;
   mins=(mins>=0&&mins<=60)?mins:0;
   secs=(secs>=0&&secs<=60)?secs:0;
   ampm="hrs";
  }
};

int main(){
	Clock clk;
        clock_24h clk24;
	clk.setTime(13,25,40);
	clk.setAMPM();
	clk.displayTime();
        clk24.setTime(13,25,40);
        clk24.set_24();
        clk24.displayTime();
	return 0;
}
