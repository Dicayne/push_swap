# Push_Swap 42 Project

This project's purpose is to create 2 programs, push_swap and checker, aiming to sort a list on integers, on 2 lists\
To do this we only can make some precise action!

### ACTIONS

* **sa** ➜ Swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
* **sb** ➜ Swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
* **ss** ➜ **sa** and **sb** at the same time.
* **pa** ➜ Push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
* **pb** ➜ Push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
* **ra** ➜ Rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
* **rb** ➜ Rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
* **rr** ➜ **ra** and **rb** at the same time.
* **rra** ➜ Reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
* **rrb** ➜ Reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
* **rrr** ➜ **rra** and **rrb** at the same time.

## PUSH_SWAP:
The purpose of this program is to objective to find the best and fastest way to sort the list and display on the standard output every action it make.

## CHECKER:
The purpose of this program is to execute the actions received in standard input and to check if the first list is sorted and the second empty.

### COMPILATION AND EXECUTION
```
make
./push_swap (list of integer, ex 5 9 7 49 67 0 -7 6) | ./checker (same list of integer)
```
It will display **OK** if list is sorted, **ERROR** if an error occurs.\
You can also execute program one by one:
```
./push_swap (list of integer)
./checker (list of integer)
```
./push_swap will display all action.\
./checker will wait input from you to sort the list.

### VISUALIZER
If you want a vizualizer, you need to have SDL2 package installed, then execute those commands:

```
make bonus
ARG=$(./genstack.pl <size of the list> <min value> <max value>)
./push_swap $ARG | ./checker $ARG -v
```
