# data-strcture<br>
#include<iostream.h><br>
#include<math.h><br>
#include<conio.h><br>
int main()<br>
{<br>
	int a,b,sum;<br>
	cout<<"enter two numbers\n"<<endl;<br>
	cin>>a>>b>>endl;<br>
	cout<<"add two digit\n"<<endl;<br>
	sum=a+b;<br>
	cout<<"sum is"+sum<<endl;<br>
}<br>


#include<iostream><br>
using namespace std;<br>

int main()<br>
{<br>
int size, i, arr1[10], arr2[10], add[10];<br>
	
cout << "\nPlease Enter the Array Size =  ";<br>	  
cin >> size;<br>
	
cout << "\nPlease Enter the First Array Items= ";<br>
{<br>
cin >> arr1[i];<br>
}<br>
cout << "\nPlease Enter the Second Array Items =  ";<br>
for(i = 0; i < size; i++)<br>
{<br>
cin >> arr2[i];<br>
}<br>
cout << "\nThe Final Result of adding 2 One Dimensional Arrays = ";<br>
for(i = 0; i < size; i++)<br>
{<br>
add[i] = arr1[i] + arr2[i];<br>
cout << add[i] << " ";<br>
}<br>

 return 0;<br>
}<br>
