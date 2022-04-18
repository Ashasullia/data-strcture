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
			{<br>
				l = f;<br>
				f = f->next;
			}<br>
			count++;<br>
			l->next = temp;<br>
			temp->next = f;<br>
			cout<<temp->info<<" inserted at position "<<pos<<endl;<br>
		}<br>
		else<br>
			cout<<"Position out of range"<<endl<br>;
	}<br>
}<br>
void singly :: display()<br>
	struct node *temp;<br>
	if ( first == NULL && last == NULL )<br>
	{cout<<"The list is empty...!!!"<<endl<br>;}<br>
	else<br>
	{<br>
		temp = first;<br>
		cout<<"Linked list of "<<count<<" elements : ";<br>
		for ( int i = 1 ; i < count ; i++ )<br>
		{<br>
			cout<<temp->info<<"->";<br>
			temp = temp->next;<br>
		}<br>
		cout<<temp->info<<endl;
	}<br>
}<br>
void singly :: search()<br>
{<br>
	int pos = 0, flag = 0, value;<br>
	struct node *f;<br>
	if ( first == NULL && last == NULL ) {}<br>
	else<br>
	{<br>
		cout<<"Enter the value to be searched : ";<br>
		cin>>value;<br>
		f = first;<br>
		for (int i = 0; i < count; i++)<br>
		{<br>
			pos++;
			if (f->info == value)<br>
			{<br>
				flag++;
				if (flag == 1)<br>
					cout<<"Element "<<value<<" found at position : "<<pos;<br>
				else if (flag > 1 && flag <= count)<br>
					cout<<" , "<<pos;<br>
			}<br>
			f = f->next;<br>
		}<br>
		if (flag == 0)<br>
			cout<<"Element "<<value<<" not found in the list"<<endl;<br>
		else if (flag == 1)<br>
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" time"<<endl;<br>
		else<br>
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" times"<<endl;<br>
	}<br>
}<br>

************************************************************************************<br>
To check the binary tree is a BST <br>
******************************************************************************<br>
#include<bits/stdc++.h><br>
using namespace std;<br>
struct Node<br>
{<br>
int data;<br>
struct Node*left,*right;<br>
Node(int data)<br>
{<br>
this->data=data;<br>
left=right=NULL;<br>
	}<br>
};<br>
bool isBSTUtil(struct Node*root,Node *&prev)<br>
{<br>
if(root)<br>
{<br>
if(!isBSTUtil( root->left,prev))<br>
return false;<br>
if(prev!=NULL && root->data<=prev->data)<br>
return false;<br>
prev=root;
return isBSTUtil(root->right,prev);<br>
}<br>
return true<br>;
}<br>
bool isBST(Node *root)<br>
{<br>
Node *prev=NULL;<br>
return isBSTUtil(root,prev);<br>
}<br>
int main()<br>
{<br>
struct Node*root=new Node(7);<br>
root->left=new Node(5);<br>
root->right=new Node(2);<br>
root->left->left=new Node(3);<br>
root->left->right=new Node(6);<br>
if(isBST(root))<br>
{<br>
cout<<"Is BST"<<endl;<br>
}<br>
else<br><br>
cout<<"Not a BST"<<endl;<br>
return 0;<br>
				
 }<br>
