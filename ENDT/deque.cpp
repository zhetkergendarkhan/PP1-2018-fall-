#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    queue <int> q;
    char c;
    int x , y;
    while(true){
        cin >> c;
        if(c == '!') break;
        if(c == '+'){
            cin >> x;
            dq.push_front(x);
        }else if(c == '-'){
            cin >> x;
            dq.push_back(x);
        }else if(c == '*'){
            if(dq.size() >= 2){
            y = dq.front() + dq.back();
            q.push(y);
            dq.pop_back();
            dq.pop_front();
            }else if(dq.size() == 1){
                y = dq.front() + dq.back();
                q.push(y);
                dq.pop_back();
            }
            else q.push(-1000);
        }
    }
    while(!q.empty()){
        if(q.front() == -1000){
            cout << "error" << endl;
            q.pop();
        }else {
        cout << q.front() << endl;
        q.pop();
        }
    }
    return 0;
}