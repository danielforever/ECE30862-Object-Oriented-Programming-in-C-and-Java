#include<iostream>
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
	Set getCopyCount( );


};
Set operator+ (const Set &obj,int);
Set operator- (Set &obj,int);
Set operator& (const Set&,const Set&);
Set operator/ (Set &obj1,Set &obj2);
std::ostream& operator<<(std::ostream& os,const Set &obj);
Set operator~ (const Set &obj);


//#endif
