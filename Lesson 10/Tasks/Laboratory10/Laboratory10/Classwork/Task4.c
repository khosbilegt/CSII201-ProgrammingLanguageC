/*
#include <stdio.h>
void readArr(int a[], int n);
void print(int a[], int n);
int modul(int x);
int sum(int a[], int n);
int avg(int a[], int n);
int product(int a[], int n);


int main() {
    int a[100], n, b[100];
    printf("n toonii utgiig oruul: ");
    scanf("%d", &n);
    readArr(a, n);
    printf("Tanii oruulsan daraalal: ");
    print(a, n);
    
    int mu, i;
    mu = avg(a, n);
    printf("mu-iin utga: %d\n", mu);
    for(i = 0; i <n; i++) {
        b[i] = modul(a[i] - mu);
        printf("%d\n", b[i]);
    }
    
    int alpha;
    alpha = product(b, n);
    printf("Alpha-iin utga: %d\n", alpha);
    return 0;
}

void readArr(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}

int modul(int x) {
    if (x >= 0) {
        return x;
    } else {
        return -x;
    }
}

int sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int avg(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    int avg = sum / n;
    return avg;
}

int product(int a[], int n) {
    int prod = 1;
    for (int i = 0; i < n; i++) {
        prod = prod * a[i];
    }
    return prod;
}
*/
