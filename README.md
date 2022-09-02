# Data Structures and Algorithms Notes
## Table of Content
- [Definitions]()
    - [Data Structure]()
    - [Algorithms]()
    - [Abstract Data Types]()

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