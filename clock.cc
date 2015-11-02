 #include<iostream>
 #include<string>
 using namespace std;
 
 class Time{
 	public:
 		void setTime(int sethours, int setmins, int setsecs){
 			if (sethours>=0 && sethours<=23;)
				{hours = sethours;}
				else {setTime=-1;

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
