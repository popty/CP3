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

	double down, loan, dep[101];


	while(true){
		int dur, numRec;
		 
		cin>>dur>>down>>loan>>numRec;

		if(dur < 0) break;

		int m;
		double d;

		while(numRec-- > 0){
			
			cin>>m>>d;

			for(int i = m; i<101; i++){
				dep[i] = d;
			}

		}

		int now = 0;
		double emi = loan/dur;
		double curVal = (loan+down)*(1-dep[0]);
		double curLoan = loan;


		while(curVal < curLoan){
			now++;
			curLoan-=emi;
			curVal-=curVal*dep[now];
		}

		cout<<now<<" month";
		if(now!=1)cout<<"s";
		cout<<endl;

	}
}