# Venue Rental Software

## Scenario Given

Assume that you have to write a program to provide solution to problem face by the company of ABC. The company is providing a service of renting a venue and place such as futsal court, badminton court booking and etc. There are several problems which face by the company in which they have to do it manually. One of the problems maybe during booking of venue. Another problem maybe face by the employee is to reserve the place in the hall before collecting the pass to be physically in the court. Booking of the sport equipment or venue from the sport center also can be done using system and many more. The program develop requires the user to input compulsory information such as personal details. Program need to display the output of all the details needed based on the topic and problem chosen.

## Questions asked

QUESTION 1

(a) Based on the situation stated, describe in details about the program you are going to develop in the Introduction section.

[QUESTION 2

(a) Identify the objective, problem statement, scope of the of the program and module or function provided in the program you develop.

(b) Describe the flow of information for the user from the start until user logout or end of the program.

QUESTION 3

(a) Design the appropriate flowchart of the program in details, the program should be able
to get input from the user, process and provide output. The program should have the
following:
a. Array
b. Function
c. Sequence, Selection and Iteration
d. Sorting and Searching
(b) Based on the flowchart in a), design and develop the appropriate program or system
using C++ programming language.

## My Interpretation

There is a mall in which there are some venues for playing sports and we have to allot the venues to people without any clash. However I didn't get the second problem as it is not properly stated in the scenario.

## Problem Statement

Design a software that takes as input the personal details of user before letting him inside the system and then ask him to select the venue he/she wants to book and then input the time he wants to book for. If the time slot is available then complete the booking otherwise print an appropriate message.

## Flow of Information

The user needs to input the following details before making any booking.

1. User Name
2. Age
3. Email id
4. Aadhaar Number

`struct user{
    string userName;
    int age;
    string email;
    string aadhar;
}`

After this user will get the following menu options to choose the venue.

* Badminton Court , ID = 1
* Futsal Court ,    ID = 2
* Tennis Court ,    ID = 3
* Billiards Court , ID = 4

## My Approach

I would use take the input from user in the form of start and end time of the booking of the venue and the venue id in the form of an array of structure. My structure would be as follows :

`struct venueBook {
    int id;
    int start, end;
    string aadhar;
}`

What I am able to get from the Scenario is that I need to use the concept of **Activity Selection** which is a greedy approach. [Here is the link to the problem](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/)

[alt text](https://github.com/Mr-Sushant/VenueRental/img/flow.png "Logo Title Text 1")

## Susahnt Shukla
