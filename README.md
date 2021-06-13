# RandBow

## Download
Download Here [`Release.zip`](https://github.com/arrrowfox/RandBow/blob/main/bin/release/Release.zip)
<br />Right now it's only a windows build. Srry Linux and Mac.

## The Rules

### Variables

Cells = Array Of Ints, contains the cells<br />
Cell = Int, The curent selected cell<br />
Pointer = Int, The curent pixel being run<br />
<br />
### The Actual Rules
<br />
The Pointer starts at 0, 0(top left corner) and after runing each pixel the Pointer increases and it goes to the next pixel on the right. After Finishing each row it goes to the leftest pixel on the next row.
<br />
<br />
Each pixel does somthing other than black. Here is what they do:<br /><br />
Red = Adds 1 to the curent cell. <br />
Blue = Subtracts 1 from the curent cell.<br />
Yellow = Adds the amount in the curent cell to the Pointer.<br />
Orange = Outputs the curent cell as a character.<br />
Green = Outputs the curent cell as a int.<br />
Purple = Waits for you to type an charicter and a newline and puts into curent cell.<br />
White = Copys current cell into next cell.<br />
Dark Brown = Moves to the last cell.<br />
Light Brown = Moves to the next cell.<br />

### How Control The Program

Use "Q" to run the program.<br />
Use "W" and "E" to cycle through the colors<br />

## Examples
### "HELLO" Program("Hello World!" Would take to long)
![image](https://user-images.githubusercontent.com/85812992/121818727-87099680-cc4e-11eb-9443-998c6ab6084e.png)
1. Gets Cell 1 to "A"
2. Copys that into Cell 2
3. Gets Cell 1 to "H"
4. Prints "H"
5. Moves to Cell 2
6. Gets Cell 2 to "E" from "A"
7. Prints "E"
8. Copys "E" from Cell 2 to Cell 3
9. Moves to Cell 3
10. Gets Cell 3 up to "L"
11. Prints "L"
12. Copys Cell 3 to Cell 4
14. Prints Cell 3
15. Copys Cell 3 to Cell 4(redundancy is fun)
16. Moves to Cell 4
17. Bosts Cell 4 to "O"
18. Prints Cell 4<br />
Output: `HELLO`
