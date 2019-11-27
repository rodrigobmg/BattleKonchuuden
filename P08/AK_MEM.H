// �ԑ�w�b�_�t�@�C�������J�[�p
#ifndef __AK_MEM_H__
#define __AK_MEM_H__


// �������J�[�h�c�[���p
#define		BLOCK_MAX 15									// 15�u���b�N
#define		MEM_BLOCK	1									// �Ƃ肠�����P�u���b�N�g�p
#define		SAVEOFFSET	4096								// �t�@�C���̐擪���O�Ƃ������̃I�t�Z�b�g�o�C�g��
#define		SAVEBYTES	4096								// �������ރo�C�g��(�P�Q�W�̔{��)

#define		RETRY_MAX	3									// �Ƃ肠�����R�񃊃g���C



// �Z�[�u����̂͂������牺�A801f0000�T�E���h�풓�G���A�̎�O�܂ŁB
// �ς��Ȃ������F�饥�
#define  EVT_FLAG_ADDR       0x801EF800     // event flag addr 
#define  MONTH_ADDR          0x801EF9FD     // month 
#define  DAY_ADDR            0x801EF9FE     // day 
#define  WEEK_ADDR           0x801EF9FF     // ������ 
#define  ISONO_ADDR          0x801EFA00     // ��쎁 
#define  RED_INIT_FLG_ADDR   0x801EF9F0     // �������t���O�B�N������0�N���A����܂�

#define  MEMCARD_LOAD_ADDR_2P 0x80120000    // ���͒��Ă��Ɓ[


#define		TIM_LOAD_ADDR				0x80120000			// tim load addr
#define		TIM_MAX_NUM					9					// tim number

#define		TIM_PRINT					10					// �J�[�h��������C���[��\�����ԃu���b�N�֐��Ȃ̂�10�ł����\������
#define		PRINTTIME					60					// 60flames print mess

#define		U							0// �ϊ��e�[�u���p
#define		V							1
#define		W							2
#define		H							3

#define		MESSPOSX					-112// ���b�Z�[�W�X�^�[�g�ʒu�͌O�Ƌ��ʂɂ��܂���
#define		MESSPOSY					-72

#define		AK_YES						AK_Font[1]
#define		AK_NO						AK_Font[2]
#define		AK_LOAD_OK					AK_Font[3]
#define		AK_NEW_GAME					AK_Font[4]
#define		AK_SELECT					AK_Font[5]
#define		AK_NEXT						AK_Font[6]
#define		AK_OK						AK_Font[7]




/*�ł߂�tim�ǂݍ��ݗp*/
typedef struct {
	int ST;// start point
	int SI;// size
} CATTIM;


/*-----------User Table ------------*/
static CATTIM TIM_TBL[]={/*�ł߂�tim�f�[�^�̃e�[�u��*/
#include "/98025/P08/TIMLST.REP"
};



/*�����\���p�X�v���C�g(1����)*/
extern GsSPRITE AK_Font[16];			// 1�s16����


extern short AK_Load0_Size[][4];// Load0.tim size table
extern short AK_Load1_Size[][4];// Load1.tim uvwh table
extern short AK_Load2_Size[][4];// Load2.tim table
extern short AK_Load6_Size[][4];// Load6.tim table
extern short AK_Load7_Size[][4];// Load7.tim table
extern short AK_Load8_Size[][4];// Load8.tim size
extern short AK_Pnl_Size[][4];// Loadpnl.tim size

/*�Z�[�u���[�h����enum*/
// ������Ƌ�������̂�define �ɕύX
// �I�[�g���[�h�p
#define	INITSYS			0	// �����ȏ������ƃt�H���g���[�h
#define	CARDCHECK		1	// �����J�h�����Ă邩�`�F�b�N
#define	NOCARD			2	// �J�[�h������
#define	DATACHECK		3	// �f�[�^���邩�`�F�b�N
#define	NODATA			4	// �f�[�^������
#define	DATABREAKCHECK	5	// �f�[�^���`�F�b�N
#define	BREAK_DATA		6	// �f�[�^���Ă��I�I
#define	DATALOAD		7	// �f�[�^���[�h
#define	LOADCHECK		8	// ���[�h�������H�`�F�b�N
#define	LOADMISS		9	// ���[�h���s
#define	GOTITLE			10	// �����Ȃ�^�C�g����
#define	NEWGAME			11	// ���߂ẴQ�[��
#define	CREATEFILE		12	// �t�@�C���쐬�B�������Ȃ�GOTITLE�ֈړ�
#define	CHECK_CARD		13	// �t�@�C���쐬���̃����J�`�F�b�N
#define	CARD_NO			14	// �h�����Ă��Ȃ������b�Z�[�W�\����ANEWGAME�ֈړ�
#define	FORMATCHECK		15	// �t�H�[�}�b�g����Ă邩�`�F�b�N
#define	UNFORMAT		16	// �t�H�[�}�b�g����Ă��Ȃ��̂Ńt�H�[�}�b�g���邩�����B�L�����Z���̏ꍇ��NEWGAME�ֈړ�
#define	CHECK_FORMAT	17	// ���s�̏ꍇ�̓��b�Z�[�W��NEWGAME�ֈړ��B�����̏ꍇ��CHECK_DATA
#define	SPACECHECK		18	// �󂫗e�ʃ`�F�b�N�B�����ꍇ�̓��b�Z�[�W��NEWGAME�ւ��鎞��CHECK_DATA
#define	CHECK_DATA		19	// �f�[�^�����邩�`�F�b�N�B�����ꍇ�͍쐬�菇�ցA����ꍇ�͏㏑���m�F�̃��b�Z�[�W
#define	OVERWRITE		20	// �f�[�^�����鎞�A�㏑�����ĐV�K�t�@�C���쐬���邩�̊m�F���b�Z�[�W�B�L�����Z����NOCARD�ֈړ�
#define	FILE_CREATE		21	// �V�K�쐬
#define	HEAD_CREATE		211	// �w�b�_�쐬
#define	CREATE_CHECK	22	// �쐬�`�F�b�NOK�Ȃ�GOTITLE�ANG�Ȃ烁�b�Z�[�W��NEWGAME
#define CREATEERROR		23	// �쐬�~�X

