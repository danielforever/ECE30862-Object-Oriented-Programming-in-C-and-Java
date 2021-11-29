#include <iostream>
#include <list>
#include <vector>
#include "Set.h"
using namespace std;

int Set::count1 = 0;

Set::Set( int x1 ){
	size= x1+1;
	x=0;
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
Set Set::getCopyCount(){
	cout<<count1;
	return 0;
}
Set operator + ( const Set &obj,int x2){
	Set n = obj;
	n.x=x2;
	n.myints[n.x-1]=1;
	return n;
}
Set operator - ( Set &obj,int x2){
	obj.x=x2;
	obj.myints[obj.x-1]=0;
	return obj;
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
Set operator& (const Set &obj1,const Set &obj2){
	int smallone;
	Set n(obj1);
	smallone = obj1.size;
	if (obj1.size > obj2.size){
		smallone = obj2.size;
	}
	for (int i=0;i<smallone;i++){
		if (obj2.myints[i]==0 && obj1.myints[i]==1){
			n.myints[i]=0;
		}
	}
	return n;
}
Set operator/ (Set &obj1,Set &obj2){
	int smallone;
	smallone = obj1.size;
	if (obj1.size > obj2.size){
		smallone = obj2.size;
	}
	for (int i=0;i<smallone;i++){
		if (obj1.myints[i]==1 && obj2.myints[i]==1){
			obj1.myints[i]=0;
		}
	}
	return obj1;
}
Set operator~ (const Set &obj){
	Set n = obj;
	for (int i=0;i<obj.size;i++){
		if (obj.myints[i]==1){
			n.myints[i]=0;
		}
		else{
			n.myints[i]=1;
		}
	}
	return n;
}


