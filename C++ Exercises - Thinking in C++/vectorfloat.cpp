//TICPP Exercise

//Written by Ramen Soldier June 19 2007

//Put 25 floats into a vector and outputs them

#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<float> fnums;
float num;

for( int i = 0; i < 25; i++ )
	fnums.push_back(i + .1); //By adding .1 here it cuts out the next for statement
	
//for( int i = 0; i < fnums.size() ; i++ )
//	fnums[i] = fnums[i] + .1;
	
for( int i = 0; i < fnums.size() ; i++ )
	cout << fnums[i] << endl;


}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./vectorfloat                     
0.1
1.1
2.1
3.1
4.1
5.1
6.1
7.1
8.1
9.1
10.1
11.1
12.1
13.1
14.1
15.1
16.1
17.1
18.1
19.1
20.1
21.1
22.1
23.1
24.1


*/