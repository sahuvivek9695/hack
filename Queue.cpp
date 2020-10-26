#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue <int> q;
	int arr[]={10,20,50,30,40,90,80,70,60,100};
	for(int i=0;i<10;i++){
		q.push(arr[i]);
	}
	while(!q.empty()){
		cout<<q.front()<<", ";
		q.pop();
	}	
}