#include<iostream>
#include<typeinfo>
#include<functional>
using namespace std;

  
int main()
{	
	int *a;
	int length,total=0;
	double average;
	cin>>length;
	
	a = new int[length];
	
	for(auto i =0; i<length; i++)
	{
		cin >> *(a+i);
	}
 	for(auto i =0; i<length; i++)
	{
		total += a[i];
	}
	average = total /(double)length;
	
	cout << total << endl;
	cout << average << endl;
	
	delete[] a;
}

//동적 메모리할당 : 

