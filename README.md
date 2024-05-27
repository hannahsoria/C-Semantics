CS333 - Project #4 - README

Hannah Soria

03/22/24

Directory Layout:

	Project5_hmsori25/
	|
	|__/cstk.c
	|__/cstk.h
	|__/cstktest2.c
	|__/toDraw2.c
	|__/task1.swift
	|__/task2.swift
	|__/task3.swift
	|__/bubbleSort.c
	|__/haiku.swift
	|__/extensions.lol
	|__/cs333_project4_readme.txt

	cstk.c doesn't compile and run alone
	cstk.h doesn't compile and run alone

cstktest2.c
 Compile:
 
	gcc -o cstktest2 cstktest2.c cstk.c
 Run:
 
	./cstktest2
 Output:
 
    All non-display tests passed!
    You should now see the numbers from 0 to 9: 
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9

    You should now see the string: [Max Bender: 10, Stephanie Taylor: 100]
    Max Bender: 10, Stephanie Taylor: 100
	

toDraw2.c
 Compile:
 
	gcc -o toDraw2 toDraw2.c cstk.c
 Run:
 
	./toDraw2
 Output:
 
    After pushing elements:

    address of pointer stack is at:     0x30dbd1470
    stack is pointing to:               0x7f9bc7f05dd0
    address stored in data is:          0x7f9bc7f05ec0
    ddress of the top of stack is at:   0x7f9bc7f05dd8
    top points to:                      0x7f9bc7f05dd8
    value stored in top is:             0x7f9bc7f05ef0
    address of the capacity is at:      0x7f9bc7f05de0
    value store at capacity i:          10
    address of the variable i is at:    0x30dbd146c
    value stored in the variable i is:  5

task1.swift
 Compile:
 
	swiftc task1.swift
 Run:
 
	./task1
 Output:
 
    example of a basic for loop:
    the value i: 1
    the value i: 2
    the value i: 3
    the value i: 4
    the value i: 5

    example of looping through an array:
    the place: home
    the place: school
    the place: gym

    example of while loop: 
    the end value: 5

    example of repeat while loop: 
    count: 0
    count: 1
    count: 2
    count: 3
    count: 4

    example of conditionals: 
    this person is under 5 feet

    example of switches: 
    the first case

task2.swift
 Compile:
 
	swiftc task2.swift
 Run:
 
	./task2
 Output:
 
    example of a basic function:
    hi

    example of assigning a function to a variable: 
    hello, mrs.

    example of passing another function as an argument: 
    hello, Hannah

    example of directly passing function as an argument: 
    hello, Hannah

task3.swift
 Compile:
 
	swiftc task3.swift
 Run:
 
	./task3
 Output:
 
    before: [5, 3, 7, 6, 8, 2, 4]
    after: [2, 3, 4, 5, 6, 7, 8]
    before: [5.4, 3.67, 7.3, 6.4, 8.8, 2.23, 4.3]
    after: [2.23, 3.67, 4.3, 5.4, 6.4, 7.3, 8.8]
    before: ["b", "d", "a", "c", "e"]
    after: ["a", "b", "c", "d", "e"]

bubbleSort.c
 Compile:
 
	gcc -o bubbleSort bubbleSort.c
 Run:
 
	./bubbleSort
 Output:
 
    array before sorting: 3 6 4 7 1 9 
    array after sorting: 1 3 4 6 7 9 

haiku.swift
 Compile:
 
	swiftc haiku.swift
 Run:
 
	./haiku
 Output:
 
    If statements for days
    they will always be useful!
    If statements for days

extension.lol
 Run:
 
	lci extension.lol
 Output:
 
    practicing assigning and printing
    my name iz cat and I'm orange
    nice to meet ya
    practicing mathmateical operators
    addition var1: 6
    subtraction var1: 2
    multiplication var1: 8
    division var1: 2
    mod var1: 2
    var1 is: 2 var 2 is 4
    maximum of either var1: 4
    var1 is: 4 var 2 is 4
    minimum of either var1: 4
    concatenation: 
    hi i am cat
