
/*----------------------------------------------------------------------------+
|                                                                             |
|     Name   : Czar Pad Manager                                               |
| Description: �p�b�h�}�l�[�W���[                                             |
|                                                                             |
|  Search Key:                                                                |
|                                                                             |
|                                   1996-07-12 (Fri) 22:35:42        Ver 0.05 |
|                                              Copyright (C) 1996 Indick-Czar |
+----------------------------------------------------------------------------*/

#if !defined _PAD_H_
#define _PAD_H_
/*----------------------------------------------------------------------------+
|    Include File                                                             |
+----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------+
|    Constant Declaration                                                     |
+----------------------------------------------------------------------------*/
enum {
	CZPAD_MAX = 2,
};

/*----------------------------------------------------------------------------+
|    Data Type Declaration                                                    |
+----------------------------------------------------------------------------*/
typedef struct {
	unsigned short dat;		// Data
	unsigned short trg;		// Trigger
	unsigned short rpt;		// Repeat
	unsigned short old;		// Pad Data Before 1 Frame
	unsigned char analog1;	//Analog channel 1(�EX)
	unsigned char analog2;	//Analog channel 2(�EY)
	unsigned char analog3;	//Analog channel 3(��X)
	unsigned char analog4;	//Analog channel 4(��Y)
	unsigned char id;		//�[�����
	unsigned char timer[16];	//�e�{�^���̃^�C�}�[
	unsigned char analogdat;	//�A�i���O�p�b�h�̃f�[�^
	unsigned char analogtrg;	//�A�i���O�p�b�h�̃g���K(analog left(4bit) analog right(4bit))
								//�i���A���A�E�A��j�i���A���A�E�A��j
} CZARPAD;

/*----------------------------------------------------------------------------+
|    Prototype Declaration                                                    |
+----------------------------------------------------------------------------*/
extern CZARPAD Pad[CZPAD_MAX];		// PAD Data Work 

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern  "C" {
#endif

unsigned long PadManagerInit(void);
void PadGet(void);

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

/*----------------------------------------------------------------------------+
|    Global Variable Declaration                                              |
+----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------+
|    Macro Declaration                                                        |
+----------------------------------------------------------------------------*/

#endif
