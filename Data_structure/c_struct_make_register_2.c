#include<stdio.h>
#include<stdlib.h>

struct reg8 {
    u_int16_t addr;
    u_int8_t val;
};
    
void make_reg(struct reg8 *, u_int16_t, u_int8_t);

int main(){
  
   u_int16_t my_addr=0x3333;
   
   u_int8_t my_val=23;
   
   struct reg8 ptr;
   
  make_reg(&ptr, my_addr, my_val);
  printf("i'm here\n");
  printf("the first address is: 0x%x\n", ptr.addr);
  printf("the first val is: %u\n", ptr.val);

}

void make_reg(struct reg8 *reg, u_int16_t address, u_int8_t value){
    reg->addr = address;
    reg->val = value;
}

/*
this also works. 
only function is in pointer type, caller is in variable.

i'm here
the first address is: 0x3333
the first val is: 23
 */








