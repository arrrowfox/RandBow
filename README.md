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
