/**
 * task1.swift
 * Hannah Soria
 * 3/21/2024
 * control flow statements for swift
 */

 // for loops
 func loops(){
    //basic loop
    print("example of a basic for loop:")
    for i in 1...5{
        print("the value i: \(i)")
    }

    // looping through array
    print("\nexample of looping through an array:")
    let places = ["home", "school", "gym"]
    for place in places{
        print("the place: \(place)")
    }
 }

 // while loops
 func whiles(){
    print("\nexample of while loop: ")
    var i = 1
    while i < 5{
        i += 1
    }
    print("the end value: \(i)")

    // repeat while loop
    print("\nexample of repeat while loop: ")
    var count = 0
    repeat{
        print("count: \(count)")
        count += 1
    } while count < 5
 }

 // conditional statements
 func conditions(){
    print("\nexample of conditionals: ")
    let height = 55
    if height < 60 {
        print("this person is under 5 feet")
    } else if height > 60 && height < 72 {
        print("this person is over 5 feet but under 6")
    } else {
        print("this person is over 6 feet")
    }
 }

 // switch
func switches(){
    print("\nexample of switches: ")
    let letter: Character = "a"
    switch letter{
    case "a":
        print("the first case")
    case "b":
        print("the second case")
    case "c":
        print("the third case")
    default:
        print()
    }
}

loops()
whiles()
conditions()
switches()
