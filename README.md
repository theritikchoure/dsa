
## Table of Content
- [Definitions]()
    - [Data Structure]()
    - [Algorithms]()
    - [Abstract Data Types]()
    - [Algorithm Analysis]()

- [Data Structures]()
    - [Stack]()
    - [Queue]()
    - [Linked List]()
- [Algorithms]()
    - [Searching]()
    - [Sorting]()

## DATA STRUCTURES AND ALGORITHMS

### # DATA STRUCTURES

DS is one of the most fundamental subject in computer science and in-depth understanding of this topic is very important espacially when your are into development/programming domain where you build efficient software system and applications.

#### ## Definition -
- in computer science, a data structure is data organization, management and storage format that enables efficient access and modification of the data.

#### ## In Simple Words -
- Data Structure is a way in which data is stored on a computer.

#### ## Why do we need Data Structures?
Data structure is a particular way of storing and organizing information in a computer so that it can be retrieved and used most productively.

- Each Data Structure allows data to be stored in specific manner.
- Data Structure allows efficient data search and retrieval.
- Specific Data structures are decided to work for specific problems.
- It allows to manage large amount of data such as large databases and indexing services such as hash table.

### # ALGORITHMS

Dictionary Definition –
A process or set of rules to be followed in calculations or other problem-solving operations, especially by a computer.

Formal Definition –
An algorithm is a finite set of instructions that are carried in a specific order to perform specific task.

Algorithms typically have the following characteristics –
- Inputs : 0 or more input values.
- Outputs : 1 or more than 1 output.
- Unambiguity : clear and simple instructions.
- Finiteness : Limited number of instructions.
- Effectiveness : Each instruction has an impact on the overall process.

Example of an Algorithm in Programming –
Write an algorithm to add two numbers entered by user. –

Step 1: Start

Step 2: Declare variables num1, num2 and sum.

Step 3: Read values num1 and num2.

Step 4: Add num1 and num2 and assign the result to sum.(sum←num1+num2 )

Step 5: Display sum

Step 6: Stop

### # ABSTRACT DATA TYPES
Abstract data type are like user defined data type on which we can perform functions without knowing what is there inside the datatype and how the operations are performed on them.

In other words, ADTs are entities have definition of data and opterations but do not have implementation details.

#### 2 Parts of any Data Structures –

- Mathematical/Logical/Abstract Models/Views
- Implementation

### # Algorithm Analysis

Definition - Algorithm analysis is study to provides theoretical **esitimation** of the required resources of an algorithm to solve a specific computational problem. i.e. calculating efficciency.

Generally, the **efficiency** of any algorithm is related to the input length (number of steps), known as **time complexity**, and/or volume of memory, known as **space complexity**.

#### Need of Algorithm Analysis -
- Knowing efficiency of an algorithm is very important on mission critical tasks.
- Generally there are multiple approaches/methods/algorithms to solve one problem statement. Algorithm analysis is performed to figure out which is *better/optimum** approach/method/algorithm out of the option.

#### What does a BETTER Algorithm mean?

- Faster - less execution time
- Less Memory
- Easy to Read
- Less Lines of Code
- Less Hardware/Software Need

#### Asymptomatic Algorithm Analysis

Definition - In mathematical analysis, asymptomatic analysis of algorithm is a method of defining the mathematical boundaries of its run-time perfomance.

Using the asymptomatic analysis, we can easily estimate about the avearage case, best case and worst case scenario of an algorithm.

Simple words - It is used to mathematical calculate the running time of any operation inside an algorithm.

Asymptomatic analysis is to estimate the time complexity function for arbitrarily large input.

- Time complexity - is a computational way to show how (behavior) runtime of a program increases as the size of its input increases.
- Space complexity - is a computational way to represents the amount of memory space needed the algorithm in its life cycle.

There are mainly three asymptotic notations:

- Big-O notation
- Omega notation
- Theta notation

#### # Big-O Notation
Big-O notation represents the upper bound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm.

It measures the worst case time complexity or the longest amount of time an algorithm can possibly take to complete.

Following is a list of some common asymptotic notations - 

- constant time - O(1)
- linear - O(n)
- logarithmic - O(log n)
- quadratic - O(n^2)
- cubic - O(n^3)

#### # Omega Notation (Ω-notation)

Omega notation represents the lower bound of the running time of an algorithm. Thus, it provides the best case complexity of an algorithm.

#### # Theta Notation (Θ-notation)

Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

### # EXPRESSION

