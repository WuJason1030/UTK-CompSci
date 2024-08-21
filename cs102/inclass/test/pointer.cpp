#include <iostream>
using namespace std;

int main() {
	int k;
	int *ptr_k;

	ptr_k = &k;

	*ptr_k = 771;

	printf("%d'n", ptr_k);
}
