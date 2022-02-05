#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 
using namespace std;
typedef long long ll;

int main(){
	
	int N;

	cin>>N;


	while(N-- > 0){
		int x, y;
		cin>>x>>y;
	
		if(x > y)cout<<">"<<endl;
		else if(x < y) cout<<"<"<<endl;
		else cout<<"="<<endl;
	}
}