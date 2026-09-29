# Learning-C

Small C programs I wrote while learning the language, all combined into one terminal shell called **MiniShell**. You start MiniShell and run any of the programs from inside it, like a calculator, a GCD finder or an odd/even checker.

## The programs

| No. | Program | What it does |
|-----|---------|--------------|
| 1 | AreaCalculator | Areas of a cube, trapezium, rhombus and parallelogram |
| 2 | BaunaDetector | Tall or short based on height |
| 3 | Calculator | Basic calculator with unary + and - |
| 4 | DistanceConverter | Converts km to m, cm, ft and in |
| 5 | FindingCubes | Cube of a number (multiplying vs `pow`) |
| 6 | GCDFinder | Greatest common divisor |
| 7 | GreatestOfThree | Largest of three numbers |
| 8 | GrossSalaryFinder | Gross salary from basic + DA + HRA |
| 9 | HelloWorld | Prints Hello, World! |
| 10 | nPrCalaulator | Permutations (nPr) |
| 11 | NumberSwapping | Swaps two numbers in 3 different ways |
| 12 | OddEven | Odd or even check |
| 13 | ProfitLossCalculator | Profit or loss from cost and selling price |
| 14 | RemainderWithoutModulo | Remainder without using `%` |
| 15 | Sizeof | Size of the basic C data types |
| 16 | UnaryAdditionSubtraction | Pre-increment and pre-decrement |

## MiniShell commands

| Command | What it does |
|---------|--------------|
| `help` | Shows the list of commands |
| `list` | Shows all programs with their numbers |
| `run <no.>` | Runs a program, for example `run 3` |
| `clear` | Clears the screen |
| `exit` | Closes the shell |

## Download and run (Windows)

1. Go to the [Releases page](../../releases) and download the latest zip.
2. Extract it. Keep `minishell.exe` in the same folder as the other `.exe` files.
3. Open PowerShell in that folder and run:

       .\minishell

4. Type `list` to see the programs, then `run 9` to try the first one.

## Build it yourself

You need a C compiler (gcc works fine). In PowerShell, from the project folder:

1. Compile all the programs:

       Get-ChildItem *.c | Where-Object { $_.Name -ne "minishell.c" } | ForEach-Object { gcc $_.FullName -o $_.BaseName -lm }

2. Compile the shell:

       gcc minishell.c -o minishell

3. Run it:

       .\minishell

The shell starts each program by name, so all the `.exe` files must be in the same folder as `minishell.exe`.

## Notes

- The `.exe` files are not stored in the repo (they are in `.gitignore`). Download them from the Releases page instead.
- The shell was written for Windows (it uses `cls` to clear the screen).
