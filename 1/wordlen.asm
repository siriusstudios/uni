.data
input_string: .asciz "Hello, World!"
count_msg:    .asciz "Number of characters: "
count:        .word 0                   

.text    
main:
    la a0, input_string  # Load address of the string into a0
    li t0, 0              # char count = 0

count_loop:
    lb t1, 0(a0)        #load current into t1
    beq t1, zero, done   # If null, exit
    addi t0, t0, 1       # Increment count
    addi a0, a0, 1       # Move on
    j count_loop         

done:
    la a1, count         # Load address of count variable
    sw t0, 0(a1)         # Store the count


    la a0, count_msg     # Load address of the count message
    li a7, 4             #PrintString
    ecall

    # Print the count
    lw a0, 0(a1)         # Load the count into a0
    li a7, 1             # syscall for print_int
    ecall

    # Exit the program
    li a7, 10            # exit
    ecall
