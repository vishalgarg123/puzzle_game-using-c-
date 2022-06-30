//*************************Puzzle Game*****************************
#include<iostream>
#include<string>
#include<conio.h>
#include<cstdlib>
using namespace std;
void display();
int Gamefunction();
 

int main()
{
	 cout<<"Created by"<<endl;
	cout<<"==================="<<endl;
	  	cout<<"1]Sumit sahu"<<endl;
	  	cout<<"2]Vishal garg"<<endl;
	  	cout<<"3]Shraddha sharma"<<endl;
	  	cout<<"4]Sumukh sharma"<<endl<<endl<<endl;
	cout<<"****************!!!!!Welcome to the world of puzzle game!!!!!*******************"<<endl<<endl;
	 
	string xyz;
	cout<<"Enter your name      \a\a\a\a\a  :- ";
    getline(cin,xyz);
    cout<<endl;
    int score=0;
    char input;
    do
    {
    	//game code
    	system("cls");
    	display();
    	score=score+Gamefunction();
    	cout<<"would you like to play again   (y/n)   :- ";
    	cin>>input;
    	cout<<endl;
	}while(input!='n');	 
	cout<<xyz<<" Your Score is    "<<score<<endl;
	cout<<"===============================";
	cout<<endl<<endl<<endl;
	cout<<"********************************!!THANK YOU!!***********************************"<<endl;
	
}
void display()
{       cout<<endl<<endl;
		cout<<"*********************** WORD SEARCHING PUZZLE GAME*****************************\a\a\a\a\a"<<endl<<endl;
		cout<<"A puzzle of words alphabets is shown on screen you have to guess a hidden correct"<<endl;
		cout<<"Word from the puzzle for each correct guessing you will get one score"<<endl<<endl<<endl;
		
	
}
int Gamefunction()
{
	string array[12]={"java","c++","python","scala","php","html","css","kotlin","hello","hetlin","computer","pea"};
	char matrix[12][12];
	  int r;
	  char c;
	  for(int i=0;i<=11;i++)
	  {
	  	for(int j=0;j<=11;j++)
	  	{
	  		r=rand()%26;
	  		c='a'+r;
	  		matrix[i][j]=c;
		  }
	  }
	  int index=rand()%10;
	  string output=array[index];
	  if(array[index].length()%2==0)
	  {
	  	//horizontally
	  	int row=rand()%10;
	  	int col=rand()%3;
	  	for(int i=0;array[index][i]!='\0';i++,col++)
	  	{
	  		matrix[row][col]=array[index][i];
		  }
	  }
	  else
	  {
	  	//Vertically
	  	int row=rand()%3;
	  	int col=rand()%10;
	  	for(int i=0;array[index][i]!='\0';i++,row++)
	  	{
	  		matrix[row][col]=array[index][i];
		  }
	  }
	  cout<<"****************************!!!puzzle!!!***************************************"<<endl<<endl<<endl;
	  cout<<"                              Puzzle Game            \n";
	  cout<<"	        =======================================\n";

	  for(int i=0;i<=11;i++)
	  { cout<<"		| ";
	  	for(int j=0;j<=11;j++)
	  	{   
	  		cout<<matrix[i][j]<<"  ";
	  		
	  
		  }
		  cout<<"|";
		  cout<<"\n";
	
	  }
	  cout<<"   	        =======================================\n";
	  cout<<"\n";
	  cout<<"\n";
	  string guess;
	  char hint;
	  cout<<"press 1 for direct guess input      "<<endl<<endl;
	  cout<<"press 2 for firstly see hint and then enter guess input "<<endl<<endl;
	  a:
	  cout<<"Enter input    :   ";
	  cin>>hint;
	  cout<<endl;
	  if(hint=='1')
	  {cout<<"Enter guessing word   :       ";
	  cin>>guess;
	  cout<<endl;
	  }
	  else if(hint=='2')
	  {
	  	 cout<<"The guessing word size is  "<<output.length()<<endl;
	  	  cout<<"Enter guessing word   :       ";
	  cin>>guess;
	  cout<<endl;
      }
	  else
	  {
	  	 cout<<"Enter valid input   "<<endl;
	  	 cout<<"===================="<<endl;
	  	 goto a;
	  }
	  if(output==guess)
	  {
	  	cout<<"\a\a\a\a\a\a\a\a\a";
	  	cout<<"congratulation! you guess the right word in the puzzle"<<endl<<endl;
	  	return 1;
	  
	  }
	  else
	  {
	  	cout<<"soory you guess the wrong word"<<endl;
	  	return 0;
	
	  }
     getch();
	 
}












