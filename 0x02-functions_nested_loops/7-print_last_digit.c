int print_last_digit(int)

{
	if(i/10!=0)
    {
        putchar(i%10);
        lastd((i-i%10)/10);
    }
    else if((i/10==0) && (i%10!=0) && (i>0))
        putchar(i%10);
    else if((i/10==0) && (i%10!=0) && (i<=0))
        putchar(-i%10);

}