An Expression is a combination of symbols that can be numbers (constants), variables, operations, symbols of grouping and other punctuation written is a specific format/way.

Depending on how the expression is written, we can classify it into 3 categories –

- Prefix – An expression is called the prefix expression if the operator appears in the expression before the operands. Simply of the form (operator operand1 operand2). E.g. +AB
- Infix - An expression is called the infix expression if the operator appears in the expression in between the operands. Simply of the form (operand1 operator operand2). E.g. A+B
- Postfix – An expression is called the postfix expression if the operator appears in the expression after the operands. Simply of the form (operand1 operand2 operator). E.g. AB+

**Order of Operations(Operator Precedence) –**
1) Parentheses – {}, [], ()
2) Exponents(Right to Left) – A^B, 2^3^4
3) Multiplication & Division(Left to Right) – A*B/C
4) Addition & Subtraction(Left to Right) – A + B – C

#### Associativity –

Associativity describes the rule where operators with the same precedence appear in an expression. For example, in expression a + b − c, both + and – have the same precedence, then which part of the expression will be evaluated first, is determined by associativity of those operators.

#### Why do we need 3 different expressions ?

- Infix expressions are human readable but not efficient for machine reading
- Prefix and Postfix do not need the concept of precedence & associativity hence it becomes highly efficient to parse expressions in prefix or postfix formats.

### # ARRAY DATA STRUCTURE

Array is a container which can hold a fix number of items and these items should be of the same type. Most of the data structures make use of arrays to implement their algorithms. Following are the important terms to understand the concept of Array.

- **Element −** Each item stored in an array is called an element.

- **Index −** Each location of an element in an array has a numerical index, which is used to identify the element.

#### Standard Array Operations – 

- **Traverse −** print all the array elements one by one.

- **Insertion −** Adds an element at the given index.

- **Deletion −** Deletes an element at the given index.

- **Search −** Searches an element using the given index or by the value.

- **Update −** Updates an element at the given index.


### # LINKED LIST DATA STRUCTURE
Definition - A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers(entity that point to the next element)

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

#### Working of Linked List DS -
Linked list consists nodes where each node contains a data field and reference (link) to the next node in the list.

- Node/Element/Link/Object - Each node in the linked list consists of two parts - 1. Data and 2. Link (to other node)

#### Arrays vs Linked List (All info from – [GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-vs-array/)) –
- An array is the data structure that contains a collection of similar type data elements whereas the Linked list is considered as non-primitive data structure contains a collection of un-ordered linked elements known as nodes.
- In the array the elements belong to indexes, i.e., if you want to get into the fourth element you have to write the variable name with its index or location within the square bracket. In a linked list though, you have to start from the head and work your way through until you get to the fourth element.
- Accessing an element in an array is fast, while Linked list takes linear time, so it is quite a bit slower.
- Operations like insertion and deletion in arrays consume a lot of time. On the other hand, the performance of these operations in Linked lists is fast.
- Arrays are of fixed size. In contrast, Linked lists are dynamic and flexible and can expand and contract its size.
- In an array, memory is assigned during compile time while in a Linked list it is allocated during execution or runtime.
- Elements are stored consecutively in arrays whereas it is stored randomly in Linked lists.
- The requirement of memory is less due to actual data being stored within the index in the array. As against, there is a need for more memory in Linked Lists due to storage of additional next and previous referencing elements.
- In addition memory utilization is inefficient in the array. Conversely, memory utilization is efficient in the linked list.

#### Some Standard Linked List Operations –
- Traverse – Iterate through the nodes in the linked list starting from the head node.
- Append – Attach a new node (to the end) of a list
- Prepend – Attach a new node (to the beginning) of the list
- Insert – attach a new node to a specific position on the list
- Delete – Remove/Delink a node from the list
- Count – Returns the no of nodes in linked list

#### Types of Linked List –

- Singly Linked List
- Doubly Linked List - Doubly Linked list is a type of Linked List Data structure which behaves like a two way list/chain. The reason it is called a two way list or two way chain is because we can traverse this list in two directions – 1. start from the head node to the end. and 2. go back in the reverse direction.
- Circular Linked List - Circular linked list is a type of Linked List Data structure which behaves like a one way list/chain. The reason it is called a one way list or one way chain is because we can only traverse this list in one direction, start from the head node to the end. However unlike Singly Linked List in this type of linked list we can traverse from the last node to the first in a circular one directional pattern.

