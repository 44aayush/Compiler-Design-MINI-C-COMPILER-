#include<stdio.h>
//#include<stido.h>		// error handling

struct outer
{
	float mem_arr[10][2],mem_flt;		// array declaration, multiple declarations seperated by comma
	int mem_int;
	//  int err_assign=1;			//error as cant assign in structure
}gso1,gso2;

struct inner
{
	int inner_mem;
	struct outer nested_struct;		// nested structure implementation

}inarr[10],is;		// multiple global declaration, including array

float global_var=30;				// global variables

int main()
{

	int b= 5,a[1][2][3],c;		//all combinations of declaration
	
	int d;
	struct inner local_decl;	// local declaration of structure with nested structure member

	lsmi = 1;
	lsmi++;     //use of unary operator , value should be 2

	b += 1;					// use of += operator	so value will be 16;
	c = 2*b+1; 
	
	//arithmetic operatons
	
	d = b + c;
	is.inner_mem = lsmi * d;   // type mismatch, warning 

	gso1.mem_flt = 100.12; 	// global structure member asignment
	
	
	switch(b)
	{
		case 1:	c = b + d; c = b - d; break;
		case 2:	switch(a)				//nested switch
			{
				case 1: c = 2;break;
				case 5:	c +=2;break;
				case 4: c-=2;break;
				default: c--;break;
			}
			break;
		default: c++;

	}
	

}


