/*	ͷ�ļ�	*/
/*	pcb.h	*/

//#ifdef PCB_H
//#define PCB_H

typedef struct PCB 
{
	char *ID;			//����id
	double arrivalTime; //���̵���ʱ��
	double burstTime;	//��������ʱ��
	int priority;		//�������ȼ�
}PCB;


/**
  *�ȵ��ȷ������first-come,first-served
  */
void FCFS();

/**
  *�����ҵ���ȵ���shortest-job-first
  */
void SJF();

/**
  *���ʣ��ʱ�����ȵ���shortest-remaining-time-first
  */
void SRTF();

/**
  *���ȼ�����priority
  */
void Priority();

/**
  *�ϻ�aging
  */
void Aging();

/**
  *��ת������round-robin
  */
void RoundRobin();

/**
  *�༶���е���multilevel-queue
  */
void MultilevelQueue();

/**
  *�༶�������е���multilevel-feedback-queue
  */
void MultilevelFeedbackQueue();

//#endif