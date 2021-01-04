add2:
	BeginFunc
	n	= n	+ x
	_t0	= n
	_t1	= n	* 2
	Return _t1
	EndFunc
foo:
	BeginFunc
	_t2	= a	> b
	IFZ _t2 Goto L0
	_t3	= a	- b
	d	= _t3
	_t4	= d
	Goto L1
L0:
	_t5	= b	- a
	d	= _t5
	_t6	= d
L1:
	a	= 2
	_t7	= a
	_t8	= z	* 3
	_t9	= y	+ _t8
	PushParam _t9
	PushParam a
	_t10	= LCall add2
	PopParam 8
	b	= _t10
	_t11	= b
	Return _t11
	EndFunc
bar:
	BeginFunc
	PushParam 2
	PushParam 6
	PushParam 2020
	_t12	= LCall foo
	PopParam 12
	EndFunc
