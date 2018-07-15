/*Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. The rightmost element is always a leader. 

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print all the leaders.

Constraints:
1 <= T <= 100
1 <= N <= 100
0 <= A[i]<=100

Example:
Input:
2
6
16 17 4 3 5 2
5
1 2 3 4 0
Output:
17 5 2
4 0*/
#include <stdio.h>

int main() {
	//code
	int t,n,i,j,s=0;
	scanf("%d",&t);
	while(t>0){
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	        
	    for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]>a[j])
	                s++;
	           
	        }
	      //  printf("%d %d\n",s,n-i+1);
	        if(s==n-i-1)
	            printf("%d ",a[i]);
	        s=0;
	    }
	    
	    printf("%d\n",a[i]);
	    t--;
	}
	return 0;
}