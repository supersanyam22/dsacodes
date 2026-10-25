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

### Space Complexity
O(1) auxiliary space for an in-place implementation.

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
