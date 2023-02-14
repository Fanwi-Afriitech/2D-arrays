#include <iostream>

using namespace std;
class student{
	private:
		int score [5][4];
	public:
		
	void insert(){
			
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<4;j++)
			{
			cout<<"enter number: ";
			cin>>score[i][j];
			}
		}
		
	}
	
	void display(){
			for(int i=0;i<5;i++)
		{
			for(int j=0;j<4;j++)
			{
			
			cout<<score[i][j]<<",";
			}
		}
	}
};

int main() {
	student s1;
	s1.insert();
	s1.display();
	
}