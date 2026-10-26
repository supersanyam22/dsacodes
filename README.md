# linked list
DSA Lab Program
Program 1: Singly Linked List in C++
Aim:To implement a singly linked list in C++ and perform various linked list operations.

### Algorithm

1. Define a node structure containing data and a pointer to the next node.
2. Initialize the head pointer to "nullptr".
3. Perform the linked list operations as required.
4. Display the linked list after performing the operations.

### Time Complexity

- Insertion at the beginning: O(1)
- Insertion at the end: O(n)
- Deletion: Depends on the position and implementation.
- Traversal and display: O(n)
- Searching: O(n)

### Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| 1 | Insert 10, 20, 30 at end | 10 -> 20 -> 30 -> NULL |
| 2 | Insert 5 at beginning | 5 -> 10 -> 20 -> 30 -> NULL |
| 3 | Search for 20 | 20 found at position 3 |
| 4 | Search for 50 | 50 not found in the list |
| 5 | Delete 20 | 20 deleted successfully |
| 6 | Display the list | 5 -> 10 -> 30 -> NULL |

### Source Code
Program: Singly Linked List in C++
[Click here to view the source code](./linked_list.cpp)

**### Output

```text
Linked List: 5 -> 10 -> 20 -> 30 -> NULL
20 found at position 3.
50 not found in the list.
20 deleted successfully.
Linked List: 5 -> 10 -> 30 -> NULL**
```
---

---

## Program 2: Doubly Linked List in C++

### Aim
To implement a doubly linked list in C++ and perform insertion and traversal operations.

### Description
A doubly linked list is a linear data structure in which each node contains data, a pointer to the previous node, and a pointer to the next node. It allows traversal in both forward and backward directions.

### Algorithm
1. Create a node structure containing data, a previous pointer, and a next pointer.
2. Initialize the head and tail pointers to NULL.
3. Insert elements at the end or beginning of the list.
4. Traverse from head to tail to display the list in forward order.
5. Traverse from tail to head to display the list in backward order.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Insert at beginning | O(1) |
| Insert at end | O(1) |
| Display forward | O(n) |
| Display backward | O(n) |



### Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| 1 | Insert 10 at end | 10 |
| 2 | Insert 20 at end | 10 20 |
| 3 | Insert 30 at end | 10 20 30 |
| 4 | Display forward | 10 20 30 |
| 5 | Display backward | 30 20 10 |

### Source Code
Program: Singly Linked List in C++
[Click here to view the source code](./doubly_ll.cpp)

### Output

```text
Forward: 10 20 30
Backward: 30 20 10
```
---

## Program 3: Circular Linked List in C++

### Aim
To implement a circular linked list in C++ and perform insertion and traversal operations.

### Description
A circular linked list is a data structure in which the last node points back to the first node instead of pointing to NULL. This creates a circular structure.

### Algorithm
1. Create a Node class containing data and a pointer to the next node.
2. Initialize the head pointer to NULL.
3. Create a new node for each element.
4. If the list is empty, make the new node point to itself and set it as the head.
5. Otherwise, traverse to the last node and connect it to the new node.
6. Make the new node point to the head.
7. Display the elements using a do-while loop until the head is reached again.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Insert into an empty list | O(1) |
| Insert a node into a non-empty list | O(n) |
| Display the list | O(n) |



### Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| 1 | Insert 10 | 10 |
| 2 | Insert 20 | 10 20 |
| 3 | Insert 30 | 10 20 30 |
| 4 | Display the list | All elements displayed in insertion order |

### Output

```text
Circular Linked List: 10 20 30
```

### Source Code

[Click here to view the source code](./circular_ll.cpp)
---

## Program 4: Stack Using Array in C++

### Aim
To implement a stack using an array in C++ and perform push, pop, and display operations.

### Description
A stack is a linear data structure that follows the LIFO (Last In, First Out) principle. The element inserted last is removed first.

The main operations are:
- Push: Inserts an element into the stack.
- Pop: Removes the top element from the stack.
- Display: Displays the stack elements from top to bottom.

