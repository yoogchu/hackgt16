#define Signed   long           /* xxx temporary fix */

#define Unsigned unsigned long  /* xxx temporary fix */

#define PyUFunc_FromFuncAndData PyPyUFunc_FromFuncAndData
PyAPI_FUNC(PyObject *) PyPyUFunc_FromFuncAndData(void (***arg0)(char **, Signed *, Signed *, void *), void *arg1, char *arg2, Py_ssize_t arg3, Py_ssize_t arg4, Py_ssize_t arg5, Py_ssize_t arg6, char *arg7, char *arg8, Py_ssize_t arg9);
#define PyUFunc_FromFuncAndDataAndSignature PyPyUFunc_FromFuncAndDataAndSignature
PyAPI_FUNC(PyObject *) PyPyUFunc_FromFuncAndDataAndSignature(void (***arg0)(char **, Signed *, Signed *, void *), void *arg1, char *arg2, Py_ssize_t arg3, Py_ssize_t arg4, Py_ssize_t arg5, Py_ssize_t arg6, char *arg7, char *arg8, Py_ssize_t arg9, char *arg10);
#define _PyArray_Check _PyPyArray_Check
PyAPI_FUNC(int) _PyPyArray_Check(PyObject *arg0);
#define _PyArray_CheckExact _PyPyArray_CheckExact
PyAPI_FUNC(int) _PyPyArray_CheckExact(PyObject *arg0);
#define _PyArray_DATA _PyPyArray_DATA
PyAPI_FUNC(void *) _PyPyArray_DATA(PyObject *arg0);
#define _PyArray_DIM _PyPyArray_DIM
PyAPI_FUNC(Py_ssize_t) _PyPyArray_DIM(PyObject *arg0, Py_ssize_t arg1);
#define _PyArray_DescrFromType _PyPyArray_DescrFromType
PyAPI_FUNC(PyObject *) _PyPyArray_DescrFromType(Py_ssize_t arg0);
#define _PyArray_FLAGS _PyPyArray_FLAGS
PyAPI_FUNC(int) _PyPyArray_FLAGS(PyObject *arg0);
#define _PyArray_FromAny _PyPyArray_FromAny
PyAPI_FUNC(PyObject *) _PyPyArray_FromAny(PyObject *arg0, PyObject *arg1, Py_ssize_t arg2, Py_ssize_t arg3, Py_ssize_t arg4, void *arg5);
#define _PyArray_FromObject _PyPyArray_FromObject
PyAPI_FUNC(PyObject *) _PyPyArray_FromObject(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2, Py_ssize_t arg3);
#define _PyArray_ITEMSIZE _PyPyArray_ITEMSIZE
PyAPI_FUNC(int) _PyPyArray_ITEMSIZE(PyObject *arg0);
#define _PyArray_NBYTES _PyPyArray_NBYTES
PyAPI_FUNC(Py_ssize_t) _PyPyArray_NBYTES(PyObject *arg0);
#define _PyArray_NDIM _PyPyArray_NDIM
PyAPI_FUNC(int) _PyPyArray_NDIM(PyObject *arg0);
#define _PyArray_New _PyPyArray_New
PyAPI_FUNC(PyObject *) _PyPyArray_New(void *arg0, Py_ssize_t arg1, Signed *arg2, Py_ssize_t arg3, Signed *arg4, void *arg5, Py_ssize_t arg6, Py_ssize_t arg7, PyObject *arg8);
#define _PyArray_SIZE _PyPyArray_SIZE
PyAPI_FUNC(Py_ssize_t) _PyPyArray_SIZE(PyObject *arg0);
#define _PyArray_STRIDE _PyPyArray_STRIDE
PyAPI_FUNC(Py_ssize_t) _PyPyArray_STRIDE(PyObject *arg0, Py_ssize_t arg1);
#define _PyArray_SimpleNew _PyPyArray_SimpleNew
PyAPI_FUNC(PyObject *) _PyPyArray_SimpleNew(Py_ssize_t arg0, Signed *arg1, Py_ssize_t arg2);
#define _PyArray_SimpleNewFromData _PyPyArray_SimpleNewFromData
PyAPI_FUNC(PyObject *) _PyPyArray_SimpleNewFromData(Py_ssize_t arg0, Signed *arg1, Py_ssize_t arg2, void *arg3);
#define _PyArray_SimpleNewFromDataOwning _PyPyArray_SimpleNewFromDataOwning
PyAPI_FUNC(PyObject *) _PyPyArray_SimpleNewFromDataOwning(Py_ssize_t arg0, Signed *arg1, Py_ssize_t arg2, void *arg3);
#define _PyArray_TYPE _PyPyArray_TYPE
PyAPI_FUNC(int) _PyPyArray_TYPE(PyObject *arg0);
#undef Signed    /* xxx temporary fix */

#undef Unsigned  /* xxx temporary fix */
