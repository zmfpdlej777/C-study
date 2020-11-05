void allview(int n[]) {
	for (int i = 0; i < 5; i++) { printf("%d ", n[i]); }

}

int Max(int n[]) {
	int max = n[0];
	for (int i = 0; i < 5; i++) {
		if (n[i] >= max) { max = n[i]; }

	}
	return max;
}

int Min(int n[]) {
	int min = n[0];
	for (int i = 0; i < 5; i++) {
		if (n[i] < min) { min = n[i]; }
	}
	return min;
}