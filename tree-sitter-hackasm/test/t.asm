// Put your code here.

(INIT)

  @R2
  M = 0   // we want to clear the result reg for answer

(LOOP)

  @R0
  D = M   // D hold the value of R0

  @R2
  M = M + D // add R3 to sum

  @R1
  M = M - 1 // decrement R2 for eventual 0
  D = M

  @LOOP
  D = M;JGT // exit loop if R1 == 0, otherwise goto (LOOP)

