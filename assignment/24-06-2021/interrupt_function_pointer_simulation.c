#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct{
    char name[20];
    int (*isr)();
}isr_info_t;

int adc_isr (void);
int spi_isr (void);
int i2c_isr (void);
int dma_isr (void);
int gpio_isr (void);
int hardfault_isr (void);

isr_info_t isr_info[] = {
    {"adc_isr", adc_isr},
    {"spi_isr", spi_isr},
    {"i2c_isr", i2c_isr},
    {"dma_isr", dma_isr},
    {"gpio_isr", gpio_isr},
    {"hardfault_isr", hardfault_isr},
};
int main() {
    while(1){
        isr_info[rand()%6].isr();
        sleep(2);
    }
    return 0;
}

int adc_isr (void){
    printf("adc_isr triggered\n");
}

int spi_isr (void){
    printf("spi_isr triggered\n");
}

int i2c_isr (void){
    printf("i2c_isr triggered\n");
}
int dma_isr (void){
    printf("dma_isr triggered\n");
}
int gpio_isr (void){
    printf("gpio_isr triggered\n");
}
int hardfault_isr (void){
    printf("hardfault_isr triggered\n");
}

/***************************************************
Output:
  spi_isr triggered
  gpio_isr triggered
  dma_isr triggered
  spi_isr triggered
  hardfault_isr triggered
  spi_isr triggered
  gpio_isr triggered
  adc_isr triggered
  dma_isr triggered

***************************************************/
