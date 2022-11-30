#include<bits/stdc++.h>
using namespace std;


class Sol{
public:
int search(int arr[], int N, int X)
{   
    for(int i = 0 ; i<N ; i++){
        if(arr[i]==X){
            return i;
            }
    }
    return -1;
}
};
int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int sizearr;
		cin>>sizearr;
		int arr[sizearr];
		int x;
  		for(int i=0;i<sizearr;i++)
        	{
            		cin>>arr[i];
        	}
        	cin>>x;
        	Sol ob;
        	cout<<ob.search(arr,sizearr,x)<<endl;
   		 }

    	return 0;
    
}
