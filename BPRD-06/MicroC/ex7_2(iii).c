

void main() {
    int arr[7];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 0;

    int freq[4];
    int max;
    max = 3;

    histogram(7, arr, max, freq);

    int i;
    i = 0;
    while (i <= max) {
        print freq[i];
    }
}

void histogram(int n, int ns[], int max, int freq[]) {
    int i;
    i = 0;
    
    while (i < n) {
        int j;
        j = ns[i];
        freq[j] = freq[j] + 1;

        i = i + 1;
    }
}