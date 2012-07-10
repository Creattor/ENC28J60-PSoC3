/*******************************************************************************
* FILENAME: cyfitter_cfg.c
* PSoC Creator 2.1 Early Access
*
* Description:
* This file is automatically generated by PSoC Creator with device 
* initialization code.  Except for the user defined sections in
* CyClockStartupError(), this file should not be modified.
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include <cytypes.h>
#include <cydevice_trm.h>
#include <cyfitter.h>
#include <CyLib.h>
#include <cyfitter_cfg.h>

/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0
#define CYCLOCKSTART_XTAL_ERROR  1
#define CYCLOCKSTART_32KHZ_ERROR 2
#define CYCLOCKSTART_PLL_ERROR   3

/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc) the system will end up here.  Unless reimplemented by 
*  the customer, an infinite loop will be encountered.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/
#if defined(__GNUC__) || defined(__ARMCC_VERSION)
__attribute__ ((unused))
#endif
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* `#START CyClockStartupError` */

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc)    */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

    /* `#END` */

    /* If nothing else, stop here since the clocks have not started         */
    /* correctly.                                                           */
    while(1) {}
}


#undef CYCODE
#undef CYDATA
#undef CYXDATA
#undef CYFAR
#if defined(__C51__) || defined(__CX51__)
	#define CYCODE code
	#define CYDATA data
	#define CYXDATA xdata
	#define CYFAR far

	#define CYPACKED
	#define CYALIGNED
    
	#define CY_CFG_MEMORY_BARRIER()

	#ifndef CYCONFIGCPY_DECLARED
		extern void cymemzero(void CYFAR *addr, uint16 size);
		extern void cyconfigcpy(uint16 size, const void CYFAR *src, void CYFAR *dest) small;
		extern void cyconfigcpycode(uint16 size, const void CYCODE *src, void CYFAR *dest);
	#endif


	#define CYMEMZERO(a,c) cymemzero((a),(c))
	#define CYCONFIGCPY(d,s,c) cyconfigcpy((c),(s),(d))
	#define CYCONFIGCPYCODE(d,s,c) cyconfigcpycode((c),(s),(d))
#else
	#error Unsupported toolchain
#endif

/* Defines the layout and meaning of each entry in the cfg_memset_list used for clearing registers */
typedef struct {
	void CYFAR *address;
	uint16 size;
} CYPACKED cfg_memset_t;

/* Defines the layout and meaning of each entry in the cfg_memcpy_list used for initializing registers */
typedef struct {
	void CYFAR *dest;
	const void CYCODE *src;
	uint16 size;
} CYPACKED cfg_memcpy_t;

/* Contains the regions of memory that must be set to 0 during configuration */
#define CFG_MEMSET_COUNT (sizeof(cfg_memset_list)/sizeof(*cfg_memset_list))
static const cfg_memset_t CYCODE cfg_memset_list [] = {
	/* address, size */
	{(void CYFAR *)(CYREG_PRT1_DR), 16},
	{(void CYFAR *)(CYREG_PRT3_DR), 48},
	{(void CYFAR *)(CYREG_PRT12_DR), 16},
	{(void CYFAR *)(CYREG_PRT15_DR), 16},
	{(void CYFAR *)(CYDEV_UCFG_B0_P0_U0_BASE), 512},
	{(void CYFAR *)(CYDEV_UCFG_B0_P1_U1_BASE), 3456},
	{(void CYFAR *)(CYDEV_UCFG_B1_P2_U0_BASE), 2048},
	{(void CYFAR *)(CYDEV_UCFG_DSI0_BASE), 2560},
	{(void CYFAR *)(CYDEV_UCFG_DSI12_BASE), 512},
	{(void CYFAR *)(CYREG_BCTL0_MDCLK_EN), 32},
};

