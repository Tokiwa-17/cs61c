.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (defined above).
# The return value should be stored in a0
f:

    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    addi t0, x0, 6
    sb t0, -3(a1)

    addi t0, x0, 61
    sb t0, -2(a1) 

    addi t0, x0, 17
    sb t0, -1(a1) 

    addi t0, x0, -38
    sb t0, 0(a1)

    addi t0, x0, 19
    sb t0, 1(a1)

    addi t0, x0, 42
    sb t0, 2(a1)

    addi t0, x0, 5
    sb t0, 3(a1)

    add a2, a0, a1
    lb a3, 0(a2)
    mv a0, a3
    jr ra  