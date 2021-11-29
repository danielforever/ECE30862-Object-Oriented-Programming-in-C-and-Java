#include <iostream>
#include <list>
#include <vector>
#include "Set.h"
using namespace std;

int Set::count1 = 0;

Set::Set( int x1 ){
	size= x1+1;

	for(int i=0;i<size;i++){
		myints.push_back(0);
	}
}
Set::Set(const Set& obj1){
//	cout<<"copy"<<endl;
	size = obj1.size;
	x = obj1.x;
	myints = obj1.myints;
//	count = obj1.count+1;
	count1++;
}
Set Set::operator + ( int x2){
	x=x2;
	this->myints[x-1]=1;
	return *this;
}
Set Set::operator - ( int x2){
	x=x2;
	this->myints[x-1]=0;
	return *this;
}
std::ostream& operator<<(std::ostream& os, const Set &obj){
	int flag=0;
	for (int i=0;i<obj.size;i++){
		if (obj.myints[i]==1 ){
			if (flag==1){
				os <<", "<<i+1;
			}
			else{
				os<<i+1;
			}
			flag=1;
		}
	}
	os<<"\n";
	return os;
}
Set Set::operator& (const Set &obj){
	int smallone;
	Set n = Set(this->size-1);
	smallone = this->size;
	if (this->size > obj.size){
		smallone = obj.size;
	}
	for (int i=0;i<smallone;i++){
		if (obj.myints[i]==1 && this->myints[i]==1){
			n.myints[i]=1;
		}
	}
	return n;
}
Set Set::operator/ (const Set &obj){
	int smallone;
	smallone = this->size;
	if (this->size > obj.size){
		smallone = obj.size;
	}
	for (int i=0;i<smallone;i++){
		if (this->myints[i]==1 && obj.myints[i]==1){
			this->myints[i]=0;
		}
	}
	return *this;
}
Set Set::operator~ (){
	for (int i=0;i<this->size;i++){
		if (this->myints[i]==1){
			this->myints[i]=0;
		}
		else{
			this->myints[i]=1;
		}
	}
	return *this;
}
Set Set::getCopyCount(){
	cout<<count1;
	return 0;
}

