#include<stdio.h>
#include<stdlib.h>

struct reg8 {
    u_int16_t addr;
    u_int8_t val;
};

static const struct reg8 my_reg[] = {
        {0x0001, 20},
        {0xffff, 30},
    };
    
void make_reg(struct reg8 reg[], u_int16_t address[], u_int8_t value[]);

int main(){
  
   u_int16_t my_addr[2]={0x1010, 0xeeee};
   
   u_int8_t my_val[2]={3, 2};
   
   struct reg8 ptr[2];
   
  make_reg(ptr, my_addr, my_val);
  printf("i'm here\n");
  printf("the first address is: 0x%x\n", ptr[0].addr);
  printf("the first val is: %u\n", ptr[0].val);
  printf("the second address is: 0x%x\n", ptr[1].addr);
  printf("the second val is: %u\n", ptr[1].val);
}

void make_reg(struct reg8 reg[], u_int16_t address[], u_int8_t value[]){
    reg->addr = address[0];
    reg->val = value[0];
    (reg+1)->addr = address[1];
    (reg+1)->val = value[1];
   
}

/*results: 
i'm here
the first address is: 0x1010
the first val is: 3
the second address is: 0xeeee
the second val is: 2
*/
