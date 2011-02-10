#include <windows.h>
#include <stdio.h>

int PrintUse(void);
int ValidateArgs(int nArgs,char *Args[]);

int main(int argc,char* argv[])
{
	if(!ValidateArgs(argc,argv))
	{
		PrintUse();
		return 0;
	}
    /* Zero Guay xD*/
	//TODO
}

int PrintUse(void)
{
	printf("%s%s%s%s%s%s%s","\nAddPeSection, simple tool to add sections to a PE file.\n",
			"Use:\n\n",
			"addpesection -n [number] (-name [sectionname] -size [sectionsize]) -flags [RWX] (-v (verbose))\n\n",
			"n: Number of sections to add.\n",
			"name: Name of new section(s) (default: '.new[n]').\n",
			"size: Section(s) size (default: the smallest).\n",
			"flags: R (Read) W (Write) X (Execute).\n");
	return 0;
}

int ValidateArgs(int nArgs,char *Args[])
{
	if(nArgs<5) return 0;

	char* lstArgs[]={"-n","-name","-size","-flags","-v"};

	for(int i=1;i<nArgs;i+=2)
	{
		int flag=0;
		for(int n=0;n<5;n++)
		{
			if(!lstrcmpA(Args[i],lstArgs[n]))
			{
				flag=1;
			}
		}
		if(!flag) return 0;
	}
	return 1;
}
