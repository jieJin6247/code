/*	头文件	*/
/*	pcb.h	*/

//#ifdef PCB_H
//#define PCB_H

typedef struct PCB 
{
	char *ID;			//进程id
	double arrivalTime; //进程到达时间
	double burstTime;	//进程运行时间
	int priority;		//进程优先级
}PCB;


/**
  *先到先服务调度first-come,first-served
  */
void FCFS();

/**
  *最短作业优先调度shortest-job-first
  */
void SJF();

/**
  *最短剩余时间优先调度shortest-remaining-time-first
  */
void SRTF();

/**
  *优先级调度priority
  */
void Priority();

/**
  *老化aging
  */
void Aging();

/**
  *轮转法调度round-robin
  */
void RoundRobin();

/**
  *多级队列调度multilevel-queue
  */
void MultilevelQueue();

/**
  *多级反馈队列调度multilevel-feedback-queue
  */
void MultilevelFeedbackQueue();

//#endif