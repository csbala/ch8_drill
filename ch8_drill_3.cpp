#include "std_lib_facilities.h"

namespace X{
	double var;
	void print(double d){cout<<"X var: "<<d<<endl;}
}
namespace Y{
	double var;
	void print(double d){cout<<"Y var: "<<d<<endl;}
}
namespace Z{
	double var;
	void print(double d){cout<<"Z var: "<<d<<endl;}
}

int main()
{

	X::var = 7;
	X::print(X::var);  // print X’s var
	using namespace Y;
	var = 9;
	print(var);   	// print Y’s var
	{
		using Z::var;
		using Z::print;
		var = 11;
		print(var);		// print Z’s var
	}
	print(var); // print Y’s var
	X::print(X::var); // print X’s var
	

	return 0;
}