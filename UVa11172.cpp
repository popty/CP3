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
	
	while(true){
		int k;
		cin>>k;
		if(k == 0)break;
		int ox, oy;
		cin>>ox>>oy;

		while(k-->0){
			int x, y;
			cin>>x>>y;
			if(x > ox && y > oy)cout<<"NE"<<endl;

			else if(x == ox || y == oy)cout<<"divisa"<<endl;

			else if(x < ox && y > oy) cout<<"NO"<<endl;

			else if(x>ox && y<oy) cout<<"SE"<<endl;

			else cout<<"SO"<<endl;

		}
	}

	
}