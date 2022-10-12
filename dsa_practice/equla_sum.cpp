// C++ program to find whether two elements exist
// whose sum is equal to sum of rest of the elements.
#include<bits/stdc++.h>
using namespace std;

// Function to check whether two elements exist
// whose sum is equal to sum of rest of the elements.
bool checkPair(int arr[],int n)
{
	// Find sum of whole array
	int sum = 0;
	for (int i=0; i<n; i++)
		sum += arr[i];

	// If sum of array is not even than we can not
	// divide it into two part
	if (sum%2 != 0)
		return false;

	sum = sum/2;

	// For each element arr[i], see if there is
	// another element with value sum - arr[i]
	unordered_set<int> s;
	for (int i=0; i<n; i++)
	{
		int val = sum-arr[i];

		// If element exist than return the pair
		if (s.find(val) != s.end())
		{
			printf("Pair elements are %d and %d\n",
									arr[i], val);
			return true;
		}

		s.insert(arr[i]);
	}

	return false;
}

// Driver program.
int main()
{
	int arr[] = {2, 11, 5, 1, 4, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	if (checkPair(arr, n) == false)
	printf("No pair found");
	return 0;
}