const uint8 CYCODE cfg_byte_table[] = {
	0x13,
	0x00, 0x52, 0x02, /* Base address 0x005200 */
	/* CYDEV_PRTDSI_PRT0_BASE */
	0x00, 0x01, 0x01, 0x02, 
	0x00, 0x64, 0x02, /* Base address 0x006400 */
	/* CYDEV_UWRK_UWRK8_B0_BASE + 0x00000070 */
	0x82, 0x0F, 0x8B, 0x0D, 
	0x01, 0x00, 0x4B, /* Base address 0x010000 */
	/* CYDEV_UCFG_B0_P0_U0_BASE */
	0x01, 0x10, 0x08, 0x0E, 0x11, 0x1B, 0x13, 0x04, 0x14, 0x03, 0x15, 0x05, 0x16, 0x04, 0x17, 0x0A, 
	0x18, 0x04, 0x19, 0x11, 0x1A, 0x09, 0x1B, 0x02, 0x2C, 0x05, 0x2E, 0x0A, 0x31, 0x02, 0x32, 0x0F, 
	0x35, 0x1C, 0x37, 0x01, 0x38, 0x08, 0x3B, 0x20, 0x3F, 0x41, 0x54, 0x09, 0x58, 0x04, 0x59, 0x04, 
	0x5B, 0x04, 0x5F, 0x01, 
	/* CYDEV_UCFG_B0_P0_U1_BASE */
	0x80, 0x22, 0x81, 0x02, 0x82, 0x44, 0x84, 0x42, 0x85, 0x0C, 0x86, 0xA8, 0x87, 0x03, 0x88, 0x40, 
	0x89, 0x03, 0x8B, 0x04, 0x8C, 0x4D, 0x8D, 0x1A, 0x8E, 0x90, 0x90, 0x02, 0x91, 0x01, 0x92, 0x0D, 
	0x93, 0x08, 0x94, 0xE1, 0x95, 0x18, 0x96, 0x02, 0x97, 0x02, 0x98, 0x5D, 0x99, 0x08, 0x9A, 0x80, 
	0x9C, 0xDD, 0xA0, 0xDD, 0xA1, 0x1A, 0xA4, 0x9D, 0xA6, 0x40, 0xA9, 0x12, 0xAA, 0x10, 0xAB, 0x08, 
	0xAC, 0x80, 0xAD, 0x08, 0xAF, 0x12, 0xB0, 0x0F, 0xB1, 0x0F, 0xB2, 0xE0, 0xB3, 0x10, 0xB4, 0x10, 
	0xBA, 0x02, 0xBB, 0x02, 0xBE, 0x10, 0xBF, 0x04, 0xD4, 0x40, 0xD8, 0x04, 0xD9, 0x04, 0xDB, 0x04, 
	0xDF, 0x01, 
	0x01, 0x01, 0x2E, /* Base address 0x010100 */
	/* CYDEV_UCFG_B0_P0_ROUTE_BASE */
	0x00, 0x10, 0x04, 0x04, 0x05, 0xA0, 0x07, 0x40, 0x09, 0x28, 0x0D, 0x08, 0x0E, 0x49, 0x12, 0x02, 
	0x16, 0xA6, 0x18, 0x10, 0x1D, 0x08, 0x1E, 0x50, 0x1F, 0x10, 0x20, 0x04, 0x21, 0x20, 0x22, 0x80, 
	0x23, 0x80, 0x26, 0x0A, 0x27, 0x40, 0x2D, 0x80, 0x2E, 0x21, 0x2F, 0x0A, 0x31, 0x28, 0x32, 0x02, 
	0x35, 0x20, 0x36, 0x16, 0x3A, 0x02, 0x3C, 0x84, 0x3E, 0x92, 0x3F, 0x02, 0x58, 0x20, 0x59, 0x09, 
	0x5B, 0x80, 0x62, 0x80, 0x66, 0x10, 0x67, 0x21, 
	/* CYDEV_UCFG_B0_P0_ROUTE_BASE + 0x00000080 */
	0x81, 0x01, 0x82, 0x08, 0xC0, 0xF2, 0xC2, 0xF6, 0xC4, 0xF1, 0xCA, 0xB0, 0xCC, 0xE7, 0xCE, 0xF1, 
	0xD6, 0x0F, 0xD8, 0x78, 
	0x01, 0x02, 0x0F, /* Base address 0x010200 */
	/* CYDEV_UCFG_B0_P1_U1_BASE */
	0x85, 0x02, 0x87, 0x0D, 0x89, 0x03, 0x8B, 0x0C, 0x91, 0x05, 0x93, 0x0A, 0x99, 0x09, 0x9B, 0x06, 
	0xB5, 0x0F, 0xBB, 0x20, 0xD6, 0x08, 0xD9, 0x04, 0xDB, 0x04, 0xDD, 0x90, 0xDF, 0x01, 
	0x01, 0x03, 0x3F, /* Base address 0x010300 */
	/* CYDEV_UCFG_B0_P1_ROUTE_BASE */
	0x04, 0x2A, 0x06, 0x01, 0x0D, 0x28, 0x0E, 0x42, 0x15, 0x01, 0x17, 0x24, 0x1E, 0x40, 0x20, 0x04, 
	0x24, 0x08, 0x26, 0x90, 0x2E, 0x29, 0x2F, 0x02, 0x31, 0x20, 0x32, 0x02, 0x36, 0x93, 0x37, 0x04, 
	0x38, 0x04, 0x3A, 0x20, 0x3B, 0x08, 0x3C, 0x80, 0x3E, 0x04, 0x45, 0x28, 0x46, 0x2A, 0x4D, 0x08, 
	0x4E, 0x0A, 0x4F, 0x02, 0x56, 0x15, 0x58, 0x20, 0x59, 0x40, 0x60, 0x02, 0x62, 0x20, 0x67, 0x08, 
	0x6C, 0x11, 0x6D, 0x01, 0x6E, 0x0D, 0x6F, 0x0E, 0x74, 0x40, 
	/* CYDEV_UCFG_B0_P1_ROUTE_BASE + 0x00000080 */
	0x84, 0x60, 0x85, 0x40, 0x87, 0x20, 0x88, 0x02, 0x8E, 0x20, 0x96, 0x01, 0x9D, 0x08, 0x9E, 0x14, 
	0xA1, 0x28, 0xA2, 0x0A, 0xA4, 0x40, 0xA6, 0x14, 0xA7, 0x0B, 0xA8, 0x20, 0xAA, 0x06, 0xAB, 0x01, 
	0xC0, 0xF0, 0xC2, 0xF0, 0xC4, 0x70, 0xCA, 0xF0, 0xCC, 0xF5, 0xCE, 0x56, 0xD0, 0x70, 0xD2, 0x30, 
	0xD6, 0x0C, 0xD8, 0x2C, 
	0x01, 0x04, 0x04, /* Base address 0x010400 */
	/* CYDEV_UCFG_B0_P2_U0_BASE */
	0x38, 0x08, 0x3E, 0x04, 0x58, 0x04, 0x5F, 0x01, 
	0x01, 0x05, 0x05, /* Base address 0x010500 */
	/* CYDEV_UCFG_B0_P2_ROUTE_BASE */
	0x1B, 0x04, 
	/* CYDEV_UCFG_B0_P2_ROUTE_BASE + 0x00000080 */
	0xAA, 0xC0, 0xB6, 0x02, 0xE6, 0x08, 0xE8, 0x40, 
	0x01, 0x07, 0x01, /* Base address 0x010700 */
	/* CYDEV_UCFG_B0_P3_ROUTE_BASE + 0x00000080 */
	0xAB, 0x04, 
	0x01, 0x0A, 0x33, /* Base address 0x010A00 */
	/* CYDEV_UCFG_B0_P5_U0_BASE */
	0x40, 0x54, 0x49, 0xFF, 0x4A, 0xFF, 0x4B, 0xFF, 0x4F, 0x01, 0x50, 0x18, 0x52, 0x80, 0x5A, 0x08, 
	0x5B, 0x0A, 0x5D, 0x99, 0x5F, 0x01, 0x60, 0x40, 0x62, 0x40, 0x64, 0x40, 0x65, 0x40, 0x66, 0x80, 
	0x68, 0x80, 0x6A, 0x80, 0x6C, 0x80, 0x6E, 0x80, 
	/* CYDEV_UCFG_B0_P5_U1_BASE */
	0x82, 0x01, 0x92, 0x01, 0xB0, 0x01, 0xBE, 0x01, 0xC0, 0x54, 0xC5, 0xEC, 0xC6, 0x02, 0xC8, 0x07, 
	0xC9, 0xFF, 0xCA, 0xFF, 0xCB, 0xFF, 0xCD, 0x83, 0xCE, 0x03, 0xCF, 0x01, 0xD0, 0x18, 0xD4, 0x01, 
	0xD6, 0x04, 0xD8, 0x04, 0xDA, 0x08, 0xDB, 0x08, 0xDD, 0x99, 0xDF, 0x01, 0xE0, 0x40, 0xE2, 0x40, 
	0xE4, 0x40, 0xE5, 0x40, 0xE6, 0x80, 0xE8, 0x80, 0xEA, 0x80, 0xEC, 0x80, 0xEE, 0x80, 
	0x01, 0x0B, 0x1C, /* Base address 0x010B00 */
	/* CYDEV_UCFG_B0_P5_ROUTE_BASE */
	0x06, 0x80, 0x0C, 0x02, 0x1E, 0x80, 0x42, 0x80, 0x46, 0x80, 0x48, 0x02, 0x4C, 0x02, 0x4D, 0x04, 
	0x4F, 0x01, 0x56, 0x80, 0x5D, 0x04, 0x5E, 0x80, 0x5F, 0x01, 0x66, 0x02, 0x70, 0x02, 0x78, 0x80, 
	0x7B, 0x10, 0x7C, 0x80, 
	/* CYDEV_UCFG_B0_P5_ROUTE_BASE + 0x00000080 */
	0x86, 0x02, 0x98, 0x80, 0xA3, 0x10, 0xC0, 0x10, 0xC2, 0x10, 0xD0, 0x81, 0xD2, 0x18, 0xD6, 0xD0, 
	0xD8, 0x80, 0xDE, 0x1A, 
	0x01, 0x0D, 0x03, /* Base address 0x010D00 */
	/* CYDEV_UCFG_B0_P6_ROUTE_BASE + 0x00000080 */
	0x88, 0x80, 0x8F, 0x10, 0xE0, 0x30, 
	0x01, 0x40, 0x02, /* Base address 0x014000 */
	/* CYDEV_UCFG_DSI0_BASE */
	0x31, 0x40, 
	/* CYDEV_UCFG_DSI0_BASE + 0x00000080 */
	0xCC, 0x10, 
	0x01, 0x41, 0x0A, /* Base address 0x014100 */
	/* CYDEV_UCFG_DSI1_BASE */
	0x00, 0x40, 0x57, 0x04, 0x59, 0x80, 0x62, 0x80, 
	/* CYDEV_UCFG_DSI1_BASE + 0x00000080 */
	0x87, 0x20, 0x9D, 0x40, 0xC0, 0x40, 0xD4, 0xC0, 0xD6, 0x40, 0xE4, 0x10, 
	0x01, 0x42, 0x0A, /* Base address 0x014200 */
	/* CYDEV_UCFG_DSI2_BASE + 0x00000080 */
	0x85, 0x40, 0x9D, 0x40, 0xA6, 0x80, 0xA7, 0x20, 0xA9, 0x80, 0xAB, 0x04, 0xB4, 0x40, 0xE6, 0x10, 
	0xEA, 0x20, 0xEE, 0x20, 
	0x01, 0x43, 0x03, /* Base address 0x014300 */
	/* CYDEV_UCFG_DSI3_BASE + 0x00000080 */
	0xA7, 0x20, 0xAA, 0x80, 0xEE, 0x20, 
	0x01, 0x48, 0x03, /* Base address 0x014800 */
	/* CYDEV_UCFG_DSI8_BASE */
	0x2B, 0x20, 
	/* CYDEV_UCFG_DSI8_BASE + 0x00000080 */
	0xA7, 0x20, 0xCA, 0x40, 
	0x01, 0x50, 0x06, /* Base address 0x015000 */
	/* CYREG_BCTL0_MDCLK_EN */
	0x00, 0x01, 0x01, 0x01, 0x02, 0x14, 0x08, 0x01, 0x09, 0x01, 0x0D, 0x01, 
	0x01, 0x51, 0x01, /* Base address 0x015100 */
	/* CYREG_IDMUX_IRQ_CTL0 */
	0x00, 0x03, 
};
/* BYTES: 718 */

