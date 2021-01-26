#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &a, int n, int d) {

	vector<int> temp;
	for(int i=0;i<d;++i) {
		temp.push_back(a[i]);
	}

	int x=d;
	for(int i=0;i<n&&x<n;++i) {
		a[i] = a[x];
		x++;
	}

	x=n-d;
	int i=0;
	while(x<n) {
		a[x] = temp[i];
		x++;
		i++;
	} 

	return;
}

int main() {

	int n;
	scanf("%d",&n);
	vector<int> a(n);

	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}

	int d;
	scanf("%d",&d);

	rotate(a,n,d);

	for(int i=0;i<n;++i){

		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;

}

