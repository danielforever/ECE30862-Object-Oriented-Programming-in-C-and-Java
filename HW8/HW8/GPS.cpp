#include <iostream>
#include "GPS.h"
using namespace std;

GPS::GPS(int s):idx(0),size(s),x(0),y(0){
   obs = new Observer*[size];

};

void GPS::subscribe(Observer* o) {
	obs[idx] = o;
	if(idx == size) {
		cout<<"obs full, size: "<< idx <<",idx:"<< idx <<endl;
		idx++;
	}
	else if(idx < size){
		idx++;
	}
	else{
		cout<<"Error: no space"<<endl;
	}
};
void GPS::notify( ){
	for (int i=0;i<idx;i++){
		obs[i]->notify(x,y);
	}
};


void GPS::update(double xx, double yy){
	x = xx;
	y = yy;
	notify();
}
GPS::~GPS( ) {
   delete obs;
};
