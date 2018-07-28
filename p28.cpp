#include<iostream>
using namespace std;

class Distance{
 	int dist;
 	int sum;
 	float avg;
public:
 	Distance(){
 		dist=0;
 		sum=0;
 		avg=0.0;
 	}
 	void getDist(int d);
 	void addDist(int x);
 	float avgDist(int c);
 };

void Distance::getDist(int d){
	dist = d;
}

void Distance::addDist(int x){
 	sum+=x;
}
float Distance::avgDist(int c){
	return sum/c;
}

int main(int argc, char const *argv[])
{
	int n,x;
	cout<<"Enter the number of inputs : ";
	cin>>n;
	Distance d, array[n];
	cout<<endl;
	for (int i = 0; i < n; ++i){
		cin>>x;
		cout<<endl;
		array[i].getDist(x);
	}

	for (int i = 0; i < n; ++i)
	{
		d.addDist(array[i].dist);
	}

	float r = d.avgDist(n);
	cout<<"\nAverage : "<<r<<endl;

	return 0;
}



