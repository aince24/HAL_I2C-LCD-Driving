
uint8_t i2cDeviceAddr = 0x4E;  // 0x4E Slave in I2C haberleþme saðlamak için bulduðumuz adrestir


I2C_HandleTypeDef hi2cx;
extern I2C_HandleTypeDef hi2c1; 
                                
static void hi2cx_define(void)
{
	hi2cx = hi2c1;	
}

#define LCD_16x2
//#define LCD_16x4
//#define LCD_20x2
//#define LCD_20x4


static const uint8_t BFR_MAX = 100; 

