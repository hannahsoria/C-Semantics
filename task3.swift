/**
 * task3.swift
 * Hannah Soria
 * 3/21/2024
 * bubble sort in swift
 */

//  bubbleSort(A[1...n])
//     for i = 1 to length[A] – 1
//         for j = length[A] downto i + 1 
//             if A[j] < A[j – 1]
//                 swap A[j] with A[j-1]

 func bubbleSort<T: Comparable>(_ array: inout[T]){
    let n = array.count
    for i in 0..<n{
        var swapped = false
        for j in 1..<n-i {
            if array[j] < array[j-1]{
                array.swapAt(j, j-1)
                swapped = true
            }
        }
        if !swapped {
            break
        }
    }
 }
 print("example of bubble sort with int:")
 var ints = [5,3,7,6,8,2,4]
 print("before: \(ints)")
 bubbleSort(&ints)
 print("after: \(ints)")

 print("\nexample of bubble sort with doubles:")
 var doubles = [5.4,3.67,7.3,6.4,8.8,2.23,4.3]
 print("before: \(doubles)")
 bubbleSort(&doubles)
 print("after: \(doubles)")

 print("\nexample of bubble sort with strings:")
 var strings = ["b", "d", "a", "c", "e"]
 print("before: \(strings)")
 bubbleSort(&strings)
 print("after: \(strings)")