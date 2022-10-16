#include <iostream>
#include <vector>

using namespace std;

void AddOne(vector<int>& digits)
{
	// initialize an index (digit of units)
	int index = digits.size() - 1;

	// while the index is valid and the value at [index] ==
	// 9 set it as 0
	while (index >= 0 && digits[index] == 9)
		digits[index--] = 0;

	// if index < 0 (if all digits were 9)
	if (index < 0)
		// insert an one at the beginning of the vector
		digits.insert(digits.begin(), 1, 1);

	// else increment the value at [index]
	else
		digits[index]++;
}

// Driver code
int main()
{
	vector<int> digits{ 1, 7, 8, 9 };

	AddOne(digits);

	for (int digit : digits)
		cout << digit << ' ';

	return 0;
}
// This code is contributed
// by Gatea David
c