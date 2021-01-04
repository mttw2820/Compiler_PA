foo:
	BeginFunc
	s	= 0
	_t0	= s
	i	= 0
	_t1	= i
L0:
	_t2	= i	< 10
	IFZ _t2 Goto L1
	j	= 0
	_t3	= j
L2:
	IFZ 1 Goto L3
	_t4	= i	* 4
	_t5	= a	+ _t4
	_t6	= *(_t5)
	_t7	= j	* 4
	_t8	= b	+ _t7
	_t9	= *(_t8)
	_t10	= _t6	* _t9
	s	= s	+ _t10
	_t11	= s
	j	= j	+ 1
	_t12	= j	== 10
	IFZ _t12 Goto L4
	Goto L3
L4:
	Goto L2
L3:
	_t13	= i	* 4
	_t14	= a	+ _t13
	_t15	= *(_t14)
	_t16	= _t15	== 0
	IFZ _t16 Goto L5
	Goto L1
L5:
	_t17	= i
	i	= i	+ 1
	Goto L0
L1:
	Return s
	EndFunc
main:
	BeginFunc
	i	= 0
	_t18	= i
L6:
	_t19	= i	< 10
	IFZ _t19 Goto L7
	_t20	= i	* 4
	_t21	= x	+ _t20
	_t22	= 2	* i
	_t23	= _t22	- 1
	*(_t21)	= _t23
	_t24	= *(_t21)
	_t25	= i	* 4
	_t26	= y	+ _t25
	_t27	= i	* 4
	_t28	= x	+ _t27
	_t29	= *(_t28)
	*(_t26)	= _t29
	_t30	= *(_t26)
	_t31	= i	* 4
	_t32	= y	+ _t31
	_t33	= i	* 4
	_t34	= y	+ _t33
	_t35	= *(_t34)
	_t36	= *(_t32)
	_t37	 = _t36	* _t35
	*(_t32)	 = _t37
	_t38	 = *(_t32)
	_t39	= i
	i	= i	+ 1
	Goto L6
L7:
	PushParam y
	PushParam x
	_t40	= LCall foo
	PopParam 8
	PushParam _t40
	_t41	= LCall print
	PopParam 4
	Return 0
	EndFunc
