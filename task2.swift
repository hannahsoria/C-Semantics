/**
 * task2.swift
 * Hannah Soria
 * 3/21/2024
 * demonstrate treatment of functions in swift
 */

 // they can be assigned to variables, passed as 
 // arguments to other functions, and returned from functions

// basic function
func printString(_ str: String){
    print(str)
}

let message = "hi"
print("example of a basic function:")
printString(message)

// function for upcoming code
func title(name: String) -> String {
    return "hello, \(name)"
}

// can assign a function to a variable
var thisFunction: (String) -> String = title

// can call the function using var reference
let outcome = thisFunction("mrs.")
print("\nexample of assigning a function to a variable: ")
print(outcome)

// can define a function that takes a fuction as an argument
func doThis(funcTwo: (String) -> String, param: String){
    let words = funcTwo(param)
    print(words)
}

// pass another function as argument
print("\nexample of passing another function as an argument: ")
doThis(funcTwo: title, param: "Hannah")

// directly pass function as argument
print("\nexample of directly passing function as an argument: ")
doThis(funcTwo: { (param) -> String in
    return "hello, \(param)"
    }, param: "Hannah")

