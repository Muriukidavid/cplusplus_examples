/*
 * dff.h
 *
 *  Created on: Nov 6, 2015
 *      Author: chelmis
 */

#ifndef DFF_H_
#define DFF_H_

#include"systemc.h"

//declaring all the dffs herer they are 8 in number. Each output of one dff is an input to the next hence the similarity in the naming of the ports. The last outputs are those of dff8 hence the need to have the final Qnot at that point.
SC_MODULE (dff)
{
	sc_in<bool> D, dclk;
	sc_out<bool> Q;

	SC_CTOR (dff)
	{
		SC_METHOD(decode);
		sensitive<<dclk.pos();
		dont_initialize();
	}

	~dff(){}

	void decode(void)
	{
		Q = D.read();
		//Qn =!(D.read()) ;
	}
};
SC_MODULE (dff2)  //2nd dff 
{
	sc_in<bool> Q,dclk2;  //input of this dff is the output Q of dff 1.
	sc_out<bool> Q2;

	SC_CTOR (dff2)
	{
		SC_METHOD(decode);
		sensitive<<dclk2.pos();
		dont_initialize();
	}

	~dff2(){}

	void decode(void)
	{
		Q2 = Q.read();
		//Qn2 =!(Q.read()) ;
	}
};

SC_MODULE (dff3)  //3rd dff
{
	sc_in<bool> Q2,dclk3;
	sc_out<bool> Q3;

	SC_CTOR (dff3)
	{
		SC_METHOD(decode);
		sensitive<<dclk3.pos();
		dont_initialize();
	}

	~dff3(){}

	void decode(void)
	{
		Q3 = Q2.read();
		//Qn3 =!(Q.read()) ;
	}
};
SC_MODULE (dff4) // dff 4
{
	sc_in<bool> Q3,dclk4;
	sc_out<bool> Q4;

	SC_CTOR (dff4)
	{
		SC_METHOD(decode);
		sensitive<<dclk4.pos();
		dont_initialize();
	}

	~dff4(){}

	void decode(void)
	{
		Q4 = Q3.read();
		//Qn4 =!(Q.read()) ;
	}
};
SC_MODULE (dff5) // dff 5
{
	sc_in<bool> Q4,dclk5;
	sc_out<bool> Q5;

	SC_CTOR (dff5)
	{
		SC_METHOD(decode);
		sensitive<<dclk5.pos();
		dont_initialize();
	}

	~dff5(){}

	void decode(void)
	{
		Q5 = Q4.read();
		//Qn5 =!(Q.read()) ;
	}
};
SC_MODULE (dff6)  // dff6
{
	sc_in<bool> Q5,dclk6;
	sc_out<bool> Q6;

	SC_CTOR (dff6)
	{
		SC_METHOD(decode);
		sensitive<<dclk6.pos();
		dont_initialize();
	}

	~dff6(){}

	void decode(void)
	{
		Q6 = Q5.read();
		//Qn6 =!(Q.read()) ;
	}
};
SC_MODULE (dff7)  // dff 7
{
	sc_in<bool> Q6,dclk7;
	sc_out<bool> Q7;

	SC_CTOR (dff7)
	{
		SC_METHOD(decode);
		sensitive<<dclk7.pos();
		dont_initialize();
	}

	~dff7(){}

	void decode(void)
	{
		Q7 = Q6.read();
		//Qn7 =!(Q.read()) ;
	}
};
SC_MODULE (dff8)  // dff8
{
	sc_in<bool> Q7,dclk8;
	sc_out<bool> Q8,Qn8;

	SC_CTOR (dff8)
	{
		SC_METHOD(decode);
		sensitive<<dclk8.pos();
		dont_initialize();
	}

	~dff8(){}

	void decode(void)
	{
		Q8 = Q7.read();
		Qn8 =!(Q7.read()) ;
	}
};
#endif /* DFF_H_ */

