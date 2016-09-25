#define Signed   long           /* xxx temporary fix */

#define Unsigned unsigned long  /* xxx temporary fix */

#define PyMember_GetOne PyPyMember_GetOne
PyAPI_FUNC(PyObject *) PyPyMember_GetOne(const char *arg0, PyMemberDef *arg1);
#define PyMember_SetOne PyPyMember_SetOne
PyAPI_FUNC(int) PyPyMember_SetOne(char *arg0, PyMemberDef *arg1, PyObject *arg2);
#undef Signed    /* xxx temporary fix */

#undef Unsigned  /* xxx temporary fix */
