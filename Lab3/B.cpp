

#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
    int c = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0)
			c++;
	}

    cout << c;


	return 0;
}

