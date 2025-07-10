// Solution of Book Allocation Problem using Binary Search
// Problem Statement: Given N books and M students, allocate books such that the maximum number of pages allocated to a student is minimized. Each book has a certain number of pages, and each student can only read one book at a time.

#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& books, int n, int m, int mid) {
    int students = 1;
    int pages = 0;

   for(int i=0; i<n; i++) {
        if(books[i]>mid) return false;

        if(pages + books[i] <= mid) {
            pages += books[i];
        } else {
            students++;
            pages = books[i];
        }
    }
    if(students > m) return false;
    if(students < m) return true;
    return true;
}

int sumofpages(vector<int>& books, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += books[i];
    }
    return sum;
}

int findPages(vector<int>& books, int n, int m){
    int st = 0, end = sumofpages(books, n);
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isValid(books, n, m, mid)) {
            ans = mid;
           end = mid-1; // Try to find a smaller maximum
        } else {
            st = mid + 1; // Increase the maximum
        }
    
    }
    return ans;
}
int main(){
    int n; 
    int m;
    cout << "Enter number of books: ";
    cin >> n;
    cout << "Enter number of students: ";
    cin >> m;

    vector<int> books(n);
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int result = findPages(books, n, m);
    cout << "The minimum number of pages that can be allocated is: " << result << endl;

    return 0;


}




