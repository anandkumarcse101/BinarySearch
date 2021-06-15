//BinrySearch
#include<iostream>
using namespace std;
int binarySearch(int A[],int l_index,int r_index,int target)
{
	int m_index;
	while (l_index <= r_index)
	{
		m_index = l_index + ( r_index-l_index) / 2;
		if (A[m_index] == target)
				return m_index;
		if(A[m_index] < target)
			l_index = m_index + 1;
		else
			r_index = m_index - 1;
	}
	return -1;
}
int main()
{
	int target = 4;
	int A[] = { 1,2,3,4,5,6,7,8,9 };
	int size = (sizeof(A) / sizeof(A[0]))-1;
    int result=	binarySearch(A,0,size,target);
	cout << "The target element persent at:" << result << endl;
	return 0;
	
}