Out put:<br>
![Screenshot (33)](https://user-images.githubusercontent.com/99865138/159218412-a03c97df-38c7-43ba-b8d3-0da2d1039c24.png)<br>
****************************************************************************************<br>	
Write c+= program to implement  merge sort techinque using divide and conquer method <br>
*************************************************************************************<br>
#include<iostream><br>
#include<conio.h><br>
using namespace std;<br>
void Merge(int *a,int low,int high,int mid)<br>
{<br>
int i,j,k,temp[high-low+1];<br>
i=low;<br>
k=0;<br>
j=mid+1;<br>
while(i<=mid&&j<=high)<br>
{<br>
if(a[i]<a[j])<br>
{<br>
temp[k]=a[i];<br>
k++;<br>
i++;<br>
}<br>
else{<br>
temp[k]=a[j];<br>
k++;<br>
j++;<br>
}<br>
}<br>
while(i<=mid)<br>
{<br>
temp[k]=a[i];<br>
k++;<br>
i++;<br>
}<br>
while(j<=high)<br>
{<br>
temp[k]=a[j];<br>
k++;<br>
j++;<br>
}<br>
for(i=low;i<=high;i++)<br>
{<br>
	
a[i]=temp[i-low];<br>
	
}<br>
	
}<br>
	
void MergeSort(int *a,int low,int high)<br>
	
{<br>
	
int mid;<br>
	
if(low<high)<br>
	
{<br>
	
mid=(low+high)/2;<br>
	
MergeSort(a,low,mid);<br>
	
MergeSort(a,mid+1,high);<br>
	
Merge(a,low,high,mid);<br>
	
}<br>
	
}<br>
	
int main()<br>
	
{<br>
	
int n,i;<br>
	
cout<<"\nEnter the number of data element to be sorted:";<br>
	
cin>>n;<br>
	
int arr[n];<br>
	
for(i=0;i<n;i++)
{<br>
	
cout<<"enter the element"<<i+1<<":";<br>
	
cin>>arr[i];<br>
	
}<br>
	
MergeSort(arr,0,n-1);<br>
	
cout<<"\nSorted Data";<br>
	
for(i=0;i<n;i++)<br>
	
cout<<"->"<<arr[i];<br>
	
}<br>
Output:<br>
![Screenshot (42)](https://user-images.githubusercontent.com/99865138/162889536-6735b1ad-901a-488f-b811-7a9f333215ed.png)<br>
***********************************************************************************************************<br>
datastructure doube linked list program<br>
* *************************************************************************************************************<br>	
#include<iostream><br>
#include<cstdio><br>
#include<cstdlib><br>
using namespace std;<br>
struct node<br>
{<br>
    int info;<br>
    struct node *next;<br>
    struct node *prev;<br>
}*start;<br>
class double_llist<br>
{<br>
    public:<br>
        void create_list(int value);<br>
        void add_begin(int value);<br>
        void add_after(int value, int position);<br>
        void delete_element(int value);<br>
        void search_element(int value);<br>
        void display_dlist();<br>
        void count();<br>
        void reverse();<br>
        double_llist()<br>
        {<br>
            start = NULL;  <br>
        }<br>
};
 int main()<br>
{<br>
    int choice, element, position;<br>
    double_llist dl;<br>
    while (1)<br>
    {<br>
        cout<<endl<<"----------------------------"<<endl;<br>
        cout<<endl<<"Operations on Doubly linked list"<<endl;<br>
        cout<<endl<<"----------------------------"<<endl; <br>       
        cout<<"1.Create Node"<<endl;
        cout<<"2.Add at begining"<<endl;<br>
        cout<<"3.Add after position"<<endl;<br>
        cout<<"4.Delete"<<endl;<br>
        cout<<"5.Display"<<endl;<br>
        cout<<"6.Count"<<endl;<br>
        cout<<"7.Reverse"<<endl;<br>
        cout<<"8.Quit"<<endl;
        cout<<"Enter your choice : ";<br>
        cin>>choice;<br>
        switch ( choice )<br>
        {<br>
        case 1:<br>
            cout<<"Enter the element: ";<br>
            cin>>element;<br>
            dl.create_list(element);<br>
            cout<<endl;<br>
            break;<br>
        case 2:<br>
            cout<<"Enter the element: ";<br>
            cin>>element;<br>
            dl.add_begin(element);<br>
            cout<<endl;<br>
            break;
        case 3:<br>
            cout<<"Enter the element: ";<br>
            cin>>element;<br>
            cout<<"Insert Element after postion: ";<br>
            cin>>position;<br>
            if(position<=0)<br>
			{<br>
				cout<<"invalid position "<<endl;<br>
				break;<br>
			}<br>
            dl.add_after(element, position);<br>
            cout<<endl;<br>
            break;<br>
        case 4:
            if (start == NULL)<br>
            { <br>                     
                cout<<"List empty,nothing to delete"<<endl; <br> 
                break;<br>
            }<br>
            cout<<"Enter the element for deletion: ";<br>
            cin>>element;<br>
            dl.delete_element(element);<br>
            cout<<endl;<br>
            break;<br>
        case 5:<br>
            dl.display_dlist();<br>
            cout<<endl;<br>
            break;<br>
        case 6:<br>
            dl.count();<br>
            break; <br>   
        case 7:<br>
            if (start == NULL)<br>
            {<br>
                cout<<"List empty,nothing to reverse"<<endl;<br>
                break;<br>
            }<br>
            dl.reverse();<br>
            cout<<endl;<br>
            break;<br>
        case 8:<br>
            exit(1);<br>
        default:<br>
            cout<<"Wrong choice"<<endl;<br>
        }<br>
    }<br>
    return 0;<br>
}<br>
 void double_llist::create_list(int value)<br>
{<br>
    struct node *s, *temp;<br>
    temp = new(struct node);<br>
    temp->info = value;<br>
    temp->next = NULL;<br>
    if (start == NULL)<br>
    {<br>
        temp->prev = NULL;<br>
        start = temp;<br>
    }<br>
    else<br>
    {<br>
        s = start;<br>
        while (s->next != NULL)<br>
            s = s->next;<br>
        s->next = temp;<br>
        temp->prev = s;<br>
    }<br>
}<br>
 void double_llist::add_begin(int value)<br>
{<br>
    if (start == NULL)<br>
    {<br>
        cout<<"First Create the list."<<endl;<br>
        return;<br>
    }<br>
    struct node *temp;<br>
    temp = new(struct node);<br>
    temp->prev = NULL;<br>
    temp->info = value;<br>
    temp->next = start;<br>
    start->prev = temp;<br>
    start = temp;<br>
    cout<<"Element Inserted"<<endl;<br>
}<br>
void double_llist::add_after(int value, int pos)<br>
{<br>
    if (start == NULL)<br>
    {<br>
        cout<<"First Create the list."<<endl;<br>
        return;<br>
    }<br>
    struct node *tmp, *q;<br>
    int i;<br>
    q = start;<br>
    for (i = 0;i < pos - 1;i++)<br>
    {<br>
        q = q->next;<br>
        if (q == NULL)<br>
        {<br>
            cout<<"There are less than ";<br>
            cout<<pos<<" elements."<<endl;<br>
            return;<br>
        }<br>
    }<br>
    tmp = new(struct node);<br>
    tmp->info = value;<br>
    if (q->next == NULL)<br>
    {<br>
        q->next = tmp;<br>
        tmp->next = NULL;<br>
        tmp->prev = q;<br>      
    }<br>
    else<br>
    {<br>
        tmp->next = q->next;<br>
        tmp->next->prev = tmp;<br>
        q->next = tmp;<br>
        tmp->prev = q;<br>
    }<br>
    cout<<"Element Inserted"<<endl;<br>
}<br>
 void double_llist::delete_element(int value)<br>
{<br>
    struct node *tmp, *q;<br>
        if (start->info == value)<br>
    {<br>
        tmp = start;<br>
        start = start->next;  <br>
        start->prev = NULL;<br>
        cout<<"Element Deleted"<<endl;<br>
        free(tmp);<br>
        return;<br>
    }
    q = start;
    while (q->next->next != NULL)<br>
    {  <br>
               if (q->next->info == value)  <br>
        {<br>
            tmp = q->next;<br>
            q->next = tmp->next;<br>
            tmp->next->prev = q;<br>
            cout<<"Element Deleted"<<endl;<br>
            free(tmp);<br>
            return;<br>
        }<br>
        q = q->next;<br>
    }<br>
        if (q->next->info == value)   <br> 
    {<br>
        tmp = q->next;<br>
        free(tmp);<br>
        q->next = NULL;<br>
        cout<<"Element Deleted"<<endl;<br>
        return;<br>
    }<br>
    cout<<"Element "<<value<<" not found"<<endl;<br>
}<br>
 void double_llist::display_dlist()<br>
{<br>
    struct node *q;<br>
    if (start == NULL)<br>
    {<br>
        cout<<"List empty,nothing to display"<<endl;<br>
        return;<br>
    }<br>
    q = start;<br>
    cout<<"The Doubly Link List is :"<<endl;<br>
    while (q != NULL)<br>
    {<br>
        cout<<q->info<<" <-> ";<br>
        q = q->next;<br>
    }<br>
    cout<<"NULL"<<endl;<br>
}<br>
 void double_llist::count()<br>
{<br>
    struct node *q = start;<br>
    int cnt = 0;<br>
    while (q != NULL)<br>
    {<br>
        q = q->next;<br>
        cnt++;<br>
    }<br>
    cout<<"Number of elements are: "<<cnt<<endl;<br>
}<br>
 void double_llist::reverse()<br>
{<br>
    struct node *p1, *p2;<br>
    p1 = start;<br>
    p2 = p1->next;<br>
    p1->next = NULL;<br>
    p1->prev = p2;<br>
    while (p2 != NULL)<br>
    {<br>
        p2->prev = p2->next;<br>
        p2->next = p1;<br>
        p1 = p2;<br>
        p2 = p2->prev;<br>
    }<br>
    start = p1;<br>
    cout<<"List Reversed"<<endl;<br>
}<br>
	
