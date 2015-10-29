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

<<<<<<< HEAD
		void displayTime(void){
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\tin 12-hour clock"<<"\n";
		}
		
                void displayTime24Hours(void){
                	cout<<zero<<hours<<":"<<mins<<":"<<secs<<"\tin 24-hour clock"<<endl;
                }  

	protected:	int hours;
			 	int mins;
				int secs;
				char ampm[3];
				char zero[1];
};
=======
		virtual void displayTime(void){}
		

	protected:	int hours;
			int mins;
			int secs;
			char ampm[3];
};	//end class Time
>>>>>>> 928598d90f8af867c2d49d911cfcd860e08ad9c2

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
<<<<<<< HEAD
//		void setZero(void){
//			if(hours<=9){
//				std::string str("0");
//				str.copy(zero, 1, 0);
//			}
//			else{
//			
//			}
//		}
=======
		void displayTime(void){
		if(hours == -1 ||mins==-1||secs==-1){
		cout<<"Invalid time"<<endl;}
		else{
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
			}
		}
>>>>>>> 928598d90f8af867c2d49d911cfcd860e08ad9c2
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
<<<<<<< HEAD
	Clock clk;
	clk.setTime(13,25,40);
//	clk.setZero();
	clk.displayTime24Hours();
=======
	Clock12 clk;
	clk.setTime(16,50,29);
>>>>>>> 928598d90f8af867c2d49d911cfcd860e08ad9c2
	clk.setAMPM();
	clk.displayTime();
	Clock24 clkt;
	clkt.setTime(17,47,03);
	clkt.displayTime();
	return 0;
}

