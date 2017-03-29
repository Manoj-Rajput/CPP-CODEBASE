double PI = 3.14;
// extern double const PI = 3.14;

double area(const double& radius){ return (PI*radius*radius);}

/*
	const double PI = 3.14;
	
	'const' IMPLIES INTERNAL LINKAGE, HENCE IT IS NOT VISIBLE OUTSIDE THE TRANSLATION UNIT.
	
	BUT YOU CAN FORCE THE LINKAGE BY WRITING THE STATEMENT AS:
	extern double const PI = 3.14;	
	
	THIS REQUIRES BOTH THE FILES, USER AND THE PROVIDER TOBE COMPILED TOGETHER AS:
	
	g++ file1.cpp file2.cpp -o run
	
	THIS WILL CREATE 'run' EXECUTABLE WHICH HAS CPP CODE OF BOTH THE FILES LINKED TOGETHER AS ONE.
	
	BUT THE BEST WAY TO ENABLE GLOBAL SHARING, IS TO USE 'HEADER FILES', WE WILL DISCUSS THEM NEXT.
*/