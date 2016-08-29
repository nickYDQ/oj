#include<iostream>
#include<vector>
using namespace std;

//Qsort
 /*
int partition(vector<int>& A,int l,int r)
{
	int p = A[l];
	while(l<r)
	{
		while(l<r&&A[r]>=p)
			r--;
		swap(A[l],A[r]);
		while(l<r&&A[l]<=p)
			++l;
		swap(A[l],A[r]);
		
	}

	return l;
}

void qSort(vector<int>&A,int l,int r)
{
	int p=0;
	if(l<r)
	{
		p = partition(A,l,r);
		qSort(A,l,p-1);
		qSort(A,p+1,r);
	}
}
*/
//HeapSort
void HeapAdjust(vector<int>& A,int s,int m)
{
	
	int temp = A[s];
	for(int j=2*s+1;j<=m;j=j*2)
	{
		if(j<m&&A[j]<A[j+1])
		{
			j++;		
		}
		if(temp>=A[j])
		{
			break;
		}
		A[s]=A[j];
		s=j;
	}
	A[s] = temp;
}
void HeapSort(vector<int>& A,int l)
{
	for(int i=(l-1)/2;i>=0;i--)
	{
		HeapAdjust(A,i,l);
	}
	for(int j=l;j>0;j--)
	{
		swap(A[0],A[j]);
		HeapAdjust(A,0,j-1);
	}
}
void print(const vector<int>& A)
{
	for(auto i :A)
	{
		cout<<i<<" ";	
	}
	cout<<endl;
}
 
int  main()
{
	vector<int> t1;
	vector<int> t2 = {1};
	vector<int> t3 = {1,1,1};
	vector<int> t4 = {1,2,3,4,5};
	vector<int> t5 = {2,2,8,4,5};
	vector<int> t6 = {-1,2,-3,4,5};
    	vector<int> t7 = {1,2,3,4,4,50};
 
	// qSort(t1,0,t1.size()-1);
	// qSort(t2,0,t2.size()-1);
	// qSort(t3,0,t3.size()-1);
	// qSort(t4,0,t4.size()-1);
	// qSort(t5,0,t5.size()-1);
    	// qSort(t6,0,t6.size()-1);
     	// qSort(t7,0,t7.size()-1);

	HeapSort(t1,t1.size()-1);
	HeapSort(t2,t2.size()-1);
	HeapSort(t3,t3.size()-1);
	HeapSort(t4,t4.size()-1);
	HeapSort(t5,t5.size()-1);
	HeapSort(t6,t6.size()-1);
	HeapSort(t7,t7.size()-1);

	print(t1);
   	print(t2);
   	print(t3);
    	print(t4);
    	print(t5);
    	print(t6);
    	print(t7);

	return 0;
}
