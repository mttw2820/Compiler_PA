main:
	BeginFunc
L0:
	_t0	= x	< 4
	IFZ _t0 Goto L1
	_t1	= x	< 0
	IFZ _t1 Goto L2
	Goto L1
L2:
	_t2	= x	!= 2
	IFZ _t2 Goto L4
	_t3	= x	== 1
	_t4	= x
	x	= x	+ 1
	Goto L3
L4:
	x	= x	+ 2
	_t5	= x
	Goto L3
	_t6	= x
	x	= x	- 1
L3:
	x	= x	+ y
	_t7	= x
	Goto L0
L1:
	_t8	= n
	n	= n	- 1
	PushParam _t8
	m	= m	+ 1
	PushParam m
	PushParam k
	PushParam z
	PushParam y
	PushParam x
	_t9	= LCall printf
	PopParam 24
	k	= 1.000000
	_t10	= k
	_t11	= w	+ v
	Return _t11
	EndFunc
