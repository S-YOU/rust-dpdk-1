#include "macro_wrapper.h"

int macro_CPU_EQUAL(cpu_set_t * set1, cpu_set_t * set2)
{
	return CPU_EQUAL(set1, set2);
}

void macro_CPU_ZERO(cpu_set_t * set)
{
	CPU_ZERO(set);
}

void macro_CPU_SET(int cpu, cpu_set_t * set)
{
	CPU_SET(cpu, set);
}

void macro_CPU_CLR(int cpu, cpu_set_t * set)
{
	CPU_CLR(cpu, set);
}

int macro_CPU_ISSET(int cpu, cpu_set_t * set)
{
	return CPU_ISSET(cpu, set);
}

int macro_CPU_COUNT(cpu_set_t * set)
{
	return CPU_COUNT(set);
}

void macro_CPU_AND(cpu_set_t * destset, cpu_set_t * srcset1, cpu_set_t * srcset2)
{
	CPU_AND(destset, srcset1, srcset2);
}

void macro_CPU_OR(cpu_set_t * destset, cpu_set_t * srcset1, cpu_set_t * srcset2)
{
	CPU_OR(destset, srcset1, srcset2);
}

void macro_CPU_XOR(cpu_set_t * destset, cpu_set_t * srcset1, cpu_set_t * srcset2)
{
	CPU_XOR(destset, srcset1, srcset2);
}