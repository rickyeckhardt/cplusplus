//TICPP Exercise adding two vectors together to make a third vector

//Written by Raman Soldier June 19 2007

//Takes two vectors with 30 elements and adds them together backwards

#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> vec1, vec2;			//Creates vector of int named vec1 and vec2
vector<float> vec3;				//Creates vector of floats named vec3

for( int i = 0 ; i < 30 ; i++ ) {
	vec1.push_back(i);				//assigns value of 
	vec2.push_back(30-i-1);
	}
	
for( int i = 0 ; i < vec1.size() ; i++)
	vec3.push_back(vec1[i] + vec2[i]);
	
for( int i = 0 ; i < vec1.size() ; i++ )
	cout << vec1[i] << " + " << vec2[i] << " = " << vec3[i] << endl;

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./threevectoraddition
0 + 29 = 29
1 + 28 = 29
2 + 27 = 29
3 + 26 = 29
4 + 25 = 29
5 + 24 = 29
6 + 23 = 29
7 + 22 = 29
8 + 21 = 29
9 + 20 = 29
10 + 19 = 29
11 + 18 = 29
12 + 17 = 29
13 + 16 = 29
14 + 15 = 29
15 + 14 = 29
16 + 13 = 29
17 + 12 = 29
18 + 11 = 29
19 + 10 = 29
20 + 9 = 29
21 + 8 = 29
22 + 7 = 29
23 + 6 = 29
24 + 5 = 29
25 + 4 = 29
26 + 3 = 29
27 + 2 = 29
28 + 1 = 29
29 + 0 = 29

*/

