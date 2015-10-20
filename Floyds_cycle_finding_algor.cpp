/*  Finding a loop in a singly linked list 

Floyd's cycle-finding algorithm (aka Tortoise and hare )

solution: O(N) time , O(1) space
two pointers: 
	-slow pointer that goes one node at a time 
	-fast pointer that runs twice as fast 
		if list has a loop 
			fast & slow will == same node 
		if loop has no loop 
			fast pointer will reach faster than the slower pointer

*/ 