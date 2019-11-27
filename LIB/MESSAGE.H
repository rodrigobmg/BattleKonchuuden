/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  System Name   : 98025 "�������["                                       */
/*  Machine & OS  : Sony Play Station                                      */
/*  Language      : GNU C                                                  */
/*                                                                         */
/*  File Contents : message �\��                                           */
/*  File Name     : MESSAGE.H                                              */
/*                                                           by H.TATEYAMA */
/*                                                                         */
/*                                                                         */
/*                                                                         */
/*  MES WINDOW �� FONT.C ������ LOAD �ς�                                  */
/*                                                                         */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
#ifndef _MESSAGE_H_
#define _MESSAGE_H_


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �}�N�� & �u�� & �ϐ���                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
#if 0
#define  MSG_ADDR  0x80156800     //���b�Z�[�W�o�b�t�@(0xb000)
#endif

enum {
    CLOSE,
    OPENING,
    OPEN,
    CLOSING,
};

enum {
    MOVE,
    STOP,
};

enum {
    WMSG_OFF,
    WMSG_JUDGE,
    WMSG_WAIT,
    WMSG_END,
    WMSG_SCROOL,
    WMSG_CLOSE,
};

typedef struct {
    unsigned int   id;
    unsigned int   size;
    unsigned int   tnb_msg;
    unsigned int   index[1];
} MESSAGECHUNK, MSG;

typedef struct {
    unsigned short imoji;
    unsigned short ix;
    unsigned short  iy;
    unsigned       col_bit   :4;
    unsigned       size_bit  :2;
    unsigned       rot_bit   :2;
    unsigned       speed_bit :1;
    unsigned       dummy     :7;
} mesdata, MESDATA;

extern char        cMsgSelOk;
extern char        cMesWinSta;
extern char        cMsgOn;
extern char        cMsgSend;
extern short       iMsgSendCount, iMsgSendCountBak;
extern short       iMsgSta, iMsgOn, irot, iMsgNo;
extern short       iWinXdef, iWinYdef, iReqPerm;
extern MESDATA     mes_screen[3][18];


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �֐��̃v���g�^�C�v�錾                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
extern void msg_init(void);
extern void msg_window_ctrl(void);               // ���b�Z�[�W�E�B���h�Ǘ� 
extern void msg_ctrl(void);                      // ���b�Z�[�W�Ǘ� 
extern void data_judge(void);                    // �f�[�^���f 
extern void request_msg(unsigned short msg);     // �w�胁�b�Z�[�W�v�� 
extern void msgdata_set(short iNo);              // ���b�Z�[�W�f�[�^�Z�b�g 
extern void screen_init(void);                   // �`��X�N���[�������� 
extern void screen_disp(void);                   // �`�� 
extern void msg_close(void);                     // ���b�Z�[�W�����I�� 


#endif


