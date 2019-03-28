# 0x13-bit_manipulation

## Bit Manipulation

Bit manipulation is the act of algorithmically manioulating bits or other pieces of data shorter than a byte.

Here are following operators to perform bits manipulation:

### Singly linked list

Bitwise operator works on bits and perform bit by bit operation.

There are following Bitwise operators supported by C language:

| Symbol | Operator Name |
| ------ | ------- |
| & | operator [AND] |
| \| | operator [OR] |
| ^ | operator [XOR] |
| ~ | operator [FLIPPING] |
| >> | move from left to the right |
| << | move fron right to the left |

### Truth table

```sh
| AND |
| ------ |
| 0 & 0 = 0 |
| 0 & 1 = 0 |
| 1 & 0 = 0 |
| 1 & 1 = 1 |
```
```sh
| OR |
| ------ |
| 0 \| 0 = 1 |
| 0 \| 1 = 1 |
| 1 \| 0 = 1 |
| 1 \| 1 = 0 |
```
```sh
| XOR |
| ------ |
| 0 ^ 0 = 0 |
| 0 ^ 1 = 1 |
| 1 ^ 0 = 1 |
| 1 ^ 1 = 0 |
```
```sh
| FLIPPING |
| ------ |
| ~ 0 = 1 |
| ~ 1 = 0 |
```

## Topics of repository

* [0] - Write a function that converts a binary number to an unsigned int.
* [1] - Write a function that prints the binary representation of a number.
* [10] - Write a function that returns the value of a bit at a given index.
* [11] - Write a function that sets the value of a bit to 1 at a given index.
* [100] - Write a function that sets the value of a bit to 0 at a given index.
* [101] - Write a function that returns the number of bits you would need to flip to get from one number to another.