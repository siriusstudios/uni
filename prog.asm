.data
    msg_one: .asciz "Enter the first number: "  
    msg_two: .asciz "Enter the second number: "  
    result_msg: .asciz "result is " 

.text
_start:
    li a7, 4                     # PrintString
    la a0, msg_one               # Load address of msg_one
    ecall

    li a7, 5                     # ReadInteger
    ecall
    mv t0, a0                    # store result in t0

    li a7, 4                     # PrintString
    la a0, msg_two               # Load address of msg_two
    ecall

    li a7, 5                     # ReadInteger
    ecall
    mv t1, a0                    # storing 2nd number in t1
    addi t2, t0, t1               # add nums

    li a7, 4                     # PrintString
    la a0, result_msg            # Load address of result_msg
    ecall

    mv a0, t2                    # Move the result to a0
    li a7, 1                     # PrintString (printing resulting integer)
    ecall

    li a7, 10                    # Exit
    ecall
