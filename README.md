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
output:<br>
![image](https://user-images.githubusercontent.com/99865138/154903732-8906d224-461b-4270-800e-1650045bc1c4.png)<br>
	
	
#include<iostream><br>
#include<conio.h><br>
#include<iomanip><br>
#include<stdlib.h><br>
using namespace std;<br>
struct node	<br>
{<br>
	int info;<br>
	struct node *next;<br>
}*first, *last;<br>
int count = 0;<br>
class singly<br>
{<br>
public:<br>
node* create_node(int);<br>
void insert_begin();<br>
void insert_end();<br>
void insert_pos();<br>
void search();<br>
singly()<br>
{<br>
first = NULL;<br>
last = NULL;<br>
}<br>
};<br>
int main()<br><br>
{<br>

int choice;<br>
singly sl,s2;<br>
do<br>
{
cout<<"\t\t\t--------------------------------"<<endl;<br>
cout<<"\t\t\tOperations on singly linked list"<<endl;<br>
cout<<"\t\t\t--------------------------------"<<endl;<br>
cout<<"1.Insert at first\t";<br>
cout<<"2.Insert at Last\t";<br>
cout<<"3.Insert at Position"<<endl;<br>
cout<<"4.Search\t\t";<br>
cout<<"5.Display\t\t";<br>
cout<<"6.Exit\t\t\t"<<endl;<br>
cout<<"Enter your choice : ";<br>
cin>>choice;<br>
switch(choice)<br>
{
case 1:	sl.insert_begin();<br>
s2.display();<br>
break;<br>
case 2:	sl.insert_end();<br>
s2.display();<br>
break;<br>
			case 3:	sl.insert_pos();<br>
				s2.display();<br>
				break;<br>
			case 4:sl.search();<br>
				s2.display();<br>
				break;<br>
			case 5:s2.display();<br>
				break;<br>
			case 6:cout<<"Successfully Exited"<<endl;<br>
				s2.display();<br>
				exit(0);<br>
				break;<br>
			default:cout<<"Wrong Choice...???"<<endl;<br>
				s2.display();<br>
				break;<br>
		}<br>
	}<br>
	while(choice != 20);<br>
	getch();<br>
}<br>
node* singly :: create_node(int num)<br>
{<br>
	struct node *nn;<br>
	nn = new(struct node);<br>
	if (nn == NULL)<br>
	{<br>
		cout<<"Memory not allocated"<<endl;<br>
		return 0;<br>
	}<br>
	else<br>
	{<br>
		nn->info = num;<br>
		nn->next = NULL;<br>
		return nn;<br>
	}<br>
}<br>
void singly :: insert_begin()<br>
{<br>
	int value;<br>
	struct node *temp;<br>
	cout<<"Enter the element to be inserted : ";<br>
	cin>>value;<br>
	temp = create_node(value);<br>
	if ( first == last && first == NULL )<br>
	{<br>
		count++;v<br>
		first = last = temp;<br>
		first->next = last->next = temp->next;<br>
		cout<<first->info<<" inserted at first in the empty list"<<endl;<br>
	}<br>
	else<br>
	{<br>
		count++;<br>
		temp->next = first;<br>
		first = temp;<br>
		cout<<first->info<<" inserted at first"<<endl;<br>
	}<br>
}<br>
void singly :: insert_end()<br>
{<br>
	int value;<br>
	struct node *temp;<br><br>
	cout<<"Enter the element to be inserted : ";<br>
	cin>>value;<br>
	temp = create_node(value);<br>
	{<br>
		count++;<br>
		first = last = temp;<br>
		first->next = last->next = temp->next;<br>
		cout<<last->info<<" inserted at first in the empty list"<<endl;<br>
	}<br>
	else<br>
	{<br>
		count++;<br>
		last->next = temp;<br>
		last = temp;<br>
		cout<<last->info<<" inserted at last"<<endl;<br>
	}<br>
}<br>
void singly :: insert_pos()<br>
{<br>
	int value, pos;<br>
	struct node *temp, *f, *l;<br>
	cout<<"Enter the element to be inserted : ";<br>
	cin>>value;<br>
	temp = create_node(value);<br>
	if ( first == NULL && last == NULL )<br>
	{<br>
		cout<<"The list is empty, Pls enter the position [ SAY 1 ] : ";<br>
		cin>>pos;<br>
		if ( pos == 1 )<br><br>
		{<br>
			count++;<br>
			first = last = temp;<br>
			first->next = last->next = temp->next;<br>
			cout<<temp->info<<" inserted at first in the empty list"<<endl;<br>
		}<br>
		else<br>
			cout<<"Invalid Position"<<endl;<br>
	}<br>
	else<br>
	{<br><br>
		cout<<"Enter the position from 1 to "<<count + 1<<" : ";<br>
		cin>>pos;<br>
		if ( pos == 1 )<br>
		{<br>
			count++;<br>
			temp->next = first;<br>
			first = temp;<br>
			cout<<first->info<<" inserted at first"<<endl;<br>
		}<br>
		else if ( pos == count + 1 )<br>
		{<br>
			count++;<br><br>
			last = temp;<br>
			cout<<last->info<<" inserted at last"<<endl;<br>
		}<br>
		else if (pos > 1  && pos <= count)<br><br>
		{<br>
			f = first;<br><br>
			{
				l = f;
				f = f->next;
			}
			count++;
			l->next = temp;
			temp->next = f;
			cout<<temp->info<<" inserted at position "<<pos<<endl;
		}
		else
			cout<<"Position out of range"<<endl;
	}
}
void singly :: display()
{
	struct node *temp;
	if ( first == NULL && last == NULL )
	{cout<<"The list is empty...!!!"<<endl;}
	else
	{
		temp = first;
		cout<<"Linked list of "<<count<<" elements : ";
		for ( int i = 1 ; i < count ; i++ )
		{
			cout<<temp->info<<"->";
			temp = temp->next;
		}
		cout<<temp->info<<endl;
	}
}
void singly :: search()
{
	int pos = 0, flag = 0, value;
	struct node *f;
	if ( first == NULL && last == NULL ) {}
	else
	{
		cout<<"Enter the value to be searched : ";
		cin>>value;
		f = first;
		for (int i = 0; i < count; i++)
		{
			pos++;
			if (f->info == value)
			{
				flag++;
				if (flag == 1)
					cout<<"Element "<<value<<" found at position : "<<pos;
				else if (flag > 1 && flag <= count)
					cout<<" , "<<pos;
			}
			f = f->next;
		}
		if (flag == 0)
			cout<<"Element "<<value<<" not found in the list"<<endl;
		else if (flag == 1)
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" time"<<endl;
		else
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" times"<<endl;
	}
}


