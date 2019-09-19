#include<iostream>
#include<stack>

using namespace std;

 Func(stack<int> s){
 	int esto;
 	
 	 while(!s.empty()){
	 	esto=s.top();
		 s.pop();
	}
		 return esto;
}
int main()

{
	stack<int> s;
    
	s.push(10);
	s.push(2);
	s.push(3);	
	s.push(4);	

	cout<<"AJA: "<<Func(s)<<endl;
	return 0;
}

