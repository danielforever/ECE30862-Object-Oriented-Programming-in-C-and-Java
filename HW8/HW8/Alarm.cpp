#include <iostream>
#include <cmath>
#include "Alarm.h"
using namespace std;

Alarm::Alarm(Subject * s, int i, double xx, double yy, double alarm): id(i),x(xx),y(yy),soundAlarm(alarm){
	s->subscribe(this);
};

Alarm::~Alarm( ) { };

void Alarm::notify(double xx, double yy){
	float dis;
//	dis = pow(pow(xx-x,2)+pow(yy-y,2),0.5);

	dis = std::sqrt(pow(xx-x,2)+pow(yy-y,2));
//	cout<< "Alarm"<<this->id <<"this dis "<<dis<< "this soundalarm "<<this->soundAlarm<<endl;
	if (dis > this->soundAlarm){

		cout<< "Alarm"<<this->id <<" Sounded! Moved "<< dis<<" meter"<<endl;
	}
};
