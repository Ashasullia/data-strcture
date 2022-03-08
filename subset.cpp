

#include <iostream>
#include<limits.h>
using namespace std;
/*
  C++ Program for
  Subset sum using backtracking
*/
class Subset
{
public:
// Print result
void printSum(int result[], int front, int tail)
{
cout << "[";
for (int i = front; i < tail; ++i)
{
if (result[i] != INT_MAX)
{
cout << " " << result[i] << " ";
}
}
cout << "]\n";
}
// Finding the subset with given sum in an array
void subsetSum(int arr[], int result[], int sum, int size, int current_sum, int location)
{
if (location == -1)
{
return;
}
// Through by recursion find previous element
this->subsetSum(arr, result, sum, size, current_sum, location - 1);
// Get element
result[location] = arr[location];
if (current_sum + arr[location] == sum)
{
// When we get sum
this->printSum(result, location, size);
}
// Through by recursion find previous element
this->subsetSum(arr, result, sum, size, current_sum + arr[location], location - 1);
result[location] = INT_MAX;
}
// Handles the request to find subset sum
void findSubset(int arr[], int size, int sum)
{
if (size <= 0)
{
return;
}
// Used to collect result
int result[size];
// Set initial value
for (int i = 0; i < size; ++i)
{
// Initialize with max value
// Assuming that all elements of are less than the maximum integer
result[i] = INT_MAX;
}
cout << "Subser Sum of " << sum << " is \n";
// Find subset with given sum
this->subsetSum(arr, result, sum, size, 0, size - 1);
}
};
int main()
{
Subset task = Subset();
int n;
cout<<" enter the element of list:"<<endl;
cin>>n;
// Define array elements
int arr[n]={};
cout<<"enter the array element"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
//Get the size
int size = sizeof(arr) / sizeof(arr[0]);
int sum;
cout<<"\n enter the sum element"<<endl;
cin>>sum;
task.findSubset(arr, size, sum);
return 0;
}