#### Some Applications of Linked List DS –
- Linked Lists can be used to implement Stacks , Queues.
- Linked Lists can also be used to implement Graphs. (Adjacency list representation of Graph).
- Implementing Hash Tables :- Each Bucket of the hash table can itself be a linked list. (Open chain hashing).
- Undo functionality in Photoshop or Word . Linked list of states.


### # STACK DATA STRUCTURE
Stack is a linear data structure which operates in a LIFO(Last In First Out) or  FILO (First In Last Out) pattern.

- It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile of plates, etc.
- Stack is an abstract data type with a bounded (predefined) capacity.
- It is a simple data structure that allows adding and removing elements in a particular order.
- The order may be LIFO(Last In First Out) or FILO(First In Last Out).

#### Working of Stack DS -
Stack DS operates in a LIFO (Last In First Out) or FILO (First In Last Out) pattern.

- Items are added on the top of the stack, this is known as PUSH operation.
- Items are removed from the top of the stack, this is known as POP operation.

#### Standard Stack Operations – 
- push() –  Place an item onto the stack. If there is no place for new item, stack is in overflow state.
- pop() – Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.
- isEmpty() –  Tells if the stack is empty or not
- isfull() – Tells if the stack is full or not.
- peek() – Access the item at the i position
- count() – Get the number of items in the stack.
- change() – Change the item at the i position
- display() – Display all items in the stack

#### Some Applications of Stack Data Structure –
- Balancing of symbols
- Infix to Postfix /Prefix conversion
- Redo-undo features at many places like editors, photoshop.
- Forward and backward feature in web browsers
- Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.
- Other applications can be Backtracking, Knight tour problem, rat in a maze, N queen problem and sudoku solver
- In Graph Algorithms like Topological Sorting and Strongly Connected Components.

### # QUEUE DATA STRUCTURE
Queue is a linear data structure which operates in a First IN First OUT or Last IN Last OUT.

- It is named queue as it behaves like a real-world queue, for example – queue(line) of cars in a single lane, queue of people waiting at food counter etc.
- Queue is an abstract data type with a bounded (predefined) capacity.
- It is a simple data structure that allows adding and removing elements in a particular order.
- The order is FIFO(First IN First OUT) or LILO(Last In Last Out).

#### Working of Queue DS -
Queue is a linear data structure which operates in First In First Out or Last In Last Out.

- Elements are added at one end (rear end) of the queue, this is known as enqueue.
- Elements are removed from other end (front/head end) of the queue, this is known as dequeue.

#### Standard Queue Operations – 
- Enqueue() – Add item to the queue from the REAR.
- Dequeue() – Remove item from the queue from the FRONT.
- isFull() – Check if queue is full or not.
- isEmpty() – Check if queue empty or not.
- count() – Get number of items in the queue.

#### Some types of Queue -
- Simple Queue
- Circular Queue
- Priority Queue

#### Some Applications of Queue DS –
Queue is used when things but have to be processed in First In First Out order. Like –

- CPU scheduling, Disk Scheduling.
- Handling of interrupts in real-time systems. The interrupts are handled in the same order as they arrive, First come first served.
- In real life, Call Center phone systems will use Queues, to hold people calling them in an order, until a service representative is free.
- When data is transferred asynchronously between two processes. Queue is used for synchronization.

#### # Circular Queue
Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called ‘Ring Buffer’. It is a type of Queue data structure which overcomes some drawback of the simple queue data structure.

In a Linear queue, once the queue is completely full, it’s not possible to insert more elements. Even if we dequeue the queue to remove some of the elements, until the queue is reset, no new elements can be inserted. You must be wondering why?

When we dequeue any element to remove it from the queue, we are actually moving the front of the queue forward, thereby reducing the overall size of the queue. And we cannot insert new elements, because the rear pointer is still at the end of the queue. The only way is to reset the linear queue, for a fresh start.

#### Standard Queue Operations – 
- Enqueue() – Add item to the queue from the REAR.
- Dequeue() – Remove item from the queue from the FRONT.
- isFull() – Check if queue is full or not.
- isEmpty() – Check if queue empty or not.
- count() – Get number of items in the queue.

A simple modification in the exist simple queue data structure algorithm/code can convert it into a circular queue data structure.

### # TREE DATA STRUCTURE

A tree is a non linear data structure that simulates a hierarchical tree structure with a root value and sub trees of children with parent node, represented as set of linked nodes.

