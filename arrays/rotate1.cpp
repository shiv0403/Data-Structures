#include<bits/stdc++.h>
using namespace std;


int main() {

	int n,d;
	scanf("%d%d",&n,&d);
	vector<int> a(n);

	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}


	int start=0;
	int end=d-1;
	while(start<end) {
		swap(a[start], a[end]);
		start++;
		end--;
	}

	start = d;
	end = n-1;

	while(start<end) {
		swap(a[start], a[end]);
		start++;
		end--;
	}

	start=0;
	end=n-1;

	while(start<end) {
		swap(a[start], a[end]);
		start++;
		end--;
	}

	for(int i=0;i<n;++i) {
		printf("%d ",a[i]);
	}printf("\n");

	return 0;
}