long int decimalToBinary(int decimal_number)
{
	/*
	* STUDENT ANSWER
	*/	
	long int binary=0;
	static long int i=1;
	if(decimal_number!=0){
	    int so_du=decimal_number%2;
	      if(so_du==1)binary=binary+so_du*i;
	      i*=10;
	    decimal_number=decimal_number/2;
	    binary+=decimalToBinary(decimal_number);
	}
	return binary;
}