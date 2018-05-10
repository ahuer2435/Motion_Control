#ifndef _PREDEFINITION_HEADER
#define _PREDEFINITION_HEADER

#define DESKTOP_VERSION 0                           //�����
#define EXOSUIT_VERSION 1                           //������

#define ENCODE_1MM 325								//1mm��Ӧ�ĵ�λ�Ƽ���  325
#define SELF_CHECK_ADJUST_MM 30							//�Լ��Ӧ��������λ�� mm
#define MOTION_ADJUST_MM 10									//����Ӧ��Ӧ��������λ�� mm


#define WHERE_MOTION EXOSUIT_VERSION

#if(WHERE_MOTION == EXOSUIT_VERSION)
#define SELF_CHECK_POT_VALUE 2.5
#define ENCODER_DEFUALT_POSITON 30000
#define MOTOR_ENCODER_DIRECTION 1
#define POT_VALUE_LONG 	1.55						//�����������ʱ��λ�Ƶ�����
#define POT_VALUE_SHORT 3.05						//�������������ʱ��λ�Ƶ�����
#endif

#if(WHERE_MOTION == DESKTOP_VERSION)
#define SELF_CHECK_POT_VALUE 0.3					//�Լ쵽���λ��
#define ENCODER_DEFUALT_POSITON 35000				//�Լ����õı�����ȡֵ
#endif

#define VELOCITY_MODE_MAX_SPEED 1500000			
#define VELOCITY_MODE_MAX_ACC 2000000
#define SELF_CHECK_FORCE_VALUE 200					//�Լ��Ӧ��Ԥ����ֵ

#define PROTECTION_FORCE_VALUE 2000                 //����200N�Զ�����
#define PROTECTION_POT_VALUE_H 3.15                  //��λ�Ʊ������3.2
#define PROTECTION_POT_VALUE_L 0.3                  //��λ�Ʊ�����С0.01

#define PULL_FIX_POSITION 0                         //�̶�λ��ģʽ
#define PULL_FORCE_TORQUE 1                         //���ػ�ģʽ
#define PULL_FORCE_TORQUE_TEST 2                    //���ػ���������
#define STUDY_WALKING_POSITON 3						//����������λ�ñ仯

#define GAIT_B_MODE PULL_FORCE_TORQUE

#define DEBUG 0                                     //������
#define REAL 1

#define RUN_MOTION DEBUG

#define MOTOR_EN_TRUE 1
#define MOTOR_EN_FALSE 0

#define PULL_RATIO_H 1
#define PULL_RATIO_M 0.83
#define PULL_RATIO_L 0.67

#define SYSTEM_OFF 0
#define SYSTEM_ON 1
#define SYSTEM_CLIENT_TEST SYSTEM_OFF				//�Ƿ����ϵͳģ���ͨѶ

#define CHANGE_PRELOAD_POSITION 1   				//0 ������  1 ����    ����Ӧ����Ԥ����λ��

#define MOTION_MODE_GAIT 1
#define MOTION_MODE_FIXED 2
#define MOTION_MODE_RELAX 3


#endif