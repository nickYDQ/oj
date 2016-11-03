//method1£ºbased on function partition
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& A,int l,int r)
{
    int p = A[l];
    while(l<r)
    {
        while(l<r&&A[r]>=p)
        {
            r--;
        }
        swap(A[l],A[r]);
        while(l<r&&A[l]<=p)
        {
            l++;
        }
        swap(A[l],A[r]);
    }
    return l;
}

void GetLeastNumber(vector<int>& nums,int k)
{
    int l = 0;
    int r = nums.size()-1;
    int index = partition(nums,l,r);
    if(nums.size()<=0||k>nums.size()||k<=0)
    {
        return ;
    }
    while(index!=k-1)
    {
        if(index<k-1)
        {
            l = index+1;
            index = partition(nums,l,r);
            
        }
        else
        {
            r = index-1;
            index = partition(nums,l,r); 
        }
    }
    for(int i =0;i<k;i++)
    {
        printf("%d\n",nums[i]);
    }
}

void main()
{
	vector<int> nums(7);
	nums[0] = 2;
	nums[1] = 4;
	nums[2] = 3;
	nums[3]	= 7;
	nums[4] = 9;
	nums[5] = 6;
	nums[6] = -3;
	GetLeastNumber(nums,3);


}

//2016_11_3

#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& A,int l,int r)
{
    int pivot = A[l];
    while(l<r)
    {
        while(l<r&&A[l]<=pivot)
        {
            l++;
        }
        swap(A[l],A[r]);
        while(l<r&&A[r]>=pivot)
        {
            r--;
        }
        swap(A[r],A[l]);
    }
    return l;
}

int KLeastNumber(vector<int>& nums,int k)
{
    if(k>nums.size()||k<=0||nums.size()<0)
    {
        return 0;
    }
    int l =0;
    int r = nums.size()-1;
    int index = partition(nums,l,r);
    while(index!=k-1)
    {
        while(index<k-1)
        {
            l = index+1;
            index=partition(nums,l,r);
        }
        while(index>k-1)
        {
            r = index-1;
            index = partition(nums,l,r);
          
        }
    }
    for(int i =0 ;i<index;i++)
    {
    	printf("%d",nums[i]);
    }
    return 0;
}
int main()
{
	vector<int> nums(7);
	nums[0] = 2;
	nums[1] = 4;
	nums[2] = 3;
	nums[3]	= 7;