// �X�g�[���[���[�h�Z�[�u�p
#define 			SYSINIT				100		// ���낢�돉����
#define 			SAVEFILE			101		// �Z�[�u���邩�����A�L�����Z���̓^�C�g����
#define 			MCCHECK				102		// �h�����Ă邩�`�F�b�N�A�t�H�[�}�b�g���`�F�b�N�ł���
#define 			FORMATOK			103		// �t�H�[�}�b�g���܂����H�����Ȃ痬���
#define 			FORMATMISS			104		// �t�H�[�}�b�g�~�X
#define 			SAVE_FILE_CHECK		105		// �Z�[�u�f�[�^�����邩�̃`�F�b�N�Bopen���Ă݂�
#define 			OVER_WRITE_CHECK	106		// �㏑���m�F
#define 			CARD_SPACE_CHECK	107		// �󂫗e�ʊm�F
#define 			NO_SPACE			108		// �󂫗e�ʖ���
#define 			CREATE_FILE			109		// ���ۂɃZ�[�u
#define 			SAVEMISS			110		// �Z�[�u�~�X�B�J�[�h���ł��g�p
#define 			GO_SEISAN			111		// ���Z��ʂ�
// �ǉ�
#define				CARD_NOTHING		112		// �J�[�h������
#define				RUNFORMAT			113		// ���ۂɃt�H�[�}�b�g
#define				NOWSAVING			114		// ���ۂɃZ�[�u
#define				HEADCREATE			115		// �w�b�_�쐬
#define				FILEOPEN			116		// �t�@�C���I�[�v��

// 2P�ΐ탂�[�h���[�h�p
#define				AI_INIT				1000	// tim�ǂ݂Ƃ�������
#define				AI_CARD_CHECK		1001	// �J�[�h�`�F�b�N
#define				AI_FILE_OPEN		1002	// �t�@�C���I�[�v�����ăf�[�^���邩�`�F�b�N
#define				AI_DATA_LOAD		1003	// �f�[�^���[�h
#define				AI_LOAD_MISS		1004	// ���[�h���s
#define				AI_NO_DATA			1005	// �f�[�^��������
#define				AI_CARD_NO			1006	// �J�[�h��������
#define				AI_CARD_NUKI		1007	// �J�[�h�����ꂿ�������
#define				AI_START_PRN		1008	// �Z�b�g�����灛�������Ă�
#define				AI_UNIT_SELECT		1009	// �Q�o���j�b�g�Z���N�g�փS�[�I�I




// �g���Ă�֐�
extern void Tim2Vram(u_long);// �C���[�W�̎�荞��
extern void InitSpr(int);// �\�����b�Z�[�W�̏�����
extern void Init_Yes_No(void);// �͂��������̂��傫��
extern void Init_New_Or_Replay(void);// ���[�h���邩�V�����n�߂邩�`�F�b�N
extern void AK_Auto_Load(void);// �N�����̃������J�[�h�`�F�b�N
extern void AK_Mess_Sort(void);// ���b�Z�[�W�̕\��
extern void AK_Yes_No_Sort(void);// �͂��������̕\��
extern void AK_New_Or_Load_Sort(void);// �V�����n�߂邩���[�h���邩�̃\�[�g
extern void AK_Pnl_Sort(void);// �I���p�l���̃\�[�g
extern int _calc_total_blocks( int , struct DIRENTRY* dir );

extern void AK_Save_StoryMode(void);// ���R����̂Ƃ��납�炫�����V�i���I�Z�[�u
extern void AK_Save_Mode_Init_Tim(void);// �Ă��Ɓ[���傫��
extern void AK_Save_Mode_Init_2(void);// �J�[�h�����Ȃ��ł�
extern void AK_Save_Mode_Init_3(void);// �Z�[�u����

//extern void AK_MEM_DATA_INIT(int no);// �f�[�^������ 23 or 24 ���͂ŃX�^�[�g���ύX

extern short AK_Select_Load_Or_New(void);// �J�[�\���Z���N�g �O�ŏ�I���P�ŉ��I��

extern void Red_2P_Unit_Load(void);// 2P�ΐ탂�[�h�p�̃��[�h�֐�





#endif