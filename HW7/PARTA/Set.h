#include<iostream>
//#include<list>
#include<vector>
using namespace std; 


class Set {
public:
	int size;
	int x;
	vector<int> myints;
	static int count1;

	//
	Set(int);
	Set( const Set &obj);
	Set operator+ (int);
	Set operator- (int);
	Set operator& (const Set &obj);
	Set operator/ (const Set &obj);
	friend ostream& operator<<(ostream& os,const Set &obj);
	Set operator~ ();
	Set getCopyCount( );


};

//#endif
