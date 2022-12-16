.data 
    v:    .word 1,5,7,3,4,8,0,3,5,7
    m:    .word 3
    
.text
            add x2, x0 ,x0     #i
            la x10, v
            lw x11, m 
            lw x12, v
            beq x11,x12, end
  
     loop:  addi x2, x2, 1    #i++
            lw x12, (0)x10    # load v[i]
            addi x10, x10, 4
            bne x11, x12, loop
            
     end: nop
    