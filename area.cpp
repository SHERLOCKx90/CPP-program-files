#include<iostream>
using namespace std;
class Area{
	public:
		int len,width;
		void setDim(){
			cout<<"Enter the length: ";
			cin>>len;
			cout<<"Enter width: ";
			cin>>width;
		}
		void getArea(){
			cout<<"Area is: "<<len*width;
		}
};
int main(){
	Area A;
	A.setDim();
	A.getArea();
}
