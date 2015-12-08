 #include<iostream>
 #include<string>
 using namespace std;
 
 class Time{
 	public:
 		void setTime(int sethours, int setmins, int setsecs){
 			if (sethours>=0 && sethours<=23;)
				{hours = sethours;}
				else {setTime=-1;

<<<<<<< HEAD
				cout<<"ERROR"<<endl;}
			 if(setmins>=0 && setmins<=59;)
				{mins = setmins;}
				else {setTime=-1;
				cout<<"ERROR"<<endl;}
                          if(setsecs>=0 && setsecs<=59;)
				{secs=setsecs;}
				else {setTime=-1;
				cout<<"ERROR"<<endl;}
			
 		}
 
 		void displayTime(void){
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
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
 
 class Clock: public Time{

 				str.copy(ampm, 3, 0);
 			}
 		}
		}
 };
 
 int main(){
 	Clock clk;
 	clk.setTime(13,25,40);
+//	clk.setZero();
+	clk.displayTime24Hours();
 	clk.setAMPM();
 	clk.displayTime();
 	return 0;
 }
=======
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
>>>>>>> b5f6742e2c980cdf7f8320d68f44ea5aa0c01cda
