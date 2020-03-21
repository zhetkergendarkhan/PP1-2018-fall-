#include <iostream>
#include <deque>
#include <queue>
using namespace std;

queue<int> q;

int main(){
	deque<int> dq;
	char s;
	int x;
	while(true){
		cin >> s;
		if(s == '!') break;
		if(s == '+') {
			cin >> x;
			dq.push_front(x);
		}else if(s == '-'){
			cin >> x;
			dq.push_back(x);
		}else if(s == '*'){
			if(dq.empty()){
				q.push(-10000);
			}else{
				int c = dq.front() + dq.back();
				q.push(c);
			}
			dq.pop_front();
			dq.pop_back();
		}
	}
	while(!q.empty()){
		if(q.front() == -10000){
			cout << "error" << endl;
		}else cout << q.front() << endl;
		q.pop();
	}
	return 0;
}