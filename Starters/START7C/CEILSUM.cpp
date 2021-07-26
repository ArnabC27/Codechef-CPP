/**
 * Ceiling Sum 
 * Problem Code: CEILSUM

 You are given two integers A,B. You have to choose an integer X in the range [minimum(A,B), maximum(A,B)] such that:
										⌈B−X2⌉+⌈X−A2⌉ is maximum.

What is the maximum sum you can obtain if you choose X optimally?

Note: ⌈x⌉ : Returns the smallest integer that is greater than or equal to x (i.e rounds up to the nearest integer). 
For example, ⌈1.4⌉=2, ⌈5⌉=5, ⌈−1.5⌉=−1, ⌈−3⌉=−3 , ⌈0⌉=0.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, two integers A,B.

Output Format
For each testcase, output the maximum sum of ⌈B−X2⌉+⌈X−A2⌉.

Constraints
1≤T≤105
1≤A,B≤109

Sample Input 1 
3
2 2
1 11
13 6

Sample Output 1 
0
6
-3

Explanation
In the first test case, there is only one possible value of X which is equal to 2. 
So the sum is equal to ⌈2−22⌉+⌈2−22⌉ = ⌈ 0⌉+⌈ 0⌉ = 0+0=0.

In the second test case, we can choose X to be 2. 
So sum is equal to ⌈11−22⌉+⌈2−12⌉ = ⌈ 4.5⌉+⌈ 0.5⌉ = 5+1=6. 
There is no possible way to choose an integer X in the range [1,11] such that sum is greater than 6.
*/


#include <bits/stdc++.h>
using namespace std;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		if(a == b)
		{
			cout << "0\n";
		}
		else if(b > a)
		{
			cout << (b - a) / 2 + 1 << "\n";
		}
		else
		{
			if((a - b) % 2 == 0)
			{
				cout << (b - a) / 2 + 1 << "\n";
			}
			else
			{
				cout << (b - a) / 2 << "\n";
			}
		}
	} 
	return 0;
}
