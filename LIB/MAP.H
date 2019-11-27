/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  System Name   : 98025 "�������["                                       */
/*  Machine & OS  : Sony Play Station                                      */
/*  Language      : GNU C                                                  */
/*                                                                         */
/*  File Contents : map �\��                                               */
/*  File Name     : MAP.H                                                  */
/*                                                           by H.TATEYAMA */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
#ifndef _MAP_H_
#define _MAP_H_


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  Include File(s)                                                        */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*----- User Header     Files -----*/
#include "../lib/go.h"


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �}�N�� & �u�� & �ϐ���                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
//extern char             cMapLimit;
extern char             cResOn;
extern char             cShopOn;
extern char             cFadeFlag, cFadeSyurui;
extern char             cGodebugstatus;
extern char             cResWinFlag;
extern int              intMapXaNo;
extern FIXED            worldpos[XY];  // world pos
extern unsigned char    *cMonth, *cDay, *cWeek;
extern unsigned long    map_frame;
extern short            iMapStatusMain;
extern short            iResRtn;
extern short            iShopRtn;
extern short            iFadeSpeed;
extern short            iRr, iGg, iBb;
extern short            fadergb[RGB];
extern short            iMapScale;
extern short            iNextPrs;
extern short            iNextArea;
extern short            iMapPanelX, iMapPanelY;  // �ʂ̃p�l���� 

#define                 MPX            128
#define                 MPY            128
#define                 MAP_BUFX_MAX   1600/MPX+1
#define                 MAP_BUFY_MAX   1600/MPY+1

extern char             map_buf[MAP_BUFY_MAX][MAP_BUFX_MAX];


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �֐��̃v���g�^�C�v�錾                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
extern void map_main(void);
extern void map_init(void);
extern void map_set(void);
extern void map_ctrl(void);
extern void map_pad_ctrl(void);
extern void map_disp_judge(void);
extern void map_load_image(short iNorB);
extern void map_disp(void);
extern void map_gray(char cSta, short iX, short iY, short iColor, short iXt, short iYt);
// cSta 0:change or 1:return      iColor 16 or 256 
extern void map_semitrans(short iA, short iX, short iY, short iColor, short iXt, short iYt);
extern void map_charmask(char cSta, short iX, short iY, short iColor, short iXt, short iYt);
extern void map_fade(void);
extern void map_obj_disp(void);
extern void map_hit_data_set(void);
extern void map_next_prcs(void);
extern void map_result(void);
extern void map_shop(void);
extern int  MapFioDivReadFile2( char *filename, u_char *addr, int ss, int ns );
extern int  MapFioDivReadCD( char *filename, u_char *addr, int ss, int ns );
extern int  MapFioReadStatus( int mode );


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  ������������                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
#define RESOK SE_ENT(SE_OK1);
#define RESMV SE_ENT(SE_CUR1);

extern int ResultWindowDraw(int);
extern void LoadResultTim(void);
extern void FSNext(int,int);
extern void FSNakama(void);
extern void FSAjax(int,int,int,int);
extern void FSNumber(int,int,int);
extern void FSmushi(int,int);
extern void FSGoukei(int);
extern void SSWnd(int);
extern void FSCard(int,int,int);
//extern void LoadResultTim(void);
extern void FSErabu(int,int);
extern void SSSavePsSleep(int y);

//#define RESULT_ADDR 0x80100000

typedef struct {
	short	goukei_sum;		//���̒��̍��v�|�C���g.
	char	type;			//���̃^�C�v�i�P���J�u�g���V�j.
	char	kosuu;			//���̒������C�Q�b�g������.
} *LPRESULT;

//LPRESULT result;   //=(LPRESULT)(RESULT_ADDR);



// warning warning warning warning warning warning warning warning
//  
//  �ȑO�̂��̂����኱�̕ύX������܂��I�I.
//
//  �E�u���ցv�u����v���̕\�����������ɂȂ�܂���.
//  �E�{�X�Q�b�g���ɂ��|�C���g�����Z�����d�l�������ł��̂ŁA�������܂���.
//    result[0].goukei_sum �Ƀ{�X�̃|�C���g����n���ĉ�����.
//
// warning warning warning warning warning warning warning warning



//
// �J�[�h����n���ɂ́A�ȉ��̂悤�ɂ��Ă�������.
//    result[0].card = 68000;
//
//  �킢�ŃQ�b�g���������̎�ސ��̎��ʂ͈ȉ��̗���Q�l�ɂ��Ă�������.
//
//  result[0].type = 1;   //�{�X�̃^�C�v.
//  result[1].type = 23;  //�Q�b�g�����G���̃^�C�v.
//  result[2].type = 13;  //�Q�b�g�����G���̃^�C�v.
//  result[3].type = 0;   //�I�����ʂ̃[��.
//  result[0].kosuu = ??; //void �ł�.
//  result[1].kosuu = 8;
//  result[2].kosuu = 12;
//  result[0].goukei_sum = 500;
//  result[1].goukei_sum = 6800;
//  result[2].goukei_sum = 6500;
//
//  ����ŁA�{�X�P�ԁi�J�u�g���V�j�T�O�O�|�C���g��.
//  �Q�R�ԁi�A�����w���d�m�J�u�g�j���W�C�łU�W�O�O�|�C���g. 
//  �P�R�ԁi�S�z���d�m�J�u�g�j���P�Q�C�łU�T�O�O�|�C���g.
//
//  ���肵���Ƃ��������ɂȂ�܂�.
//
//  �����ӁI
//    ���̊֐��͎Z�o���ʂ�\�����邾���ł��B�����p�����[�^�̍X�V�͒v���܂���̂�. 
//    �����Ӊ�����.
//
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
extern int  MapShopping(int);
extern void FSZabutonS(int,int,int);
extern void FSMochisuu(int,int);
extern void FSCommandS(int);
extern void FSZaikoS(void);
extern void SSWndS(int);
extern void FSNumberS(int,int,int);
extern void FS8x16S(int,int,int,int);
extern void FSCardS(int,int,int);
extern void LoadShoppingTim(void);
extern void FSKatta(int);
extern void FSTarimasen(void);
extern void FSKaisugideath(void);
extern void IchiBye(int);
extern void IchiTarinai(int);
extern void IchiMaido(int);

//int	*shoppar;		
//���A�C�e���������n���̂��߂̃|�C���^�ł�.
//
// ���� Format :
//    shoppar[0] == �ނ��ނ��[���[   �̏��L��.
//    shoppar[1] == �ނ��ނ��[���[�` �̏��L��.
//    shoppar[2] == �ނ��ނ��[���[�w �̏��L��.
//    shoppar[3] == �ނ��ނ��[���[�y �̏��L��.
//    shoppar[4] == �ނ��ނ��p���[�h�����N �̏��L��.
//    shoppar[5] == �ނ��G���N�V�[�� �̏��L��.
//    shoppar[6] == �J�[�h�i�����H�j�̏��L��.
//
// �߂�l :
//   MapShopping(int); �I����A��L���������P�[�V������ɃV���b�s���O����
//   ���ʂ��߂��Ă��܂��B
//
// ������ :
//   �e�p�����[�^�󂯎�蒼��́u�ۂ߁v�͓����ł͍s���Ă��܂���.
//   �֑��ł����e�A�C�e���̌��ɂX�X�𒴂���l��n���Ȃ��ŉ�����.
//   ���l�ɃJ�[�h�i�����H�j�̒l�� 9999999 �𒴂���l��n���Ȃ��ŉ�����.
//



/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/


#endif


