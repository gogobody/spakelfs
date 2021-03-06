﻿
#ifndef __NGX_MEMORY_H__
#define __NGX_MEMORY_H__

#include <stddef.h>   
//memory management 
class CMemory 
{
private:
	CMemory() {}   

public:
	~CMemory(){};

private:
	static CMemory *m_instance;

public:	
	static CMemory* GetInstance()  
	{			
		if(m_instance == NULL)
		{
			 
			if(m_instance == NULL)
			{				
				m_instance = new CMemory();  
				static CGarhuishou cl; 
			}
			 
		}
		return m_instance;
	}	
	class CGarhuishou 
	{
	public:				
		~CGarhuishou()
		{
			if (CMemory::m_instance)
			{						
				delete CMemory::m_instance;  
				CMemory::m_instance = NULL;				
			}
		}
	};
	 

public:
	void *AllocMemory(int memCount,bool ifmemset);
	void FreeMemory(void *point);
	
};

#endif