### Algorithm
1. Declare an array of fixed size MAX.
3. For push, check whether the stack is full. If not, increment top and insert the element.
4. For pop, check whether the stack is empty. If not, display and remove the top element.
5. For display, print the elements from top to bottom.
### Time Complexity

| Operation | Time Complexity |
|---|---|
| Push | O(1) |
| Pop | O(1) |
| Display | O(n) |


### Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| 1 | Push 10 | 10 pushed into stack |
| 2 | Push 20 | 20 pushed into stack |
| 3 | Push 30 | 30 pushed into stack |
| 4 | Display | 30 20 10 |
| 5 | Pop | 30 popped from stack |
| 6 | Display | 20 10 |

### Output

```text
10 pushed into stack
20 pushed into stack
30 pushed into stack
Stack elements: 30 20 10
30 popped from stack
Stack elements: 20 10
```
### Source Code

[Click here to view the source code](./stacks_arr.cpp)
## Program 6: Stack Using Linked List in C++

### Aim
To implement a stack using a linked list in C++.

### Description
A stack follows LIFO (Last In, First Out). Insertion and deletion take place at the top.

### Algorithm
1. Initialize `top` to NULL.
2. Use `push()` to insert a node at the top.
3. Use `pop()` to delete the top node.
4. Use `display()` to print the stack elements.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Push | O(1) |
| Pop | O(1) |
| Display | O(n) |



### Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | Push 10, 20, 30 | 30 20 10 |
| 2 | Pop | Removes 30 |
| 3 | Display | 20 10 |
| 4 | Pop from empty stack | Stack Underflow |

### Output
```text
10 pushed into stack
20 pushed into stack
30 pushed into stack
Stack elements: 30 20 10
30 popped from stack
Stack elements: 20 10
```
### Source Code
[Click here to view the source code](./stack_ll.cpp)

## Program 7: Queue Using Array in C++

### Aim
To implement a queue using an array in C++.

### Description
A queue follows FIFO (First In, First Out). Insertion takes place at the rear, and deletion takes place at the front.

### Algorithm
1. Initialize `front` and `rear` to -1.
2. Use `enqueue()` to insert an element.
3. Use `dequeue()` to remove an element.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Display | O(n) |

### Space Complexity
O(n), where n is the queue capacity.

### Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | Enqueue 10, 20, 30 | 10 20 30 |
| 2 | Dequeue | Removes 10 |
| 3 | Display | 20 30 |
| 4 | Dequeue from empty queue | Queue Underflow |

### Output
```text
10 inserted into queue
20 inserted into queue
30 inserted into queue
Queue elements: 10 20 30
10 removed from queue
Queue elements: 20 30
```

### Source Code
[Click here to view the source code](./queue_arr.cpp)

## Program 8: Queue Using Linked List in C++

### Aim
To implement a queue using a linked list in C++.

### Description
A queue follows FIFO (First In, First Out). Insertion occurs at the rear and deletion at the front.

### Algorithm
1. Initialize `front` and `rear` to NULL.
2. Use `enqueue()` to insert a node at the rear.
3. Use `dequeue()` to remove a node from the front.
4. Use `display()` to print the queue elements.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Display | O(n) |

### Space Complexity
O(n), where n is the number of elements.

### Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | Enqueue 10, 20, 30 | 10 20 30 |
| 2 | Dequeue | Removes 10 |
| 3 | Display | 20 30 |
| 4 | Dequeue from empty queue | Queue Underflow |

### Output
```text
10 inserted into queue
20 inserted into queue
30 inserted into queue
Queue elements: 10 20 30
10 removed from queue
Queue elements: 20 30
```

### Source Code
[Click here to view the source code](./queue_ll.cpp)

## Program 9: Circular Queue Using Array in C++

### Aim
To implement a circular queue using an array in C++.

### Description
A circular queue follows FIFO and reuses empty spaces using circular indexing.

### Algorithm
1. Initialize `front` and `rear` to -1.
2. Use `enqueue()` to insert elements.
3. Use `dequeue()` to remove elements.
4. Use `display()` to print elements.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Display | O(n) |

### Space Complexity
O(n), where n is the queue capacity.

### Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | Enqueue 10, 20, 30 | 10 20 30 |
| 2 | Dequeue | Removes 10 |
| 3 | Display | 20 30 |
| 4 | Insert into a full queue | Queue Overflow |

