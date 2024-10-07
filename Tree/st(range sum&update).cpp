#include <iostream>
#include <vector>

using namespace std;

vector<int> tree;
vector<int> arr;

// Function to build the segment tree
void build(int node, int start, int end) {
    if (start == end) {
        // Leaf node will have a single element
        tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        // Recursively build the segment tree
        build(2 * node + 1, start, mid);
        build(2 * node + 2, mid + 1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
}

// Function to query the sum in the range [L, R]
int query(int node, int start, int end, int L, int R) {
    if (R < start || end < L) {
        // range represented by a node is completely outside the given range
        return 0; // Identity for sum
    }
    if (L <= start && end <= R) {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int leftSum = query(2 * node + 1, start, mid, L, R);
    int rightSum = query(2 * node + 2, mid + 1, end, L, R);
    return leftSum + rightSum; // Combine the results
}

// Function to update the value at index idx
void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        // Leaf node
        arr[idx] = val; // Update the value in the original array
        tree[node] = val; // Update the tree
    } else {
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid) {
            // If idx is in the left child
            update(2 * node + 1, start, mid, idx, val);
        } else {
            // If idx is in the right child
            update(2 * node + 2, mid + 1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
}

int main() {
    // Input array
    vector<int> input = {1, 3, 5, 7, 9, 11};
    arr = input;
    int n = arr.size();
    tree.resize(4 * n); // Maximum size of segment tree

    // Build the segment tree
    build(0, 0, n - 1);

    // Querying the sum in the range [1, 3]
    cout << "Sum of values in range [1, 3]: " << query(0, 0, n - 1, 1, 3) << endl; // Output: 15 (3 + 5 + 7)

    // Updating the value at index 1 to 10
    update(0, 0, n - 1, 1, 10);
    cout << "Sum of values in range [1, 3] after update: " << query(0, 0, n - 1, 1, 3) << endl; // Output: 22 (10 + 5 + 7)

    return 0;
}