/* UDB_1_4_1_CONFIG Address: CYDEV_UCFG_B0_P1_U0_BASE Size (bytes): 128 */
static const uint8 CYCODE BS_UDB_1_4_1_CONFIG_VAL[] = {
	0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 
	0x01, 0x01, 0x00, 0x1E, 0x07, 0x00, 0x38, 0x04, 0x56, 0x01, 0x09, 0x06, 0x0A, 0x00, 0x10, 0x10, 
	0x04, 0x04, 0x00, 0x00, 0x00, 0x07, 0x04, 0x18, 0x04, 0x08, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 
	0x7F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x18, 0x02, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x03, 0x60, 0x00, 0x01, 0xCE, 0xF0, 0xBD, 0x3B, 0xFF, 0xFF, 0xFF, 0x22, 0x00, 0xF0, 0x08, 
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x24, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x00, 0xC0, 0x00, 0x40, 0x01, 0x10, 0x11, 0xC0, 0x01, 0x00, 0x11, 0x40, 0x01, 0x40, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

/* IOPINS0_0 Address: CYREG_PRT0_DR Size (bytes): 10 */
static const uint8 CYCODE BS_IOPINS0_0_VAL[] = {
	0x60, 0x00, 0x04, 0x63, 0x63, 0x00, 0x23, 0x00, 0x00, 0x00};

/* IOPINS0_2 Address: CYREG_PRT2_DM0 Size (bytes): 8 */
static const uint8 CYCODE BS_IOPINS0_2_VAL[] = {
	0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00};

/* IOPINS0_6 Address: CYREG_PRT6_DM0 Size (bytes): 8 */
static const uint8 CYCODE BS_IOPINS0_6_VAL[] = {
	0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00};

#define CFG_MEMCPY_COUNT (sizeof(cfg_memcpy_list)/sizeof(*cfg_memcpy_list))
static const cfg_memcpy_t CYCODE cfg_memcpy_list [] = {
	/* dest, src, size */
	{(void CYFAR *)(CYDEV_UCFG_B0_P1_U0_BASE), BS_UDB_1_4_1_CONFIG_VAL, 128},
};


extern void cfg_write_bytes_code(void CYCODE *table);
extern void cfg_write_bytes(void CYFAR *table);

/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*  Performs the initialization of all of the clocks in the device based on the
*  settings in the Clock tab of the DWR.  This includes enabling the requested
*  clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void ClockSetup(void)
{
	reg32  timeout;
	reg32* timeout_p = &timeout;
	reg8   pllLock;


	/* Configure Digital Clocks based on settings from Clock DWR */
	CY_SET_XTND_REG24((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0), 0x190000);

	/* Configure ILO based on settings from Clock DWR */
	CY_SET_REG8((void CYXDATA *)(CYREG_SLOWCLK_ILO_CR0), 0x02);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_CR), 0x08);

	/* Configure XTAL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_XMHZ_CFG0), 0x3316);
	CY_SET_REG8((void CYXDATA *)(CYREG_FASTCLK_XMHZ_CSR), 0x01);
	/* Wait up to 130000us for the XTAL to lock */
	CY_GET_REG8(CYREG_FASTCLK_XMHZ_CSR);
	for (timeout = 130000 / 10; *timeout_p && (CY_GET_REG8(CYREG_FASTCLK_XMHZ_CSR) & 0x80u); timeout--) { 
		
		CyDelayCycles(10 * 48); /* Delay 10us based on 48MHz clock */
	}
	if (*timeout_p == 0)
		CyClockStartupError(CYCLOCKSTART_XTAL_ERROR);

	/* Configure PLL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_P), 0x0D27);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_CR), 0x09);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_CFG0), 0x1051);
	/* Wait up to 250us for the PLL to lock */
	pllLock = 0;
	for (timeout = 250 / 10; *timeout_p && (pllLock != 0x03u); timeout--) { 
		pllLock = 0x03u & ((pllLock << 1) | ((CY_GET_REG8(CYREG_FASTCLK_PLL_SR) & 0x01u) >> 0));
		CyDelayCycles(10 * 48); /* Delay 10us based on 48MHz clock */
	}

	/* Configure Bus/Master Clock based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x0100);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_CR), 0x49);

	/* Configure IMO based on settings from Clock DWR */
	CY_SET_REG8((void CYXDATA *)(CYREG_FASTCLK_IMO_CR), 0x20);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_MSTR0), 0x07);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_BCFG0), 0x00);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_BCFG2), 0x48);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_MSTR0), 0x00);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_LD), 0x02);

	CY_SET_REG8((void CYXDATA *)(CYREG_PM_ACT_CFG2), ((CY_GET_REG8(CYREG_PM_ACT_CFG2) | 0x01)));
}


