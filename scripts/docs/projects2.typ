= Chapter 2 C Fundamentals

== Programming Projects@cProgramming 

+ Write a program that uses `printf` to display the following picture on the  scree:

  ```
         *
        *
       *
  *   *
   * * 
    *
  ```


  #underline("Answer"): #text(fill:eastern)[#link("files/src/stars.c")[Source Code]]
  
+ Write a program that computers the volume of a sphere with a 10-meter
  radius, using the formula $v=4/3 pi r^3$. Write the fraction $4/3$ as
  `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) _Hint:_ C doesn't 
  have an exponentiation operator, so you'll need to multiply $r$ by itself
  twice to compute $r^3$.

  #underline("Answer"): #text(fill:eastern)[#link("files/src/")[Source Code]]
  
+ Modify the program of Programming Project 2 so that it prompts the user
  to enter the radius of the sphere.

  #underline("Answer"): #text(fill:eastern)[#link("files/src/")[Source Code]]
  
+ Write a program that asks the user to enter a dollars-and-cents amount,
  then displays the amount with 5% tax added:

  ```
  Enter an amount: 100.00
  With tax added: $105.00
  ```

  #underline("Answer"): #text(fill:eastern)[#link("files/src/")[Source Code]]
  
+ Write a program that asks the user to enter a value for $x$ and then displays the value of the
  following polynomial:

  $3 x^5 + 2 x^4 -5 x^3 - x^2 + 7x -6$

  _Hint:_ C doesn't have an exponentiation operator, so you'll need to multiply $x$ by itself
  repeatedly in order to compute the powers of $x$. (For example, `x*x*x` is `x` cubed.)
  
  #underline("Answer"): #text(fill:eastern)[#link("files/src/")[Source Code]]

#bibliography("references.yml")

