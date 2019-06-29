Given a random set of numbers, Print them in sorted order.

Input:
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print each sorted array in a seperate line. For each array its numbers should be seperated by space.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 1000
1 ≤A[i]<100

Example:
Input:
1
2
3 1

Output:
1 3




using namespace std;
void BubbleSort(int a[],int n)
{
    int i,j;
    for(i = 0; i < n-1;i ++)
    {
        int flag = 0;
        for(j = 0;j < n-i-1;j++)
        {
            if(a[j] > a[j+1]){ 
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            flag++;}
        }
        if(flag == 0) break;
    }
}
void Import(int a[],int n)
{
    for(int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
}
void Export(int a[],int n)
{
    for(int i = 0; i < n;i++)
    {
        cout<<a[i]<<" ";
    }
   cout<<endl;
}
int main() {
	//code
	int testcase,n;
	cin>>testcase;
	while(testcase--)
	{
	    cin>>n;
	   int  a[n];
	    Import(a,n);
	    BubbleSort(a,n);
	    Export(a,n);
	}
	return 0;
}