/* Analog API Functions */

/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void AnalogSetDefault(void)
{
	uint8 bg_xover_inl_trim = CY_GET_XTND_REG8(CYREG_FLSHID_MFG_CFG_BG_XOVER_INL_TRIM + 1u);
	CY_SET_REG8(CYREG_BG_DFT0, bg_xover_inl_trim & 0x07u);
	CY_SET_REG8(CYREG_BG_DFT1, (bg_xover_inl_trim >> 4) & 0x0Fu);
	CY_SET_REG8(CYREG_PUMP_CR0, 0x44);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint8 regValue = CY_GET_REG8(CYREG_PUMP_CR0);
	if (enabled)
		regValue |= 0x00;
	else
		regValue &= ~0x00;
	CY_SET_REG8(CYREG_PUMP_CR0, regValue);
}

#define CY_AMUX_UNUSED CYREG_BOOST_SR


/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/
void cyfitter_cfg(void)
{

	/* Set Flash Cycles based on max possible frequency in case a glitch occurs during ClockSetup(). */
	CY_SET_REG8((void CYXDATA *)(CYREG_CACHE_CR), ((CYDEV_INSTRUCT_CACHE_ENABLED) ? 0xF1 : 0xC0));
	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();
	/* Disable unused USB pad to reduce current draw */
	CY_SET_REG8(CYREG_PM_USB_CR0, CY_GET_REG8(CYREG_PM_USB_CR0) & ~0x02);

	/* Enable/Disable Debug functionality based on settings from System DWR */
	CY_SET_XTND_REG8(CYREG_MLOGIC_DEBUG, (CY_GET_XTND_REG8(CYREG_MLOGIC_DEBUG) | 0x05));

	{
		uint8 CYDATA i;

		/* Zero out critical memory blocks before beginning configuration */
		for (i = 0; i < CFG_MEMSET_COUNT; i++)
		{
			const cfg_memset_t CYCODE * CYDATA ms = &cfg_memset_list[i];
			CYMEMZERO(ms->address, ms->size);
		}

		/* Copy device configuration data into registers */
		for (i = 0; i < CFG_MEMCPY_COUNT; i++)
		{
			const cfg_memcpy_t CYCODE * CYDATA mc = &cfg_memcpy_list[i];
			void * CYDATA dest = mc->dest;
			const void CYCODE * CYDATA src = mc->src;
			uint16 CYDATA size = mc->size;
			CYCONFIGCPYCODE(dest, src, size);
		}

		cfg_write_bytes_code(cfg_byte_table);

		/* Enable digital routing */
		CY_SET_XTND_REG8(CYREG_BCTL0_BANK_CTL, CY_GET_XTND_REG8(CYREG_BCTL0_BANK_CTL) | 0x02u);
		CY_SET_XTND_REG8(CYREG_BCTL1_BANK_CTL, CY_GET_XTND_REG8(CYREG_BCTL1_BANK_CTL) | 0x02u);

		/* Enable UDB array */
		CY_SET_REG8(CYREG_PM_ACT_CFG0, CY_GET_REG8(CYREG_PM_ACT_CFG0) | 0x40u);
		CY_SET_REG8(CYREG_PM_AVAIL_CR2, CY_GET_REG8(CYREG_PM_AVAIL_CR2) | 0x10u);
	}

	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT0_DR), (void CYCODE *)(BS_IOPINS0_0_VAL), 10);
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT2_DM0), (void CYCODE *)(BS_IOPINS0_2_VAL), 8);
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT6_DM0), (void CYCODE *)(BS_IOPINS0_6_VAL), 8);
	CY_SET_REG8((void CYXDATA *)(CYREG_INTC_CSR_EN), 0x01);
	CY_SET_REG8((void CYXDATA *)(CYREG_PWRSYS_WAKE_TR2), 0x3A);

	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BCTL0_UDB_TEST_3), 0x40);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BCTL1_UDB_TEST_3), 0x40);

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

	/* Configure alternate active mode */
	CYCONFIGCPY((void CYFAR *)CYDEV_PM_STBY_BASE, (void CYFAR *)CYDEV_PM_ACT_BASE, 14);
	CY_SET_REG8(CYREG_PM_STBY_CFG0, CY_GET_REG8(CYREG_PM_STBY_CFG0) & ~0x02u);	/* Disable CPU */
}
