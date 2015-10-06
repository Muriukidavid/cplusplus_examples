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
-			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
+			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\tin 12-hour clock"<<"\n";
 		}
+		
+                void displayTime24Hours(void){
+                	cout<<zero<<hours<<":"<<mins<<":"<<secs<<"\tin 24-hour clock"<<endl;
+                }  
 
 	protected:	int hours;
 			 	int mins;
 				int secs;
 				char ampm[3];
+				char zero[1];
 };
 
 class Clock: public Time{
@@ -33,11 +38,22 @@ class Clock: public Time{
 				str.copy(ampm, 3, 0);
 			}
 		}
+//		void setZero(void){
+//			if(hours<=9){
+//				std::string str("0");
+//				str.copy(zero, 1, 0);
+//			}
+//			else{
+//			
+//			}
+//		}
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