### Output
```text
Queue elements: 10 20 30
10 removed from queue
Queue elements: 20 30
```

### Source Code
[Click here to view the source code](./circular_queue.cpp)
## Program 10: Merge Sort in C++

### Aim
To sort an array using the merge sort algorithm.

### Description
Merge sort divides an array into smaller parts, sorts them, and merges them.

### Algorithm
1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the sorted halves.

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

### Space Complexity
O(n)

### Test Cases

| Input | Expected Output |
|---|---|
| 5 3 8 1 2 | 1 2 3 5 8 |
| 9 4 6 2 | 2 4 6 9 |

### Output
```text
Original array: 5 3 8 1 2
Sorted array: 1 2 3 5 8
```

### Source Code
[Click here to view the source code](./merge_sort.cpp)

## Program 11: Bucket Sort in C++

### Aim
To sort an array using the bucket sort algorithm.

### Description
Bucket sort distributes elements into buckets, sorts them, and combines them.

### Algorithm
1. Create buckets and distribute elements.
2. Sort each bucket.
3. Combine all buckets into the sorted array.

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n + k) |
| Average | O(n + k) |
| Worst | O(n²) |

Here, `n` is the number of elements and `k` is the number of buckets.

### Space Complexity
O(n + k)

### Test Cases

| Input | Expected Output |
|---|---|
| 5 3 8 1 2 | 1 2 3 5 8 |
| 9 4 6 2 | 2 4 6 9 |

### Output
```text
Original array: 5 3 8 1 2
Sorted array: 1 2 3 5 8
```

### Source Code
[Click here to view the source code](./bucket.cpp)
## Program 12: Quick Sort in C++

### Aim
To sort an array using the quick sort algorithm.

### Description
Quick sort selects a pivot and partitions the array around it, then sorts both parts recursively.

### Algorithm
1. Select a pivot element.
2. Partition the array around the pivot.
3. Recursively sort both parts.

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n²) |

### Space Complexity
O(log n) on average due to recursion.

### Test Cases

| Input | Expected Output |
|---|---|
| 5 3 8 1 2 | 1 2 3 5 8 |
| 9 4 6 2 | 2 4 6 9 |

### Output
```text
Original array: 5 3 8 1 2
Sorted array: 1 2 3 5 8
```

### Source Code
[Click here to view the source code](./quick.cpp)
## Program 13: Radix Sort in C++

### Aim
To sort an array using the radix sort algorithm.

### Description
Radix sort sorts numbers digit by digit, starting from the least significant digit.

### Algorithm
1. Find the maximum element.
2. Sort elements digit by digit.
3. Repeat until all digits are processed.

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best | O(d × (n + 10)) |
| Average | O(d × (n + 10)) |
| Worst | O(d × (n + 10)) |

Here, `n` is the number of elements and `d` is the maximum number of digits.

### Space Complexity
O(n + 10)

### Test Cases

| Input | Expected Output |
|---|---|
| 170 45 75 90 802 | 45 75 90 170 802 |
| 64 25 12 22 | 12 22 25 64 |

### Output
```text
Original array: 170 45 75 90 802
Sorted array: 45 75 90 170 802
```

### Source Code
[Click here to view the source code](./radix.cpp)

## Program 14: Heap Sort in C++

### Aim
To sort an array using the heap sort algorithm.

### Description
Heap sort uses a binary heap to sort elements in ascending order.

### Algorithm
1. Build a max heap.
2. Swap the root with the last element.
3. Reduce the heap and repeat until sorted.

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |


### Test Cases

| Input | Expected Output |
|---|---|
| 5 3 8 1 2 | 1 2 3 5 8 |
| 9 4 6 2 | 2 4 6 9 |

### Output
```text
Original array: 5 3 8 1 2
Sorted array: 1 2 3 5 8
```

### Source Code
[Click here to view the source code](./heap_sort.cpp)
## Program 15: Tower of Hanoi in C++

### Aim
To solve the Tower of Hanoi problem using recursion.

### Description
Tower of Hanoi moves disks from a source rod to a destination rod using an auxiliary rod.

