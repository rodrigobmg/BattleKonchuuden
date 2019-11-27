/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  System Name   : INSECT POKEMON                                           */
/*  Machine & OS  : Sony PlayStation / PlayStation OS ( R3000 )              */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : SAVE LOAD  [ DEV CODE: 98025 ]                           */
/*  File Attribute: HEADER                                                   */
/*  File Name     : MCRD.H                                                   */
/*                                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#ifndef _MCRD_H_
#define _MCRD_H_

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern  "C" {
#endif

extern int AKMCRD();
extern void AK_MEM_DATA_INIT(int no);// �f�[�^������ 23 or 24 ���͂ŃX�^�[�g���ύX
// �I�[�g���[�h��ɌĂ�ł�������
extern int RED_GAME_DAY_FLG(void);// �������ǂ����݂܂��B�Ԃ肪�O���Ə����A�P���Ƃ���ȊO�ł�
extern char RED_GAME_CLR_NO(void);// �Q�[���N���A�񐔂�Ԃ��܂��B�N���A�񐔂�char�ŃJ�E���g���Ă�������
extern int Red_2P_Unit_Load(void);// 2P���[�h�֐��B�O������ �P�ŏI���Q�̓L�����Z�� 

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif  /* _MCRD_H_ */