#### Tree terms –
- **Root –** Root is a special node in a tree. The entire tree is referenced through it. It does not have a parent.
- **Parent Node –** Parent node is an immediate predecessor of a node.
- **Child Node –** All immediate successors of a node are its children.
- **Siblings –** Nodes with the same parent are called Siblings.
- **Leaf –** Last node in the tree. There is no node after this node.
- **Edge –** Edge is a connection between one node to another. It is a line between two nodes or a node and a leaf.
- **Path –** Path is a number of successive edges from source node to destination node.

#### Tree terms / properties –
- Tree can be termed as a RECURSIVE data structure.
- In a valid tree for N Nodes we have N-1 Edges/Links
- Depth of Node – Depth of a node represents the number of edges from the tree’s root node to the node.
- Height of Node – Height of a node is the number of edges on the longest path between that node & a leaf.
- Height of Tree – Height of tree represents the height of its root node.

#### Types of Tree -
- General Tree
- Binary Tree
- Binary Search Tree
- AVL Tree
- Spanning Tree
- B-Tree
- B+ Tree
- Heap

#### Applications of Tree Data Structure –
- Store hierarchical data, like folder structure, organization structure data.
- Binary Search Tree is a tree that allows fast search, insert, delete on a sorted data.
- Heap is a tree data structure which is implemented using arrays and used to implement priority queues.
- B-Tree and B+ Tree are used to implement indexing in databases.
- Used to store router-tables in routers.
- Used by compilers to build syntax trees.
- Used to implement expression parsers and expression solvers.

### # BINARY TREE DATA STRUCTURE

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child(LC) and the right child(RC).

#### Important Binary Tree Terms & Properties –
- A binary tree is called STRICT/PROPER binary tree when each node has 2 or 0 children.
- A binary tree is called COMPLETE binary tree if all levels except the last are completely filled and all nodes are as left as possible.
- A binary tree is called PERFECT binary tree if all levels are completely filled with 2 children each.
- Max number of nodes at a given level ‘x’ = 2^x
- For a binary tree, maximum number of nodes with height ‘h’ = 2^(h+1) – 1
- A binary tree is called BALANCE binary tree, if the difference between the height of left subtree and right subtree for every node is not more than k(usually k=1)

#### Sparse vs Dense Binary Tree –
- A **dense binary tree** is close to perfect (it has close to 2^(h + 1) – 1 nodes)
- A **sparse binary tree** is closer to a linked list (it has close to h nodes)


### # BINARY SEARCH TREE DATA STRUCTURE

Binary search tree (BST) is a binary tree data structure, in which the values in the left sub-trees of every node are smaller and the values in the right sub-trees of every node are larger.

Average Time Complexity of Binary Search Tree Operations(balanced) is – Big O(log N)

#### BST Basic Operations
The basic operations that can be performed on a binary search tree data structure, are the following −

- **Insert −** Inserts an element in a tree/create a tree.

- **Search −** Searches an element in a tree.

- **Preorder Traversal −** Traverses a tree in a pre-order manner.

- **Inorder Traversal −** Traverses a tree in an in-order manner.

- **Postorder Traversal −** Traverses a tree in a post-order manner.

### # AVL TREE DATA STRUCTURE

Named after their inventor Adelson, Velski & Landis, AVL trees are height balancing binary search tree. AVL tree checks the height of the left and the right sub-trees and assures that the difference is not more than 1. This difference is called the Balance Factor.

**BalanceFactor =** height(left-sutree) − height(right-sutree)

If the difference in the height of left and right sub-trees is more than 1, the tree is balanced using some rotation techniques.

**AVL Tree Rotations -** To balance itself, an AVL tree may perform the following four kinds of rotations −
- Left rotation
- Right rotation
- Left-Right rotation
- Right-Left rotation

### # HEAP TREE DATA STRUCTURE

A Heap is a special Tree-based data structure in which the tree is a complete binary tree.
It follows the Heap Property –

- **Max-Heap:** In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.
- **Min-Heap:** In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

A heap can be implemented in 2 ways –

- Tree Node Implementation with pointers
- Heap as Array Implementation

#### Some Applications of Heap are :

- Heapsort sorting algorithm
- Graph algorithms like – Prim’s minimal-spanning-tree algorithm and Dijkstra’s shortest-path algorithm.
- A priority queue can be implemented with a heap or a variety of other methods.

### # LINEAR SEARCH ALGORITHM

Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

### # BINARY SEARCH ALGORITHM

Binary search algorithm falls under the category of interval search algorithms. This algorithm is much more efficient compared to linear search algorithm. Binary search only works on sorted data structures. This algorithm repeatedly target the center of the sorted data structure & divide the search space into half till the match is found.

The time complexity of binary search algorithm is O(Log n).