### Algorithm
1. Move `n-1` disks to the auxiliary rod.
2. Move the largest disk to the destination rod.
3. Move `n-1` disks to the destination rod.

### Time Complexity

| Case | Time Complexity |
|---|---|
| All cases | O(2ⁿ) |

### Space Complexity
O(n), due to recursion.

### Test Case

| Input | Expected Output |
|---|---|
| Number of disks = 3 | 7 moves |

### Output
```text
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

### Source Code
[Click here to view the source code](./tower_of_hanoi.cpp)
## Program 16: Valid Parentheses in C++

### Aim
To check whether a string contains valid parentheses.

### Description
A stack is used to check whether brackets are correctly matched and balanced.

### Algorithm
1. Push opening brackets onto the stack.
2. Match each closing bracket with the stack's top.
3. Return `true` if all brackets match; otherwise, return `false`.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Validation | O(n) |

### Space Complexity
O(n), where n is the string length.

### Test Cases

| Input | Expected Output |
|---|---|
| `()` | `true` |
| `()[]{}` | `true` |
| `(]` | `false` |
| `((` | `false` |
| `{[()]}` | `true` |

### Output
```text
() -> true
()[]{} -> true
(] -> false
(( -> false
{[()]} -> true
```

### Source Code
[Click here to view the source code](./valid_parenthesis.cpp)

## Program 17: Binary Tree Insertion and Traversals in C++

### Aim
To insert nodes into a binary tree and perform inorder, preorder, and postorder traversals.

### Description
A binary tree consists of nodes with at most two children. Traversals visit nodes in different orders.

### Algorithm
1. Insert nodes into the binary tree.
2. **Inorder:** Left → Root → Right.
3. **Preorder:** Root → Left → Right.
4. **Postorder:** Left → Right → Root.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Insertion | Depends on the insertion method |
| Inorder Traversal | O(n) |
| Preorder Traversal | O(n) |
| Postorder Traversal | O(n) |

### Space Complexity
O(n), including the tree and recursion stack in the worst case.

### Test Case

**Input:** Insert nodes in this order: 1, 2, 3, 4, 5, 6, 7.

### Output

```text
Inorder Traversal: 4 2 5 1 6 3 7
Preorder Traversal: 1 2 4 5 3 6 7
Postorder Traversal: 4 5 2 6 7 3 1
```

### Source Code
[Click here to view the source code](./binary_tree.cpp)

## Program 18: Binary Search Tree (BST) Operations in C++

### Aim
To perform insertion, searching, inorder traversal, and deletion in a BST.

### Description
A BST stores smaller values on the left and larger values on the right. Deletion handles three cases: leaf node, one child, and two children.

### Algorithm
1. Insert nodes according to BST properties.
2. Search for a key by comparing values.
3. Delete a leaf node directly.
4. For one child, replace the node with its child.
5. For two children, replace the node with its inorder successor.
6. Use inorder traversal to display sorted values.

### Time Complexity

| Operation | Average Case | Worst Case |
|---|---|---|
| Insertion | O(log n) | O(n) |
| Searching | O(log n) | O(n) |
| Deletion | O(log n) | O(n) |
| Inorder Traversal | O(n) | O(n) |

### Space Complexity
O(n) for the tree and O(h) auxiliary recursion space, where h is the tree height.

### Test Cases

| Operation | Input | Expected Result |
|---|---|---|
| Insertion | 50, 30, 70, 20, 40, 60, 80 | BST created |
| Searching | Search 40 | 40 found in BST |
| Deletion Case 1 | Delete 20 | Leaf node deleted |
| Deletion Case 2 | Delete 30 | Node with one child deleted |
| Deletion Case 3 | Delete 50 | Node with two children deleted |

### Output

**1. BST after insertion:**
```text
BST Inorder: 20 30 40 50 60 70 80
```

**2. Searching for 40:**
```text
40 found in BST
```

**3. Deletion Case 1 — Leaf Node (20):**
```text
Before deletion: 20 30 40 50 60 70 80
After deletion:  30 40 50 60 70 80
```

**4. Deletion Case 2 — Node with One Child (30):**
```text
Before deletion: 30 40 50 60 70 80
After deletion:  40 50 60 70 80
```

**5. Deletion Case 3 — Node with Two Children (50):**
```text
Before deletion: 40 50 60 70 80
After deletion:  40 60 70 80
```

**6. Final Output of the Given Program:**
```text
BST Inorder: 20 30 40 50 60 70 80
40 found in BST
BST after deletion: 40 60 70 80
```

### Source Code
[Click here to view the source code](./bst.cpp)

## Program 19: AVL Tree Operations in C++

### Aim
To implement an AVL tree using insertion, rotations, and balance checking.

### Description
An AVL tree is a self-balancing BST. It uses LL, RR, LR, and RL rotations to maintain balance.

### Algorithm
1. Insert nodes using BST rules.
2. Update node heights and calculate balance factors.
3. Apply rotations if the tree becomes unbalanced.
4. Perform inorder traversal and check balance.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| Insertion | O(log n) |
| Inorder Traversal | O(n) |
| Balance Checking | O(n) |

### Space Complexity
O(n) for the tree and O(log n) recursion space for a balanced AVL tree.

### Test Cases

| Case | Insertion Order | Rotation |
|---|---|---|
| LL | 30, 20, 10 | Right rotation |
| RR | 10, 20, 30 | Left rotation |
| LR | 30, 10, 20 | Left, then right rotation |
| RL | 10, 30, 20 | Right, then left rotation |

### Output

**1. LL Rotation**
```text
Insertion: 30, 20, 10
Inorder: 10 20 30
Balanced: Yes
```

**2. RR Rotation**
```text
Insertion: 10, 20, 30
Inorder: 10 20 30
Balanced: Yes
```

**3. LR Rotation**
```text
Insertion: 30, 10, 20
Inorder: 10 20 30
Balanced: Yes
```

**4. RL Rotation**
```text
Insertion: 10, 30, 20
Inorder: 10 20 30
Balanced: Yes
```

**5. Output of the Given Program**
```text
Inorder: 10 20 25 30 40 50
Balanced: Yes
```

### Source Code
[Click here to view the source code](./avl_tree.cpp)
from pathlib import Path

content = r'''# Counting Sort
DSA Lab Program

Program: Counting Sort in C++

## Aim
To implement the Counting Sort algorithm in C++ and sort an array of integers in ascending order.

## Description
Counting Sort is a non-comparison-based sorting algorithm. It counts how many times each value occurs in the input array and uses those frequencies to reconstruct the array in sorted order. This implementation supports both positive and negative integers.

### Algorithm
1. Read the number of elements and the array.
2. Find the minimum and maximum values in the array.
3. Create a count array for the full range of values.
4. Count the frequency of each element.
5. Traverse the count array and write each value into the original array according to its frequency.
6. Display the sorted array.

### Time Complexity
- Best case: `O(n + k)`
- Average case: `O(n + k)`
- Worst case: `O(n + k)`

Where:
- `n` = number of elements
- `k` = range of values (`maximum - minimum + 1`)

### Space Complexity
- `O(k)` auxiliary space

### Source Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(int arr[], int n) {
    if (n <= 1)
        return;

    int minVal = *min_element(arr, arr + n);
    int maxVal = *max_element(arr, arr + n);

    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);

    // Count the frequency of each value
    for (int i = 0; i < n; i++)
        count[arr[i] - minVal]++;

    // Rebuild the array in sorted order
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index++] = i + minVal;
            count[i]--;
        }
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Please enter a size between 1 and 100." << endl;
        return 0;
    }

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    countingSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
```

### Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | `4 2 2 8 3 3 1` | `1 2 2 3 3 4 8` |
| 2 | `5 -2 3 0 -2 1` | `-2 -2 0 1 3` |
| 3 | `5 7 7 7 7 7` | `7 7 7 7 7` |
| 4 | `1 9` | `9` |
| 5 | `4 0 5 2 0` | `0 0 2 5` |

### Sample Output

```text
Enter number of elements: 7
Enter array elements: 4 2 2 8 3 3 1
Sorted array: 1 2 2 3 3 4 8
```

### Advantages
- Efficient when the range of input values is small.
- Can sort integers without comparing pairs of elements.
- Supports duplicate values and, in this implementation, negative integers.

### Limitations
- Uses extra memory proportional to the range of input values.
- May be inefficient when the value range is much larger than the number of elements.

### Conclusion
Counting Sort sorts integers by counting their frequencies and reconstructing the array in ascending order. It is useful when the range of values is reasonably small.
'''
path = Path("/mnt/data/README_counting_sort.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")
from pathlib import Path

content = r'''# First Duplicate in an Array
DSA Lab Program

Program: Find the First Duplicate in C++

## Aim
To implement a C++ program that finds the first duplicate element encountered while traversing an array from left to right.

## Description
The program traverses the array and stores each value in an `unordered_set`. If a value is already present in the set, it is the first duplicate encountered during the left-to-right scan. If no duplicate is found, the function returns `-1`.

## Algorithm
1. Read the number of elements and the array.
2. Create an empty `unordered_set` to store values already visited.
3. Traverse the array from left to right.
4. If the current value is already in the set, return it as the first duplicate.
5. Otherwise, insert the current value into the set.
6. If traversal finishes without finding a duplicate, return `-1`.
7. Print the result.

## Time Complexity
- **Best case:** `O(1)` average, if the second element is already a duplicate of the first.
- **Average case:** `O(n)`
- **Worst case:** `O(n)` average under typical hash-table behavior; pathological hash collisions can make it slower.

## Space Complexity
- `O(n)` for the set in the worst case.

## Source Code

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int firstDuplicate(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end())
            return arr[i];

        seen.insert(arr[i]);
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Please enter a size between 1 and 100." << endl;
        return 0;
    }

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = firstDuplicate(arr, n);

    if (result != -1)
        cout << "First duplicate element: " << result << endl;
    else
        cout << "No duplicate found." << endl;

    return 0;
}
```

## Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| 1 | `6` then `2 5 1 3 5 2` | `First duplicate element: 5` |
| 2 | `5` then `1 2 3 4 5` | `No duplicate found.` |
| 3 | `5` then `7 7 2 3 2` | `First duplicate element: 7` |
| 4 | `4` then `-1 0 -1 0` | `First duplicate element: -1` |
| 5 | `1` then `9` | `No duplicate found.` |

## Sample Output

```text
Enter number of elements: 6
Enter array elements: 2 5 1 3 5 2
First duplicate element: 5
```

## Advantages
- Easy to understand and implement.
- Usually runs in linear time.
- Works with positive, negative, and zero values.

## Limitations
- Uses additional memory to store visited values.
- `-1` is used to indicate that no duplicate was found, so if you need to distinguish that result from a duplicate value of `-1`, use a separate status flag or another return type.
from pathlib import Path

content = r'''# Height Reached by Projectile Motion
DSA Lab Program

Program: Calculate the Maximum Height of a Projectile in C++

## Aim
To write a C++ program to calculate the maximum height reached by a projectile launched with a given initial velocity and angle.

## Description
When an object is projected at an angle to the horizontal, its vertical velocity decreases due to gravity. At the highest point, the vertical velocity becomes zero. This program calculates the maximum height while ignoring air resistance.

## Formula
\[
H = \frac{u^2 \sin^2(\theta)}{2g}
\]

Where:
- `H` = maximum height in metres
- `u` = initial velocity in metres per second
- `theta` = angle of projection in degrees
- `g` = acceleration due to gravity (`9.8 m/s^2`)

## Algorithm
1. Start the program.
2. Read the initial velocity and angle of projection.
3. Convert the angle from degrees to radians.
4. Calculate the vertical component of velocity.
5. Calculate the maximum height using the formula.
6. Display the maximum height.
7. Stop the program.

## Time Complexity
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Source Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle;
    const double g = 9.8;

    cout << "Enter initial velocity (m/s): ";
    cin >> u;

    cout << "Enter angle of projection (degrees): ";
    cin >> angle;

    if (u < 0 || angle < 0 || angle > 90) {
        cout << "Invalid input. Use non-negative velocity "
             << "and an angle between 0 and 90 degrees." << endl;
        return 0;
    }

    const double pi = acos(-1.0);
    double rad = angle * pi / 180.0;
    double verticalVelocity = u * sin(rad);
    double height = (verticalVelocity * verticalVelocity) / (2 * g);

    cout << "Maximum height reached: "
         << height << " meters" << endl;

    return 0;
}
```

## Test Cases

| Test Case | Initial Velocity | Angle | Expected Maximum Height |
|---|---:|---:|---:|
| 1 | `20 m/s` | `30°` | `5.10 m` |
| 2 | `20 m/s` | `45°` | `10.20 m` |
| 3 | `10 m/s` | `0°` | `0.00 m` |
| 4 | `0 m/s` | `45°` | `0.00 m` |

## Sample Output

```text
Enter initial velocity (m/s): 20
Enter angle of projection (degrees): 30
Maximum height reached: 5.10204 meters
```

## Applications
- Studying projectile motion in physics.
- Estimating the height of a ball thrown at an angle.
- Understanding the effect of launch velocity and angle on maximum height.

## Limitations
- Air resistance is ignored.
- Gravity is assumed constant at `9.8 m/s^2`.
- The formula assumes the projectile is launched from a reference height and calculates height above that launch point.

## Conclusion
The program calculates the maximum height reached by a projectile using its initial velocity and angle of projection. The calculation assumes ideal projectile motion without air resistance.
'''
path = Path("/mnt/data/README_projectile_max_height.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")
from pathlib import Path

content = r'''# Horizontal Range of Projectile Motion
DSA Lab Program

Program: Calculate the Horizontal Range of a Projectile in C++

## Aim
To write a C++ program to calculate the horizontal range of a projectile launched with a given initial velocity and angle of projection.

## Description
The horizontal range is the total horizontal distance travelled by a projectile before it returns to its launch height. This program calculates the range assuming gravity is constant and air resistance is ignored.

## Formula
\[
R = \frac{u^2 \sin(2\theta)}{g}
\]

Where:
- `R` = horizontal range in metres
- `u` = initial velocity in metres per second
- `theta` = angle of projection
- `g` = acceleration due to gravity (`9.8 m/s^2`)

## Algorithm
1. Start the program.
2. Read the initial velocity and angle of projection.
3. Convert the angle from degrees to radians.
4. Calculate the horizontal range using the formula.
5. Display the horizontal range in metres.
6. Stop the program.

## Time Complexity
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Source Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle;
    const double g = 9.8;

    cout << "Enter initial velocity (m/s): ";
    cin >> u;

    cout << "Enter angle of projection (degrees): ";
    cin >> angle;

    if (u < 0 || angle < 0 || angle > 90) {
        cout << "Invalid input. Use non-negative velocity "
             << "and an angle between 0 and 90 degrees." << endl;
        return 0;
    }

    const double pi = acos(-1.0);
    double rad = angle * pi / 180.0;
    double range = (u * u * sin(2 * rad)) / g;

    cout << "Horizontal range: " << range << " meters" << endl;

    return 0;
}
```

## Test Cases

| Test Case | Initial Velocity | Angle | Expected Horizontal Range |
|---|---:|---:|---:|
| 1 | `20 m/s` | `30°` | `35.35 m` |
| 2 | `20 m/s` | `45°` | `40.82 m` |
| 3 | `10 m/s` | `0°` | `0.00 m` |
| 4 | `10 m/s` | `90°` | `0.00 m` |

## Sample Output

```text
Enter initial velocity (m/s): 20
Enter angle of projection (degrees): 30
Horizontal range: 35.346 meters
```

## Applications
- Studying projectile motion in physics.
- Estimating the horizontal distance travelled by a thrown ball.
- Comparing how launch speed and angle affect projectile range.

## Limitations
- Air resistance is ignored.
- Gravity is assumed constant at `9.8 m/s^2`.
- The formula assumes the projectile lands at the same height from which it was launched.

## Conclusion
The program calculates the horizontal range of a projectile using its initial velocity and angle of projection under ideal conditions.
'''
path = Path("/mnt/data/README_projectile_horizontal_range.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")
from pathlib import Path

content = r'''# Number of Tips in a Binary Tree
DSA Lab Program

Program: Count Leaf Nodes (Tips) in a Binary Tree Using C++

## Aim
To implement a C++ program to count the number of tips (leaf nodes) in a binary tree.

## Description
A tip, also called a leaf node, is a node in a binary tree that has no left child and no right child. The program recursively traverses the tree and counts each leaf node.

## Algorithm
1. Define a node structure with data, left pointer, and right pointer.
2. If the current node is `nullptr`, return `0`.
3. If the current node has no left or right child, return `1`.
4. Recursively count the tips in the left subtree.
5. Recursively count the tips in the right subtree.
6. Add both counts and return the result.
7. Print the total number of tips.

## Time Complexity
- **Time Complexity:** `O(n)`, where `n` is the number of nodes.
- **Auxiliary Space:** `O(h)` for recursion, where `h` is the height of the tree.

## Source Code

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int countTips(Node* root) {
    if (root == nullptr)
        return 0;

    if (root->left == nullptr && root->right == nullptr)
        return 1;

    return countTips(root->left) + countTips(root->right);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Number of tips (leaf nodes): "
         << countTips(root) << endl;

    return 0;
}
```

## Test Cases

| Test Case | Tree Structure | Expected Number of Tips |
|---|---|---:|
| 1 | `1` with children `2, 3`; node `2` has children `4, 5` | `3` |
| 2 | A tree containing only node `10` | `1` |
| 3 | An empty tree (`nullptr`) | `0` |
| 4 | A chain `1 -> 2 -> 3` with each node having only a left child | `1` |

## Sample Output

```text
Number of tips (leaf nodes): 3
```

## Applications
- Finding terminal nodes in tree structures.
- Analysing binary trees and hierarchical data.
- Practising recursion and tree traversal.

## Conclusion
The program counts the leaf nodes (tips) in a binary tree using recursion. Each node is visited once, giving `O(n)` time complexity.
'''
path = Path("/mnt/data/README_number_of_tips_binary_tree.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")

## Conclusion
The program finds the first duplicate encountered during a left-to-right traversal using an `unordered_set`, with average `O(n)` time complexity.
'''
path = Path("/mnt/data/README_first_duplicate.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")
from pathlib import Path

content = r'''# Count Trailing Zeros in a Number
DSA Lab Program

Program: Count the Number of Trailing Zeros in C++

## Aim
To write a C++ program to count the number of zeros at the end of an integer.

## Description
Trailing zeros are zeros that appear at the right end of a number. For example, `12000` has three trailing zeros. The program repeatedly checks whether the number is divisible by 10. If it is, the count is increased and the last digit is removed.

## Algorithm
1. Read an integer.
2. Set the counter to `0`.
3. While the number is not zero and is divisible by `10`:
   - Increase the counter by `1`.
   - Divide the number by `10`.
4. Print the counter.
5. Stop the program.

## Time Complexity
- **Time Complexity:** `O(d)`, where `d` is the number of trailing zeros.
- **Space Complexity:** `O(1)`.

## Source Code

```cpp
#include <iostream>
using namespace std;

int countTrailingZeros(long long n) {
    int count = 0;

    while (n != 0 && n % 10 == 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    long long n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Number of trailing zeros: "
         << countTrailingZeros(n) << endl;

    return 0;
}
```

## Test Cases

| Test Case | Input | Expected Output |
|---|---:|---:|
| 1 | `12000` | `3` |
| 2 | `450` | `1` |
| 3 | `12345` | `0` |
| 4 | `100000` | `5` |
| 5 | `0` | `0` |

## Sample Output

```text
Enter an integer: 12000
Number of trailing zeros: 3
```

## Applications
- Analysing decimal numbers.
- Practising loops and arithmetic operators.
- Identifying trailing zeros in integer values.

## Limitations
- This program counts trailing zeros in the decimal representation of an integer; it does not calculate the number of trailing zeros in a factorial.
- For input `0`, the program returns `0` by convention.

## Conclusion
The program counts the zeros at the right end of an integer by repeatedly removing factors of 10. It uses constant extra space.
'''
path = Path("/mnt/data/README_trailing_zeros.md")
path.write_text(content, encoding="utf-8")
print(f"Created: {path} ({path.stat().st_size} bytes)")

