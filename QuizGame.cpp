#include<iostream>
#include<random>
#include<ctime>
#include<conio.h>
using namespace std;
int Que =1;
int Correct=0;
int Wrong=0;
bool ask[10]={true,true,true,true,true,true,true,true,true,true};
	
void displayRandomQuestion();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();
int main(){
	display();
	return 0;
}

void display(){
	cout<<"\t\t\tQuestion No.: "<<Que<<"\t\tCorrect Ans: "<<Correct<<"\t\tWrong Ans: "<<Wrong<<endl<<endl;
	displayRandomQuestion();
}

void displayRandomQuestion(){
	srand(time(0));
	bool isQueRemaining=false;
	for(int i=0;i<10;i++){
		if(ask[i]){
			isQueRemaining=true;
			break;
		}
	}
	
	while(isQueRemaining){
		int no =rand()%10;
		if(ask[no]){
			ask[no]=false;
			switch(no){
				case 0: question("Which language Supports Oops terminology?","A. C launguage","B. C++","C. Java","D. Both B & C",'D');
				        break;
				case 1: question("Name of the screen that recognizes touch input is:","A.Recog screen","B.Point Screen","C.Touch Screen","D.Android Screen",'C');
				        break;
				case 2: question("Identify the device through which data and instructions are entered into a computer:","A.Software","B.Output device","C.Input device","D.Memory",'C');
				        break;
				case 3: question("Computer Moniter is also known as:","A.DVU","B.UVD","C.VDU","D.CCTV",'C');
				        break;
				case 4: question("Which one of these stores more data than a DVD ?","A.CD Rom","B.Blue Ray Disk","C.Floppy","D.Red Ray Disk",'B');
						break;
				case 5: question("The output shown on the computer monitor is called:","A.VDU","B.Hard Copy","C.Screen Copy","D.Soft Copy",'D');
						break;
				case 6: question("Eight Bits make up a:","A.byte","B.megabyte","C.kilobyte","D.None",'A');
						break;
			}
			
		}
	}
	result();
}

void result(){
	cout<<"Total Questions: "<<Que-1<<endl;
	cout<<"Correct Answers: "<<Correct<<endl;
	cout<<"Wrong Answers: "<<Wrong<<endl;
	if(Correct>=7){
		cout<<"Result=Pass"<<endl;
	}
	else{
		cout<<"Result=Fail"<<endl;
	}
}

void question(string question, string a, string b, string c, string d, char correctans){
	cout<<question<<endl;
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	char answer;
	cin>>answer;
	
	if(answer==correctans)
		Correct++;
	else
		Wrong++;
		
		
	Que++;
	display();
}
