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

	

 #include<iostream><br>
using namespace std;<br>
struct Node{<br>
	int value;<br>
	struct Node*next;<br>
};<br>
struct Node*head=NULL;<br>
struct Node*sHead=NULL;<br>
struct Node*temp=NULL;<br>
void insert (int new_data){<br>
struct Node*new_node=new Node;<br>
new_node->value=new_data;<br>
new_node->next=head;<br>
head=new_node;<br>
}<br>
int n;<br>
int ele;<br>
int splitIndex;<br>
int main()<br>
{<br>
	int i;<br>
	cout<<"enter the number of elements you want in this list\t";<br>
	cin>>n;<br>
	cout<<"enter elements:"<<endl;<br>
	for(i=0;i<n;i++){<br>
		cin>>ele;<br>
		insert(ele);<br>
		}<br>
		cout<<"\n list of elements:"<<endl;<br>
		Node*t;<br>
		t=head;<br>
		while(t!=NULL){<br>
			cout<<t->value<<"\t";<br>
			t=t->next;<br>
		}<br>
		cout<<"\n\n enter the position you want to the list to split ";<br>
		cin>>splitIndex;<br>
		while(splitIndex<0||splitIndex>n-1){<br>
		cout<<"invalid position try again "<<endl;<br>
		cin>>splitIndex;<br>
		}<br>
		temp=head;<br>
		for(i=0;i<=splitIndex;i++){<br>
		if(i==splitIndex-1){<br>
		Node*tN;<br>
		tN=temp->next;<br>
		sHead=tN;<br>
		temp->next=NULL;<br>
		break;<br>
		}<br>
		temp=temp->next;<br>
		}<br>
		temp=head;<br>
		if(temp==NULL){<br>
		cout<<"\nfirst list is empty"<<endl;<br>
		}else{<br>
		cout<<"\n\nfirst list element"<<endl;<br>
		while(temp!=NULL){<br>
		cout<<temp->value<<"\t";<br>
		temp=temp->next;<br><br>
		}<br>
		}<br>
		temp=sHead;<br>
		if(temp==NULL){<br>
		cout<<"\nsecond list is empty"<<endl;<br>
		}else{<br>
		cout<<"\n\nsecond list elements"<<endl;<br>
		while(temp!=NULL){<br>
		cout<<temp->value<<"\t";<br>
		temp=temp->next;<br>
	}<br>
}<br>
return 0;<br>
}<br>
