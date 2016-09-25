#define Signed   long           /* xxx temporary fix */

#define Unsigned unsigned long  /* xxx temporary fix */

typedef struct { PyObject_HEAD } PyMethodObject;
typedef struct { PyObject_HEAD } PyListObject;
typedef struct { PyObject_HEAD } PyLongObject;
typedef struct { PyObject_HEAD } PyDictObject;
typedef struct { PyObject_HEAD } PyClassObject;
#define PyBool_Check PyPyBool_Check
PyAPI_FUNC(int) PyPyBool_Check(PyObject *arg0);
#define PyBool_CheckExact PyPyBool_CheckExact
PyAPI_FUNC(int) PyPyBool_CheckExact(PyObject *arg0);
#define PyBool_FromLong PyPyBool_FromLong
PyAPI_FUNC(PyObject *) PyPyBool_FromLong(Signed arg0);
#define PyBuffer_FillInfo PyPyBuffer_FillInfo
PyAPI_FUNC(int) PyPyBuffer_FillInfo(Py_buffer *arg0, PyObject *arg1, void *arg2, Py_ssize_t arg3, Signed arg4, Signed arg5);
#define PyBuffer_IsContiguous PyPyBuffer_IsContiguous
PyAPI_FUNC(int) PyPyBuffer_IsContiguous(Py_buffer *arg0, char arg1);
#define PyBuffer_Release PyPyBuffer_Release
PyAPI_FUNC(void) PyPyBuffer_Release(Py_buffer *arg0);
#define PyCFunction_Check PyPyCFunction_Check
PyAPI_FUNC(int) PyPyCFunction_Check(PyObject *arg0);
#define PyCFunction_CheckExact PyPyCFunction_CheckExact
PyAPI_FUNC(int) PyPyCFunction_CheckExact(PyObject *arg0);
#define PyCFunction_GetFunction PyPyCFunction_GetFunction
PyAPI_FUNC(PyCFunction) PyPyCFunction_GetFunction(PyObject *arg0);
#define PyCFunction_NewEx PyPyCFunction_NewEx
PyAPI_FUNC(PyObject *) PyPyCFunction_NewEx(PyMethodDef *arg0, PyObject *arg1, PyObject *arg2);
#define PyCallIter_New PyPyCallIter_New
PyAPI_FUNC(PyObject *) PyPyCallIter_New(PyObject *arg0, PyObject *arg1);
#define PyCallable_Check PyPyCallable_Check
PyAPI_FUNC(int) PyPyCallable_Check(PyObject *arg0);
#define PyClassMethod_New PyPyClassMethod_New
PyAPI_FUNC(PyObject *) PyPyClassMethod_New(PyObject *arg0);
#define PyClass_Check PyPyClass_Check
PyAPI_FUNC(int) PyPyClass_Check(PyObject *arg0);
#define PyClass_CheckExact PyPyClass_CheckExact
PyAPI_FUNC(int) PyPyClass_CheckExact(PyObject *arg0);
#define PyClass_New PyPyClass_New
PyAPI_FUNC(PyObject *) PyPyClass_New(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyCode_Check PyPyCode_Check
PyAPI_FUNC(int) PyPyCode_Check(PyObject *arg0);
#define PyCode_CheckExact PyPyCode_CheckExact
PyAPI_FUNC(int) PyPyCode_CheckExact(PyObject *arg0);
#define PyCode_GetNumFree PyPyCode_GetNumFree
PyAPI_FUNC(Py_ssize_t) PyPyCode_GetNumFree(PyCodeObject *arg0);
#define PyCode_New PyPyCode_New
PyAPI_FUNC(PyCodeObject *) PyPyCode_New(int arg0, int arg1, int arg2, int arg3, PyObject *arg4, PyObject *arg5, PyObject *arg6, PyObject *arg7, PyObject *arg8, PyObject *arg9, PyObject *arg10, PyObject *arg11, int arg12, PyObject *arg13);
#define PyCode_NewEmpty PyPyCode_NewEmpty
PyAPI_FUNC(PyCodeObject *) PyPyCode_NewEmpty(const char *arg0, const char *arg1, int arg2);
#define PyCodec_IncrementalDecoder PyPyCodec_IncrementalDecoder
PyAPI_FUNC(PyObject *) PyPyCodec_IncrementalDecoder(const char *arg0, const char *arg1);
#define PyCodec_IncrementalEncoder PyPyCodec_IncrementalEncoder
PyAPI_FUNC(PyObject *) PyPyCodec_IncrementalEncoder(const char *arg0, const char *arg1);
#define PyComplex_Check PyPyComplex_Check
PyAPI_FUNC(int) PyPyComplex_Check(PyObject *arg0);
#define PyComplex_CheckExact PyPyComplex_CheckExact
PyAPI_FUNC(int) PyPyComplex_CheckExact(PyObject *arg0);
#define PyComplex_FromDoubles PyPyComplex_FromDoubles
PyAPI_FUNC(PyObject *) PyPyComplex_FromDoubles(double arg0, double arg1);
#define PyComplex_ImagAsDouble PyPyComplex_ImagAsDouble
PyAPI_FUNC(double) PyPyComplex_ImagAsDouble(PyObject *arg0);
#define PyComplex_RealAsDouble PyPyComplex_RealAsDouble
PyAPI_FUNC(double) PyPyComplex_RealAsDouble(PyObject *arg0);
#define PyDateTime_Check PyPyDateTime_Check
PyAPI_FUNC(int) PyPyDateTime_Check(PyObject *arg0);
#define PyDateTime_CheckExact PyPyDateTime_CheckExact
PyAPI_FUNC(int) PyPyDateTime_CheckExact(PyObject *arg0);
#define PyDateTime_DATE_GET_HOUR PyPyDateTime_DATE_GET_HOUR
PyAPI_FUNC(int) PyPyDateTime_DATE_GET_HOUR(PyObject *arg0);
#define PyDateTime_DATE_GET_MICROSECOND PyPyDateTime_DATE_GET_MICROSECOND
PyAPI_FUNC(int) PyPyDateTime_DATE_GET_MICROSECOND(PyObject *arg0);
#define PyDateTime_DATE_GET_MINUTE PyPyDateTime_DATE_GET_MINUTE
PyAPI_FUNC(int) PyPyDateTime_DATE_GET_MINUTE(PyObject *arg0);
#define PyDateTime_DATE_GET_SECOND PyPyDateTime_DATE_GET_SECOND
PyAPI_FUNC(int) PyPyDateTime_DATE_GET_SECOND(PyObject *arg0);
#define PyDateTime_DELTA_GET_DAYS PyPyDateTime_DELTA_GET_DAYS
PyAPI_FUNC(int) PyPyDateTime_DELTA_GET_DAYS(PyDateTime_Delta *arg0);
#define PyDateTime_DELTA_GET_MICROSECONDS PyPyDateTime_DELTA_GET_MICROSECONDS
PyAPI_FUNC(int) PyPyDateTime_DELTA_GET_MICROSECONDS(PyDateTime_Delta *arg0);
#define PyDateTime_DELTA_GET_SECONDS PyPyDateTime_DELTA_GET_SECONDS
PyAPI_FUNC(int) PyPyDateTime_DELTA_GET_SECONDS(PyDateTime_Delta *arg0);
#define PyDateTime_FromDateAndTime PyPyDateTime_FromDateAndTime
PyAPI_FUNC(PyObject *) PyPyDateTime_FromDateAndTime(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#define PyDateTime_FromTimestamp PyPyDateTime_FromTimestamp
PyAPI_FUNC(PyObject *) PyPyDateTime_FromTimestamp(PyObject *arg0);
#define PyDateTime_GET_DAY PyPyDateTime_GET_DAY
PyAPI_FUNC(int) PyPyDateTime_GET_DAY(PyObject *arg0);
#define PyDateTime_GET_MONTH PyPyDateTime_GET_MONTH
PyAPI_FUNC(int) PyPyDateTime_GET_MONTH(PyObject *arg0);
#define PyDateTime_GET_YEAR PyPyDateTime_GET_YEAR
PyAPI_FUNC(int) PyPyDateTime_GET_YEAR(PyObject *arg0);
#define PyDateTime_TIME_GET_HOUR PyPyDateTime_TIME_GET_HOUR
PyAPI_FUNC(int) PyPyDateTime_TIME_GET_HOUR(PyObject *arg0);
#define PyDateTime_TIME_GET_MICROSECOND PyPyDateTime_TIME_GET_MICROSECOND
PyAPI_FUNC(int) PyPyDateTime_TIME_GET_MICROSECOND(PyObject *arg0);
#define PyDateTime_TIME_GET_MINUTE PyPyDateTime_TIME_GET_MINUTE
PyAPI_FUNC(int) PyPyDateTime_TIME_GET_MINUTE(PyObject *arg0);
#define PyDateTime_TIME_GET_SECOND PyPyDateTime_TIME_GET_SECOND
PyAPI_FUNC(int) PyPyDateTime_TIME_GET_SECOND(PyObject *arg0);
#define PyDate_Check PyPyDate_Check
PyAPI_FUNC(int) PyPyDate_Check(PyObject *arg0);
#define PyDate_CheckExact PyPyDate_CheckExact
PyAPI_FUNC(int) PyPyDate_CheckExact(PyObject *arg0);
#define PyDate_FromDate PyPyDate_FromDate
PyAPI_FUNC(PyObject *) PyPyDate_FromDate(int arg0, int arg1, int arg2);
#define PyDate_FromTimestamp PyPyDate_FromTimestamp
PyAPI_FUNC(PyObject *) PyPyDate_FromTimestamp(PyObject *arg0);
#define PyDelta_Check PyPyDelta_Check
PyAPI_FUNC(int) PyPyDelta_Check(PyObject *arg0);
#define PyDelta_CheckExact PyPyDelta_CheckExact
PyAPI_FUNC(int) PyPyDelta_CheckExact(PyObject *arg0);
#define PyDelta_FromDSU PyPyDelta_FromDSU
PyAPI_FUNC(PyObject *) PyPyDelta_FromDSU(int arg0, int arg1, int arg2);
#define PyDescr_NewClassMethod PyPyDescr_NewClassMethod
PyAPI_FUNC(PyObject *) PyPyDescr_NewClassMethod(PyObject *arg0, PyMethodDef *arg1);
#define PyDescr_NewMethod PyPyDescr_NewMethod
PyAPI_FUNC(PyObject *) PyPyDescr_NewMethod(PyObject *arg0, PyMethodDef *arg1);
#define PyDictProxy_New PyPyDictProxy_New
PyAPI_FUNC(PyObject *) PyPyDictProxy_New(PyObject *arg0);
#define PyDict_Check PyPyDict_Check
PyAPI_FUNC(int) PyPyDict_Check(PyObject *arg0);
#define PyDict_CheckExact PyPyDict_CheckExact
PyAPI_FUNC(int) PyPyDict_CheckExact(PyObject *arg0);
#define PyDict_Clear PyPyDict_Clear
PyAPI_FUNC(void) PyPyDict_Clear(PyObject *arg0);
#define PyDict_Contains PyPyDict_Contains
PyAPI_FUNC(int) PyPyDict_Contains(PyObject *arg0, PyObject *arg1);
#define PyDict_Copy PyPyDict_Copy
PyAPI_FUNC(PyObject *) PyPyDict_Copy(PyObject *arg0);
#define PyDict_DelItem PyPyDict_DelItem
PyAPI_FUNC(int) PyPyDict_DelItem(PyObject *arg0, PyObject *arg1);
#define PyDict_DelItemString PyPyDict_DelItemString
PyAPI_FUNC(int) PyPyDict_DelItemString(PyObject *arg0, const char *arg1);
#define PyDict_GetItem PyPyDict_GetItem
PyAPI_FUNC(PyObject *) PyPyDict_GetItem(PyObject *arg0, PyObject *arg1);
#define PyDict_GetItemString PyPyDict_GetItemString
PyAPI_FUNC(PyObject *) PyPyDict_GetItemString(PyObject *arg0, const char *arg1);
#define PyDict_Items PyPyDict_Items
PyAPI_FUNC(PyObject *) PyPyDict_Items(PyObject *arg0);
#define PyDict_Keys PyPyDict_Keys
PyAPI_FUNC(PyObject *) PyPyDict_Keys(PyObject *arg0);
#define PyDict_New PyPyDict_New
PyAPI_FUNC(PyObject *) PyPyDict_New(void);
#define PyDict_Next PyPyDict_Next
PyAPI_FUNC(int) PyPyDict_Next(PyObject *arg0, Py_ssize_t *arg1, PyObject **arg2, PyObject **arg3);
#define PyDict_SetItem PyPyDict_SetItem
PyAPI_FUNC(int) PyPyDict_SetItem(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyDict_SetItemString PyPyDict_SetItemString
PyAPI_FUNC(int) PyPyDict_SetItemString(PyObject *arg0, const char *arg1, PyObject *arg2);
#define PyDict_Size PyPyDict_Size
PyAPI_FUNC(Py_ssize_t) PyPyDict_Size(PyObject *arg0);
#define PyDict_Update PyPyDict_Update
PyAPI_FUNC(int) PyPyDict_Update(PyObject *arg0, PyObject *arg1);
#define PyDict_Values PyPyDict_Values
PyAPI_FUNC(PyObject *) PyPyDict_Values(PyObject *arg0);
#define PyErr_BadArgument PyPyErr_BadArgument
PyAPI_FUNC(int) PyPyErr_BadArgument(void);
#define PyErr_BadInternalCall PyPyErr_BadInternalCall
PyAPI_FUNC(void) PyPyErr_BadInternalCall(void);
#define PyErr_CheckSignals PyPyErr_CheckSignals
PyAPI_FUNC(int) PyPyErr_CheckSignals(void);
#define PyErr_Clear PyPyErr_Clear
PyAPI_FUNC(void) PyPyErr_Clear(void);
#define PyErr_Display PyPyErr_Display
PyAPI_FUNC(void) PyPyErr_Display(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyErr_ExceptionMatches PyPyErr_ExceptionMatches
PyAPI_FUNC(int) PyPyErr_ExceptionMatches(PyObject *arg0);
#define PyErr_Fetch PyPyErr_Fetch
PyAPI_FUNC(void) PyPyErr_Fetch(PyObject **arg0, PyObject **arg1, PyObject **arg2);
#define PyErr_GetExcInfo PyPyErr_GetExcInfo
PyAPI_FUNC(void) PyPyErr_GetExcInfo(PyObject **arg0, PyObject **arg1, PyObject **arg2);
#define PyErr_GivenExceptionMatches PyPyErr_GivenExceptionMatches
PyAPI_FUNC(int) PyPyErr_GivenExceptionMatches(PyObject *arg0, PyObject *arg1);
#define PyErr_NoMemory PyPyErr_NoMemory
PyAPI_FUNC(PyObject *) PyPyErr_NoMemory(void);
#define PyErr_NormalizeException PyPyErr_NormalizeException
PyAPI_FUNC(void) PyPyErr_NormalizeException(PyObject **arg0, PyObject **arg1, PyObject **arg2);
#define PyErr_Occurred PyPyErr_Occurred
PyAPI_FUNC(PyObject *) PyPyErr_Occurred(void);
#define PyErr_Print PyPyErr_Print
PyAPI_FUNC(void) PyPyErr_Print(void);
#define PyErr_PrintEx PyPyErr_PrintEx
PyAPI_FUNC(void) PyPyErr_PrintEx(int arg0);
#define PyErr_Restore PyPyErr_Restore
PyAPI_FUNC(void) PyPyErr_Restore(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyErr_SetExcInfo PyPyErr_SetExcInfo
PyAPI_FUNC(void) PyPyErr_SetExcInfo(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyErr_SetFromErrno PyPyErr_SetFromErrno
PyAPI_FUNC(PyObject *) PyPyErr_SetFromErrno(PyObject *arg0);
#define PyErr_SetFromErrnoWithFilename PyPyErr_SetFromErrnoWithFilename
PyAPI_FUNC(PyObject *) PyPyErr_SetFromErrnoWithFilename(PyObject *arg0, char *arg1);
#define PyErr_SetFromErrnoWithFilenameObject PyPyErr_SetFromErrnoWithFilenameObject
PyAPI_FUNC(PyObject *) PyPyErr_SetFromErrnoWithFilenameObject(PyObject *arg0, PyObject *arg1);
#define PyErr_SetInterrupt PyPyErr_SetInterrupt
PyAPI_FUNC(void) PyPyErr_SetInterrupt(void);
#define PyErr_SetNone PyPyErr_SetNone
PyAPI_FUNC(void) PyPyErr_SetNone(PyObject *arg0);
#define PyErr_SetObject PyPyErr_SetObject
PyAPI_FUNC(void) PyPyErr_SetObject(PyObject *arg0, PyObject *arg1);
#define PyErr_SetString PyPyErr_SetString
PyAPI_FUNC(void) PyPyErr_SetString(PyObject *arg0, const char *arg1);
#define PyErr_Warn PyPyErr_Warn
PyAPI_FUNC(int) PyPyErr_Warn(PyObject *arg0, const char *arg1);
#define PyErr_WarnEx PyPyErr_WarnEx
PyAPI_FUNC(int) PyPyErr_WarnEx(PyObject *arg0, const char *arg1, int arg2);
#define PyErr_WriteUnraisable PyPyErr_WriteUnraisable
PyAPI_FUNC(void) PyPyErr_WriteUnraisable(PyObject *arg0);
#define PyEval_AcquireThread PyPyEval_AcquireThread
PyAPI_FUNC(void) PyPyEval_AcquireThread(PyThreadState *arg0);
#define PyEval_CallObjectWithKeywords PyPyEval_CallObjectWithKeywords
PyAPI_FUNC(PyObject *) PyPyEval_CallObjectWithKeywords(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyEval_EvalCode PyPyEval_EvalCode
PyAPI_FUNC(PyObject *) PyPyEval_EvalCode(PyCodeObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyEval_GetBuiltins PyPyEval_GetBuiltins
PyAPI_FUNC(PyObject *) PyPyEval_GetBuiltins(void);
#define PyEval_GetGlobals PyPyEval_GetGlobals
PyAPI_FUNC(PyObject *) PyPyEval_GetGlobals(void);
#define PyEval_GetLocals PyPyEval_GetLocals
PyAPI_FUNC(PyObject *) PyPyEval_GetLocals(void);
#define PyEval_InitThreads PyPyEval_InitThreads
PyAPI_FUNC(void) PyPyEval_InitThreads(void);
#define PyEval_MergeCompilerFlags PyPyEval_MergeCompilerFlags
PyAPI_FUNC(int) PyPyEval_MergeCompilerFlags(PyCompilerFlags *arg0);
#define PyEval_ReleaseThread PyPyEval_ReleaseThread
PyAPI_FUNC(void) PyPyEval_ReleaseThread(PyThreadState *arg0);
#define PyEval_RestoreThread PyPyEval_RestoreThread
PyAPI_FUNC(void) PyPyEval_RestoreThread(PyThreadState *arg0);
#define PyEval_SaveThread PyPyEval_SaveThread
PyAPI_FUNC(PyThreadState *) PyPyEval_SaveThread(void);
#define PyEval_ThreadsInitialized PyPyEval_ThreadsInitialized
PyAPI_FUNC(int) PyPyEval_ThreadsInitialized(void);
#define PyExceptionInstance_Class PyPyExceptionInstance_Class
PyAPI_FUNC(PyObject *) PyPyExceptionInstance_Class(PyObject *arg0);
#define PyFile_AsFile PyPyFile_AsFile
PyAPI_FUNC(FILE *) PyPyFile_AsFile(PyObject *arg0);
#define PyFile_Check PyPyFile_Check
PyAPI_FUNC(int) PyPyFile_Check(PyObject *arg0);
#define PyFile_CheckExact PyPyFile_CheckExact
PyAPI_FUNC(int) PyPyFile_CheckExact(PyObject *arg0);
#define PyFile_FromFile PyPyFile_FromFile
PyAPI_FUNC(PyObject *) PyPyFile_FromFile(FILE *arg0, const char *arg1, const char *arg2, void *arg3);
#define PyFile_FromString PyPyFile_FromString
PyAPI_FUNC(PyObject *) PyPyFile_FromString(const char *arg0, const char *arg1);
#define PyFile_GetLine PyPyFile_GetLine
PyAPI_FUNC(PyObject *) PyPyFile_GetLine(PyObject *arg0, int arg1);
#define PyFile_Name PyPyFile_Name
PyAPI_FUNC(PyObject *) PyPyFile_Name(PyObject *arg0);
#define PyFile_SetBufSize PyPyFile_SetBufSize
PyAPI_FUNC(void) PyPyFile_SetBufSize(PyObject *arg0, int arg1);
#define PyFile_SoftSpace PyPyFile_SoftSpace
PyAPI_FUNC(int) PyPyFile_SoftSpace(PyObject *arg0, int arg1);
#define PyFile_WriteObject PyPyFile_WriteObject
PyAPI_FUNC(int) PyPyFile_WriteObject(PyObject *arg0, PyObject *arg1, int arg2);
#define PyFile_WriteString PyPyFile_WriteString
PyAPI_FUNC(int) PyPyFile_WriteString(const char *arg0, PyObject *arg1);
#define PyFloat_AS_DOUBLE PyPyFloat_AS_DOUBLE
PyAPI_FUNC(double) PyPyFloat_AS_DOUBLE(PyObject *arg0);
#define PyFloat_AsDouble PyPyFloat_AsDouble
PyAPI_FUNC(double) PyPyFloat_AsDouble(PyObject *arg0);
#define PyFloat_Check PyPyFloat_Check
PyAPI_FUNC(int) PyPyFloat_Check(PyObject *arg0);
#define PyFloat_CheckExact PyPyFloat_CheckExact
PyAPI_FUNC(int) PyPyFloat_CheckExact(PyObject *arg0);
#define PyFloat_FromDouble PyPyFloat_FromDouble
PyAPI_FUNC(PyObject *) PyPyFloat_FromDouble(double arg0);
#define PyFloat_FromString PyPyFloat_FromString
PyAPI_FUNC(PyObject *) PyPyFloat_FromString(PyObject *arg0, char **arg1);
#define PyFrame_New PyPyFrame_New
PyAPI_FUNC(PyFrameObject *) PyPyFrame_New(PyThreadState *arg0, PyCodeObject *arg1, PyObject *arg2, PyObject *arg3);
#define PyFunction_Check PyPyFunction_Check
PyAPI_FUNC(int) PyPyFunction_Check(PyObject *arg0);
#define PyFunction_CheckExact PyPyFunction_CheckExact
PyAPI_FUNC(int) PyPyFunction_CheckExact(PyObject *arg0);
#define PyFunction_GetCode PyPyFunction_GetCode
PyAPI_FUNC(PyObject *) PyPyFunction_GetCode(PyObject *arg0);
#define PyGILState_Ensure PyPyGILState_Ensure
PyAPI_FUNC(int) PyPyGILState_Ensure(void);
#define PyGILState_Release PyPyGILState_Release
PyAPI_FUNC(void) PyPyGILState_Release(int arg0);
#define PyImport_AddModule PyPyImport_AddModule
PyAPI_FUNC(PyObject *) PyPyImport_AddModule(const char *arg0);
#define PyImport_ExecCodeModule PyPyImport_ExecCodeModule
PyAPI_FUNC(PyObject *) PyPyImport_ExecCodeModule(char *arg0, PyObject *arg1);
#define PyImport_ExecCodeModuleEx PyPyImport_ExecCodeModuleEx
PyAPI_FUNC(PyObject *) PyPyImport_ExecCodeModuleEx(char *arg0, PyObject *arg1, char *arg2);
#define PyImport_GetModuleDict PyPyImport_GetModuleDict
PyAPI_FUNC(PyObject *) PyPyImport_GetModuleDict(void);
#define PyImport_Import PyPyImport_Import
PyAPI_FUNC(PyObject *) PyPyImport_Import(PyObject *arg0);
#define PyImport_ImportModule PyPyImport_ImportModule
PyAPI_FUNC(PyObject *) PyPyImport_ImportModule(const char *arg0);
#define PyImport_ImportModuleNoBlock PyPyImport_ImportModuleNoBlock
PyAPI_FUNC(PyObject *) PyPyImport_ImportModuleNoBlock(const char *arg0);
#define PyImport_ReloadModule PyPyImport_ReloadModule
PyAPI_FUNC(PyObject *) PyPyImport_ReloadModule(PyObject *arg0);
#define PyIndex_Check PyPyIndex_Check
PyAPI_FUNC(int) PyPyIndex_Check(PyObject *arg0);
#define PyInstance_Check PyPyInstance_Check
PyAPI_FUNC(int) PyPyInstance_Check(PyObject *arg0);
#define PyInstance_CheckExact PyPyInstance_CheckExact
PyAPI_FUNC(int) PyPyInstance_CheckExact(PyObject *arg0);
#define PyInstance_New PyPyInstance_New
PyAPI_FUNC(PyObject *) PyPyInstance_New(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyInstance_NewRaw PyPyInstance_NewRaw
PyAPI_FUNC(PyObject *) PyPyInstance_NewRaw(PyObject *arg0, PyObject *arg1);
#define PyInt_AS_LONG PyPyInt_AS_LONG
PyAPI_FUNC(Signed) PyPyInt_AS_LONG(PyObject *arg0);
#define PyInt_AsLong PyPyInt_AsLong
PyAPI_FUNC(Signed) PyPyInt_AsLong(PyObject *arg0);
#define PyInt_AsSsize_t PyPyInt_AsSsize_t
PyAPI_FUNC(Py_ssize_t) PyPyInt_AsSsize_t(PyObject *arg0);
#define PyInt_AsUnsignedLong PyPyInt_AsUnsignedLong
PyAPI_FUNC(Unsigned) PyPyInt_AsUnsignedLong(PyObject *arg0);
#define PyInt_AsUnsignedLongLongMask PyPyInt_AsUnsignedLongLongMask
PyAPI_FUNC(Unsigned) PyPyInt_AsUnsignedLongLongMask(PyObject *arg0);
#define PyInt_AsUnsignedLongMask PyPyInt_AsUnsignedLongMask
PyAPI_FUNC(Unsigned) PyPyInt_AsUnsignedLongMask(PyObject *arg0);
#define PyInt_Check PyPyInt_Check
PyAPI_FUNC(int) PyPyInt_Check(PyObject *arg0);
#define PyInt_CheckExact PyPyInt_CheckExact
PyAPI_FUNC(int) PyPyInt_CheckExact(PyObject *arg0);
#define PyInt_FromLong PyPyInt_FromLong
PyAPI_FUNC(PyObject *) PyPyInt_FromLong(Signed arg0);
#define PyInt_FromSize_t PyPyInt_FromSize_t
PyAPI_FUNC(PyObject *) PyPyInt_FromSize_t(Unsigned arg0);
#define PyInt_FromSsize_t PyPyInt_FromSsize_t
PyAPI_FUNC(PyObject *) PyPyInt_FromSsize_t(Py_ssize_t arg0);
#define PyInt_FromString PyPyInt_FromString
PyAPI_FUNC(PyObject *) PyPyInt_FromString(const char *arg0, char **arg1, int arg2);
#define PyInt_GetMax PyPyInt_GetMax
PyAPI_FUNC(Signed) PyPyInt_GetMax(void);
#define PyInterpreterState_Head PyPyInterpreterState_Head
PyAPI_FUNC(PyInterpreterState *) PyPyInterpreterState_Head(void);
#define PyInterpreterState_Next PyPyInterpreterState_Next
PyAPI_FUNC(PyInterpreterState *) PyPyInterpreterState_Next(PyInterpreterState *arg0);
#define PyIter_Check PyPyIter_Check
PyAPI_FUNC(int) PyPyIter_Check(PyObject *arg0);
#define PyIter_Next PyPyIter_Next
PyAPI_FUNC(PyObject *) PyPyIter_Next(PyObject *arg0);
#define PyList_Append PyPyList_Append
PyAPI_FUNC(int) PyPyList_Append(PyObject *arg0, PyObject *arg1);
#define PyList_AsTuple PyPyList_AsTuple
PyAPI_FUNC(PyObject *) PyPyList_AsTuple(PyObject *arg0);
#define PyList_Check PyPyList_Check
PyAPI_FUNC(int) PyPyList_Check(PyObject *arg0);
#define PyList_CheckExact PyPyList_CheckExact
PyAPI_FUNC(int) PyPyList_CheckExact(PyObject *arg0);
#define PyList_GET_SIZE PyPyList_GET_SIZE
PyAPI_FUNC(Py_ssize_t) PyPyList_GET_SIZE(PyObject *arg0);
#define PyList_GetItem PyPyList_GetItem
PyAPI_FUNC(PyObject *) PyPyList_GetItem(PyObject *arg0, Py_ssize_t arg1);
#define PyList_GetSlice PyPyList_GetSlice
PyAPI_FUNC(PyObject *) PyPyList_GetSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2);
#define PyList_Insert PyPyList_Insert
PyAPI_FUNC(int) PyPyList_Insert(PyObject *arg0, Py_ssize_t arg1, PyObject *arg2);
#define PyList_New PyPyList_New
PyAPI_FUNC(PyObject *) PyPyList_New(Py_ssize_t arg0);
#define PyList_Reverse PyPyList_Reverse
PyAPI_FUNC(int) PyPyList_Reverse(PyObject *arg0);
#define PyList_SetItem PyPyList_SetItem
PyAPI_FUNC(int) PyPyList_SetItem(PyObject *arg0, Py_ssize_t arg1, PyObject *arg2);
#define PyList_SetSlice PyPyList_SetSlice
PyAPI_FUNC(int) PyPyList_SetSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2, PyObject *arg3);
#define PyList_Size PyPyList_Size
PyAPI_FUNC(Py_ssize_t) PyPyList_Size(PyObject *arg0);
#define PyList_Sort PyPyList_Sort
PyAPI_FUNC(int) PyPyList_Sort(PyObject *arg0);
#define PyLong_AsDouble PyPyLong_AsDouble
PyAPI_FUNC(double) PyPyLong_AsDouble(PyObject *arg0);
#define PyLong_AsLong PyPyLong_AsLong
PyAPI_FUNC(Signed) PyPyLong_AsLong(PyObject *arg0);
#define PyLong_AsLongAndOverflow PyPyLong_AsLongAndOverflow
PyAPI_FUNC(Signed) PyPyLong_AsLongAndOverflow(PyObject *arg0, int *arg1);
#define PyLong_AsLongLong PyPyLong_AsLongLong
PyAPI_FUNC(Signed) PyPyLong_AsLongLong(PyObject *arg0);
#define PyLong_AsLongLongAndOverflow PyPyLong_AsLongLongAndOverflow
PyAPI_FUNC(Signed) PyPyLong_AsLongLongAndOverflow(PyObject *arg0, int *arg1);
#define PyLong_AsSsize_t PyPyLong_AsSsize_t
PyAPI_FUNC(Py_ssize_t) PyPyLong_AsSsize_t(PyObject *arg0);
#define PyLong_AsUnsignedLong PyPyLong_AsUnsignedLong
PyAPI_FUNC(Unsigned) PyPyLong_AsUnsignedLong(PyObject *arg0);
#define PyLong_AsUnsignedLongLong PyPyLong_AsUnsignedLongLong
PyAPI_FUNC(Unsigned) PyPyLong_AsUnsignedLongLong(PyObject *arg0);
#define PyLong_AsUnsignedLongLongMask PyPyLong_AsUnsignedLongLongMask
PyAPI_FUNC(Unsigned) PyPyLong_AsUnsignedLongLongMask(PyObject *arg0);
#define PyLong_AsUnsignedLongMask PyPyLong_AsUnsignedLongMask
PyAPI_FUNC(Unsigned) PyPyLong_AsUnsignedLongMask(PyObject *arg0);
#define PyLong_AsVoidPtr PyPyLong_AsVoidPtr
PyAPI_FUNC(void *) PyPyLong_AsVoidPtr(PyObject *arg0);
#define PyLong_Check PyPyLong_Check
PyAPI_FUNC(int) PyPyLong_Check(PyObject *arg0);
#define PyLong_CheckExact PyPyLong_CheckExact
PyAPI_FUNC(int) PyPyLong_CheckExact(PyObject *arg0);
#define PyLong_FromDouble PyPyLong_FromDouble
PyAPI_FUNC(PyObject *) PyPyLong_FromDouble(double arg0);
#define PyLong_FromLong PyPyLong_FromLong
PyAPI_FUNC(PyObject *) PyPyLong_FromLong(Signed arg0);
#define PyLong_FromLongLong PyPyLong_FromLongLong
PyAPI_FUNC(PyObject *) PyPyLong_FromLongLong(Signed arg0);
#define PyLong_FromSize_t PyPyLong_FromSize_t
PyAPI_FUNC(PyObject *) PyPyLong_FromSize_t(Unsigned arg0);
#define PyLong_FromSsize_t PyPyLong_FromSsize_t
PyAPI_FUNC(PyObject *) PyPyLong_FromSsize_t(Py_ssize_t arg0);
#define PyLong_FromString PyPyLong_FromString
PyAPI_FUNC(PyObject *) PyPyLong_FromString(const char *arg0, char **arg1, int arg2);
#define PyLong_FromUnicode PyPyLong_FromUnicode
PyAPI_FUNC(PyObject *) PyPyLong_FromUnicode(wchar_t *arg0, Py_ssize_t arg1, int arg2);
#define PyLong_FromUnsignedLong PyPyLong_FromUnsignedLong
PyAPI_FUNC(PyObject *) PyPyLong_FromUnsignedLong(Unsigned arg0);
#define PyLong_FromUnsignedLongLong PyPyLong_FromUnsignedLongLong
PyAPI_FUNC(PyObject *) PyPyLong_FromUnsignedLongLong(Unsigned arg0);
#define PyLong_FromVoidPtr PyPyLong_FromVoidPtr
PyAPI_FUNC(PyObject *) PyPyLong_FromVoidPtr(void *arg0);
#define PyMapping_Check PyPyMapping_Check
PyAPI_FUNC(int) PyPyMapping_Check(PyObject *arg0);
#define PyMapping_GetItemString PyPyMapping_GetItemString
PyAPI_FUNC(PyObject *) PyPyMapping_GetItemString(PyObject *arg0, const char *arg1);
#define PyMapping_HasKey PyPyMapping_HasKey
PyAPI_FUNC(int) PyPyMapping_HasKey(PyObject *arg0, PyObject *arg1);
#define PyMapping_HasKeyString PyPyMapping_HasKeyString
PyAPI_FUNC(int) PyPyMapping_HasKeyString(PyObject *arg0, const char *arg1);
#define PyMapping_Items PyPyMapping_Items
PyAPI_FUNC(PyObject *) PyPyMapping_Items(PyObject *arg0);
#define PyMapping_Keys PyPyMapping_Keys
PyAPI_FUNC(PyObject *) PyPyMapping_Keys(PyObject *arg0);
#define PyMapping_Length PyPyMapping_Length
PyAPI_FUNC(Py_ssize_t) PyPyMapping_Length(PyObject *arg0);
#define PyMapping_SetItemString PyPyMapping_SetItemString
PyAPI_FUNC(int) PyPyMapping_SetItemString(PyObject *arg0, const char *arg1, PyObject *arg2);
#define PyMapping_Size PyPyMapping_Size
PyAPI_FUNC(Py_ssize_t) PyPyMapping_Size(PyObject *arg0);
#define PyMapping_Values PyPyMapping_Values
PyAPI_FUNC(PyObject *) PyPyMapping_Values(PyObject *arg0);
#define PyMemoryView_FromObject PyPyMemoryView_FromObject
PyAPI_FUNC(PyObject *) PyPyMemoryView_FromObject(PyObject *arg0);
#define PyMethod_Check PyPyMethod_Check
PyAPI_FUNC(int) PyPyMethod_Check(PyObject *arg0);
#define PyMethod_CheckExact PyPyMethod_CheckExact
PyAPI_FUNC(int) PyPyMethod_CheckExact(PyObject *arg0);
#define PyMethod_Class PyPyMethod_Class
PyAPI_FUNC(PyObject *) PyPyMethod_Class(PyObject *arg0);
#define PyMethod_Function PyPyMethod_Function
PyAPI_FUNC(PyObject *) PyPyMethod_Function(PyObject *arg0);
#define PyMethod_New PyPyMethod_New
PyAPI_FUNC(PyObject *) PyPyMethod_New(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyMethod_Self PyPyMethod_Self
PyAPI_FUNC(PyObject *) PyPyMethod_Self(PyObject *arg0);
#define PyModule_Check PyPyModule_Check
PyAPI_FUNC(int) PyPyModule_Check(PyObject *arg0);
#define PyModule_GetDict PyPyModule_GetDict
PyAPI_FUNC(PyObject *) PyPyModule_GetDict(PyObject *arg0);
#define PyModule_GetName PyPyModule_GetName
PyAPI_FUNC(char *) PyPyModule_GetName(PyObject *arg0);
#define PyNumber_Absolute PyPyNumber_Absolute
PyAPI_FUNC(PyObject *) PyPyNumber_Absolute(PyObject *arg0);
#define PyNumber_Add PyPyNumber_Add
PyAPI_FUNC(PyObject *) PyPyNumber_Add(PyObject *arg0, PyObject *arg1);
#define PyNumber_And PyPyNumber_And
PyAPI_FUNC(PyObject *) PyPyNumber_And(PyObject *arg0, PyObject *arg1);
#define PyNumber_AsSsize_t PyPyNumber_AsSsize_t
PyAPI_FUNC(Py_ssize_t) PyPyNumber_AsSsize_t(PyObject *arg0, PyObject *arg1);
#define PyNumber_Check PyPyNumber_Check
PyAPI_FUNC(int) PyPyNumber_Check(PyObject *arg0);
#define PyNumber_Coerce PyPyNumber_Coerce
PyAPI_FUNC(int) PyPyNumber_Coerce(PyObject **arg0, PyObject **arg1);
#define PyNumber_CoerceEx PyPyNumber_CoerceEx
PyAPI_FUNC(int) PyPyNumber_CoerceEx(PyObject **arg0, PyObject **arg1);
#define PyNumber_Divide PyPyNumber_Divide
PyAPI_FUNC(PyObject *) PyPyNumber_Divide(PyObject *arg0, PyObject *arg1);
#define PyNumber_Divmod PyPyNumber_Divmod
PyAPI_FUNC(PyObject *) PyPyNumber_Divmod(PyObject *arg0, PyObject *arg1);
#define PyNumber_Float PyPyNumber_Float
PyAPI_FUNC(PyObject *) PyPyNumber_Float(PyObject *arg0);
#define PyNumber_FloorDivide PyPyNumber_FloorDivide
PyAPI_FUNC(PyObject *) PyPyNumber_FloorDivide(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceAdd PyPyNumber_InPlaceAdd
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceAdd(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceAnd PyPyNumber_InPlaceAnd
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceAnd(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceDivide PyPyNumber_InPlaceDivide
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceDivide(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceFloorDivide PyPyNumber_InPlaceFloorDivide
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceFloorDivide(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceLshift PyPyNumber_InPlaceLshift
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceLshift(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceMultiply PyPyNumber_InPlaceMultiply
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceMultiply(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceOr PyPyNumber_InPlaceOr
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceOr(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlacePower PyPyNumber_InPlacePower
PyAPI_FUNC(PyObject *) PyPyNumber_InPlacePower(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyNumber_InPlaceRemainder PyPyNumber_InPlaceRemainder
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceRemainder(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceRshift PyPyNumber_InPlaceRshift
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceRshift(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceSubtract PyPyNumber_InPlaceSubtract
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceSubtract(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceTrueDivide PyPyNumber_InPlaceTrueDivide
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceTrueDivide(PyObject *arg0, PyObject *arg1);
#define PyNumber_InPlaceXor PyPyNumber_InPlaceXor
PyAPI_FUNC(PyObject *) PyPyNumber_InPlaceXor(PyObject *arg0, PyObject *arg1);
#define PyNumber_Index PyPyNumber_Index
PyAPI_FUNC(PyObject *) PyPyNumber_Index(PyObject *arg0);
#define PyNumber_Int PyPyNumber_Int
PyAPI_FUNC(PyObject *) PyPyNumber_Int(PyObject *arg0);
#define PyNumber_Invert PyPyNumber_Invert
PyAPI_FUNC(PyObject *) PyPyNumber_Invert(PyObject *arg0);
#define PyNumber_Long PyPyNumber_Long
PyAPI_FUNC(PyObject *) PyPyNumber_Long(PyObject *arg0);
#define PyNumber_Lshift PyPyNumber_Lshift
PyAPI_FUNC(PyObject *) PyPyNumber_Lshift(PyObject *arg0, PyObject *arg1);
#define PyNumber_Multiply PyPyNumber_Multiply
PyAPI_FUNC(PyObject *) PyPyNumber_Multiply(PyObject *arg0, PyObject *arg1);
#define PyNumber_Negative PyPyNumber_Negative
PyAPI_FUNC(PyObject *) PyPyNumber_Negative(PyObject *arg0);
#define PyNumber_Or PyPyNumber_Or
PyAPI_FUNC(PyObject *) PyPyNumber_Or(PyObject *arg0, PyObject *arg1);
#define PyNumber_Positive PyPyNumber_Positive
PyAPI_FUNC(PyObject *) PyPyNumber_Positive(PyObject *arg0);
#define PyNumber_Power PyPyNumber_Power
PyAPI_FUNC(PyObject *) PyPyNumber_Power(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyNumber_Remainder PyPyNumber_Remainder
PyAPI_FUNC(PyObject *) PyPyNumber_Remainder(PyObject *arg0, PyObject *arg1);
#define PyNumber_Rshift PyPyNumber_Rshift
PyAPI_FUNC(PyObject *) PyPyNumber_Rshift(PyObject *arg0, PyObject *arg1);
#define PyNumber_Subtract PyPyNumber_Subtract
PyAPI_FUNC(PyObject *) PyPyNumber_Subtract(PyObject *arg0, PyObject *arg1);
#define PyNumber_TrueDivide PyPyNumber_TrueDivide
PyAPI_FUNC(PyObject *) PyPyNumber_TrueDivide(PyObject *arg0, PyObject *arg1);
#define PyNumber_Xor PyPyNumber_Xor
PyAPI_FUNC(PyObject *) PyPyNumber_Xor(PyObject *arg0, PyObject *arg1);
#define PyOS_double_to_string PyPyOS_double_to_string
PyAPI_FUNC(char *) PyPyOS_double_to_string(double arg0, char arg1, int arg2, int arg3, int *arg4);
#define PyOS_string_to_double PyPyOS_string_to_double
PyAPI_FUNC(double) PyPyOS_string_to_double(const char *arg0, char **arg1, PyObject *arg2);
#define PyObject_AsCharBuffer PyPyObject_AsCharBuffer
PyAPI_FUNC(int) PyPyObject_AsCharBuffer(PyObject *arg0, char **arg1, Py_ssize_t *arg2);
#define PyObject_AsFileDescriptor PyPyObject_AsFileDescriptor
PyAPI_FUNC(int) PyPyObject_AsFileDescriptor(PyObject *arg0);
#define PyObject_Call PyPyObject_Call
PyAPI_FUNC(PyObject *) PyPyObject_Call(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyObject_CallObject PyPyObject_CallObject
PyAPI_FUNC(PyObject *) PyPyObject_CallObject(PyObject *arg0, PyObject *arg1);
#define PyObject_CheckBuffer PyPyObject_CheckBuffer
PyAPI_FUNC(int) PyPyObject_CheckBuffer(PyObject *arg0);
#define PyObject_ClearWeakRefs PyPyObject_ClearWeakRefs
PyAPI_FUNC(void) PyPyObject_ClearWeakRefs(PyObject *arg0);
#define PyObject_Cmp PyPyObject_Cmp
PyAPI_FUNC(int) PyPyObject_Cmp(PyObject *arg0, PyObject *arg1, int *arg2);
#define PyObject_Compare PyPyObject_Compare
PyAPI_FUNC(int) PyPyObject_Compare(PyObject *arg0, PyObject *arg1);
#define PyObject_Del PyPyObject_Del
PyAPI_FUNC(void) PyPyObject_Del(void *arg0);
#define PyObject_DelAttr PyPyObject_DelAttr
PyAPI_FUNC(int) PyPyObject_DelAttr(PyObject *arg0, PyObject *arg1);
#define PyObject_DelAttrString PyPyObject_DelAttrString
PyAPI_FUNC(int) PyPyObject_DelAttrString(PyObject *arg0, const char *arg1);
#define PyObject_DelItem PyPyObject_DelItem
PyAPI_FUNC(int) PyPyObject_DelItem(PyObject *arg0, PyObject *arg1);
#define PyObject_Dir PyPyObject_Dir
PyAPI_FUNC(PyObject *) PyPyObject_Dir(PyObject *arg0);
#define PyObject_FREE PyPyObject_FREE
PyAPI_FUNC(void) PyPyObject_FREE(void *arg0);
#define PyObject_GC_Del PyPyObject_GC_Del
PyAPI_FUNC(void) PyPyObject_GC_Del(void *arg0);
#define PyObject_GC_Track PyPyObject_GC_Track
PyAPI_FUNC(void) PyPyObject_GC_Track(void *arg0);
#define PyObject_GC_UnTrack PyPyObject_GC_UnTrack
PyAPI_FUNC(void) PyPyObject_GC_UnTrack(void *arg0);
#define PyObject_GenericGetAttr PyPyObject_GenericGetAttr
PyAPI_FUNC(PyObject *) PyPyObject_GenericGetAttr(PyObject *arg0, PyObject *arg1);
#define PyObject_GenericSetAttr PyPyObject_GenericSetAttr
PyAPI_FUNC(int) PyPyObject_GenericSetAttr(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyObject_GetAttr PyPyObject_GetAttr
PyAPI_FUNC(PyObject *) PyPyObject_GetAttr(PyObject *arg0, PyObject *arg1);
#define PyObject_GetAttrString PyPyObject_GetAttrString
PyAPI_FUNC(PyObject *) PyPyObject_GetAttrString(PyObject *arg0, const char *arg1);
#define PyObject_GetBuffer PyPyObject_GetBuffer
PyAPI_FUNC(int) PyPyObject_GetBuffer(PyObject *arg0, Py_buffer *arg1, int arg2);
#define PyObject_GetItem PyPyObject_GetItem
PyAPI_FUNC(PyObject *) PyPyObject_GetItem(PyObject *arg0, PyObject *arg1);
#define PyObject_GetIter PyPyObject_GetIter
PyAPI_FUNC(PyObject *) PyPyObject_GetIter(PyObject *arg0);
#define PyObject_HasAttr PyPyObject_HasAttr
PyAPI_FUNC(int) PyPyObject_HasAttr(PyObject *arg0, PyObject *arg1);
#define PyObject_HasAttrString PyPyObject_HasAttrString
PyAPI_FUNC(int) PyPyObject_HasAttrString(PyObject *arg0, const char *arg1);
#define PyObject_Hash PyPyObject_Hash
PyAPI_FUNC(Signed) PyPyObject_Hash(PyObject *arg0);
#define PyObject_HashNotImplemented PyPyObject_HashNotImplemented
PyAPI_FUNC(Signed) PyPyObject_HashNotImplemented(PyObject *arg0);
#define PyObject_Init PyPyObject_Init
PyAPI_FUNC(PyObject *) PyPyObject_Init(PyObject *arg0, PyTypeObject *arg1);
#define PyObject_InitVar PyPyObject_InitVar
PyAPI_FUNC(PyObject *) PyPyObject_InitVar(PyVarObject *arg0, PyTypeObject *arg1, Py_ssize_t arg2);
#define PyObject_IsInstance PyPyObject_IsInstance
PyAPI_FUNC(int) PyPyObject_IsInstance(PyObject *arg0, PyObject *arg1);
#define PyObject_IsSubclass PyPyObject_IsSubclass
PyAPI_FUNC(int) PyPyObject_IsSubclass(PyObject *arg0, PyObject *arg1);
#define PyObject_IsTrue PyPyObject_IsTrue
PyAPI_FUNC(int) PyPyObject_IsTrue(PyObject *arg0);
#define PyObject_MALLOC PyPyObject_MALLOC
PyAPI_FUNC(void *) PyPyObject_MALLOC(Py_ssize_t arg0);
#define PyObject_Not PyPyObject_Not
PyAPI_FUNC(int) PyPyObject_Not(PyObject *arg0);
#define PyObject_Print PyPyObject_Print
PyAPI_FUNC(int) PyPyObject_Print(PyObject *arg0, FILE *arg1, int arg2);
#define PyObject_Repr PyPyObject_Repr
PyAPI_FUNC(PyObject *) PyPyObject_Repr(PyObject *arg0);
#define PyObject_RichCompare PyPyObject_RichCompare
PyAPI_FUNC(PyObject *) PyPyObject_RichCompare(PyObject *arg0, PyObject *arg1, int arg2);
#define PyObject_RichCompareBool PyPyObject_RichCompareBool
PyAPI_FUNC(int) PyPyObject_RichCompareBool(PyObject *arg0, PyObject *arg1, int arg2);
#define PyObject_SelfIter PyPyObject_SelfIter
PyAPI_FUNC(PyObject *) PyPyObject_SelfIter(PyObject *arg0);
#define PyObject_SetAttr PyPyObject_SetAttr
PyAPI_FUNC(int) PyPyObject_SetAttr(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyObject_SetAttrString PyPyObject_SetAttrString
PyAPI_FUNC(int) PyPyObject_SetAttrString(PyObject *arg0, const char *arg1, PyObject *arg2);
#define PyObject_SetItem PyPyObject_SetItem
PyAPI_FUNC(int) PyPyObject_SetItem(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyObject_Size PyPyObject_Size
PyAPI_FUNC(Py_ssize_t) PyPyObject_Size(PyObject *arg0);
#define PyObject_Str PyPyObject_Str
PyAPI_FUNC(PyObject *) PyPyObject_Str(PyObject *arg0);
#define PyObject_Type PyPyObject_Type
PyAPI_FUNC(PyObject *) PyPyObject_Type(PyObject *arg0);
#define PyObject_Unicode PyPyObject_Unicode
PyAPI_FUNC(PyObject *) PyPyObject_Unicode(PyObject *arg0);
#define PyObject_dealloc PyPyObject_dealloc
PyAPI_FUNC(void) PyPyObject_dealloc(PyObject *arg0);
#define PyRun_File PyPyRun_File
PyAPI_FUNC(PyObject *) PyPyRun_File(FILE *arg0, const char *arg1, int arg2, PyObject *arg3, PyObject *arg4);
#define PyRun_SimpleString PyPyRun_SimpleString
PyAPI_FUNC(int) PyPyRun_SimpleString(const char *arg0);
#define PyRun_String PyPyRun_String
PyAPI_FUNC(PyObject *) PyPyRun_String(const char *arg0, int arg1, PyObject *arg2, PyObject *arg3);
#define PyRun_StringFlags PyPyRun_StringFlags
PyAPI_FUNC(PyObject *) PyPyRun_StringFlags(const char *arg0, int arg1, PyObject *arg2, PyObject *arg3, PyCompilerFlags *arg4);
#define PySeqIter_New PyPySeqIter_New
PyAPI_FUNC(PyObject *) PyPySeqIter_New(PyObject *arg0);
#define PySequence_Check PyPySequence_Check
PyAPI_FUNC(int) PyPySequence_Check(PyObject *arg0);
#define PySequence_Concat PyPySequence_Concat
PyAPI_FUNC(PyObject *) PyPySequence_Concat(PyObject *arg0, PyObject *arg1);
#define PySequence_Contains PyPySequence_Contains
PyAPI_FUNC(int) PyPySequence_Contains(PyObject *arg0, PyObject *arg1);
#define PySequence_DelItem PyPySequence_DelItem
PyAPI_FUNC(int) PyPySequence_DelItem(PyObject *arg0, Py_ssize_t arg1);
#define PySequence_DelSlice PyPySequence_DelSlice
PyAPI_FUNC(int) PyPySequence_DelSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2);
#define PySequence_Fast PyPySequence_Fast
PyAPI_FUNC(PyObject *) PyPySequence_Fast(PyObject *arg0, const char *arg1);
#define PySequence_Fast_GET_ITEM PyPySequence_Fast_GET_ITEM
PyAPI_FUNC(PyObject *) PyPySequence_Fast_GET_ITEM(PyObject *arg0, Py_ssize_t arg1);
#define PySequence_Fast_GET_SIZE PyPySequence_Fast_GET_SIZE
PyAPI_FUNC(Py_ssize_t) PyPySequence_Fast_GET_SIZE(PyObject *arg0);
#define PySequence_GetItem PyPySequence_GetItem
PyAPI_FUNC(PyObject *) PyPySequence_GetItem(PyObject *arg0, Py_ssize_t arg1);
#define PySequence_GetSlice PyPySequence_GetSlice
PyAPI_FUNC(PyObject *) PyPySequence_GetSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2);
#define PySequence_ITEM PyPySequence_ITEM
PyAPI_FUNC(PyObject *) PyPySequence_ITEM(PyObject *arg0, Py_ssize_t arg1);
#define PySequence_Index PyPySequence_Index
PyAPI_FUNC(Py_ssize_t) PyPySequence_Index(PyObject *arg0, PyObject *arg1);
#define PySequence_Length PyPySequence_Length
PyAPI_FUNC(Py_ssize_t) PyPySequence_Length(PyObject *arg0);
#define PySequence_List PyPySequence_List
PyAPI_FUNC(PyObject *) PyPySequence_List(PyObject *arg0);
#define PySequence_Repeat PyPySequence_Repeat
PyAPI_FUNC(PyObject *) PyPySequence_Repeat(PyObject *arg0, Py_ssize_t arg1);
#define PySequence_SetItem PyPySequence_SetItem
PyAPI_FUNC(int) PyPySequence_SetItem(PyObject *arg0, Py_ssize_t arg1, PyObject *arg2);
#define PySequence_SetSlice PyPySequence_SetSlice
PyAPI_FUNC(int) PyPySequence_SetSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2, PyObject *arg3);
#define PySequence_Size PyPySequence_Size
PyAPI_FUNC(Py_ssize_t) PyPySequence_Size(PyObject *arg0);
#define PySequence_Tuple PyPySequence_Tuple
PyAPI_FUNC(PyObject *) PyPySequence_Tuple(PyObject *arg0);
#define PySet_Add PyPySet_Add
PyAPI_FUNC(int) PyPySet_Add(PyObject *arg0, PyObject *arg1);
#define PySet_Check PyPySet_Check
PyAPI_FUNC(int) PyPySet_Check(PyObject *arg0);
#define PySet_CheckExact PyPySet_CheckExact
PyAPI_FUNC(int) PyPySet_CheckExact(PyObject *arg0);
#define PySet_Clear PyPySet_Clear
PyAPI_FUNC(int) PyPySet_Clear(PyObject *arg0);
#define PySet_Contains PyPySet_Contains
PyAPI_FUNC(int) PyPySet_Contains(PyObject *arg0, PyObject *arg1);
#define PySet_Discard PyPySet_Discard
PyAPI_FUNC(int) PyPySet_Discard(PyObject *arg0, PyObject *arg1);
#define PySet_GET_SIZE PyPySet_GET_SIZE
PyAPI_FUNC(Py_ssize_t) PyPySet_GET_SIZE(PyObject *arg0);
#define PySet_New PyPySet_New
PyAPI_FUNC(PyObject *) PyPySet_New(PyObject *arg0);
#define PySet_Pop PyPySet_Pop
PyAPI_FUNC(PyObject *) PyPySet_Pop(PyObject *arg0);
#define PySet_Size PyPySet_Size
PyAPI_FUNC(Py_ssize_t) PyPySet_Size(PyObject *arg0);
#define PySlice_Check PyPySlice_Check
PyAPI_FUNC(int) PyPySlice_Check(PyObject *arg0);
#define PySlice_CheckExact PyPySlice_CheckExact
PyAPI_FUNC(int) PyPySlice_CheckExact(PyObject *arg0);
#define PySlice_GetIndices PyPySlice_GetIndices
PyAPI_FUNC(int) PyPySlice_GetIndices(PySliceObject *arg0, Py_ssize_t arg1, Py_ssize_t *arg2, Py_ssize_t *arg3, Py_ssize_t *arg4);
#define PySlice_GetIndicesEx PyPySlice_GetIndicesEx
PyAPI_FUNC(int) PyPySlice_GetIndicesEx(PySliceObject *arg0, Py_ssize_t arg1, Py_ssize_t *arg2, Py_ssize_t *arg3, Py_ssize_t *arg4, Py_ssize_t *arg5);
#define PySlice_New PyPySlice_New
PyAPI_FUNC(PyObject *) PyPySlice_New(PyObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyStaticMethod_New PyPyStaticMethod_New
PyAPI_FUNC(PyObject *) PyPyStaticMethod_New(PyObject *arg0);
#define PyString_AsDecodedObject PyPyString_AsDecodedObject
PyAPI_FUNC(PyObject *) PyPyString_AsDecodedObject(PyObject *arg0, const char *arg1, const char *arg2);
#define PyString_AsEncodedObject PyPyString_AsEncodedObject
PyAPI_FUNC(PyObject *) PyPyString_AsEncodedObject(PyObject *arg0, const char *arg1, const char *arg2);
#define PyString_AsString PyPyString_AsString
PyAPI_FUNC(char *) PyPyString_AsString(PyObject *arg0);
#define PyString_AsStringAndSize PyPyString_AsStringAndSize
PyAPI_FUNC(int) PyPyString_AsStringAndSize(PyObject *arg0, char **arg1, Py_ssize_t *arg2);
#define PyString_Check PyPyString_Check
PyAPI_FUNC(int) PyPyString_Check(PyObject *arg0);
#define PyString_CheckExact PyPyString_CheckExact
PyAPI_FUNC(int) PyPyString_CheckExact(PyObject *arg0);
#define PyString_Concat PyPyString_Concat
PyAPI_FUNC(void) PyPyString_Concat(PyObject **arg0, PyObject *arg1);
#define PyString_ConcatAndDel PyPyString_ConcatAndDel
PyAPI_FUNC(void) PyPyString_ConcatAndDel(PyObject **arg0, PyObject *arg1);
#define PyString_Format PyPyString_Format
PyAPI_FUNC(PyObject *) PyPyString_Format(PyObject *arg0, PyObject *arg1);
#define PyString_FromString PyPyString_FromString
PyAPI_FUNC(PyObject *) PyPyString_FromString(const char *arg0);
#define PyString_FromStringAndSize PyPyString_FromStringAndSize
PyAPI_FUNC(PyObject *) PyPyString_FromStringAndSize(const char *arg0, Py_ssize_t arg1);
#define PyString_InternFromString PyPyString_InternFromString
PyAPI_FUNC(PyObject *) PyPyString_InternFromString(const char *arg0);
#define PyString_InternInPlace PyPyString_InternInPlace
PyAPI_FUNC(void) PyPyString_InternInPlace(PyObject **arg0);
#define PyString_Size PyPyString_Size
PyAPI_FUNC(Py_ssize_t) PyPyString_Size(PyObject *arg0);
#define PySys_GetObject PyPySys_GetObject
PyAPI_FUNC(PyObject *) PyPySys_GetObject(const char *arg0);
#define PySys_SetObject PyPySys_SetObject
PyAPI_FUNC(int) PyPySys_SetObject(const char *arg0, PyObject *arg1);
#define PyThreadState_Clear PyPyThreadState_Clear
PyAPI_FUNC(void) PyPyThreadState_Clear(PyThreadState *arg0);
#define PyThreadState_Delete PyPyThreadState_Delete
PyAPI_FUNC(void) PyPyThreadState_Delete(PyThreadState *arg0);
#define PyThreadState_DeleteCurrent PyPyThreadState_DeleteCurrent
PyAPI_FUNC(void) PyPyThreadState_DeleteCurrent(void);
#define PyThreadState_Get PyPyThreadState_Get
PyAPI_FUNC(PyThreadState *) PyPyThreadState_Get(void);
#define PyThreadState_GetDict PyPyThreadState_GetDict
PyAPI_FUNC(PyObject *) PyPyThreadState_GetDict(void);
#define PyThreadState_New PyPyThreadState_New
PyAPI_FUNC(PyThreadState *) PyPyThreadState_New(PyInterpreterState *arg0);
#define PyThreadState_Swap PyPyThreadState_Swap
PyAPI_FUNC(PyThreadState *) PyPyThreadState_Swap(PyThreadState *arg0);
#define PyThread_start_new_thread PyPyThread_start_new_thread
PyAPI_FUNC(int) PyPyThread_start_new_thread(void (*arg0)(void *), void *arg1);
#define PyTime_Check PyPyTime_Check
PyAPI_FUNC(int) PyPyTime_Check(PyObject *arg0);
#define PyTime_CheckExact PyPyTime_CheckExact
PyAPI_FUNC(int) PyPyTime_CheckExact(PyObject *arg0);
#define PyTime_FromTime PyPyTime_FromTime
PyAPI_FUNC(PyObject *) PyPyTime_FromTime(int arg0, int arg1, int arg2, int arg3);
#define PyTraceBack_Check PyPyTraceBack_Check
PyAPI_FUNC(int) PyPyTraceBack_Check(PyObject *arg0);
#define PyTraceBack_Here PyPyTraceBack_Here
PyAPI_FUNC(int) PyPyTraceBack_Here(PyFrameObject *arg0);
#define PyTraceBack_Print PyPyTraceBack_Print
PyAPI_FUNC(int) PyPyTraceBack_Print(PyObject *arg0, PyObject *arg1);
#define PyTuple_Check PyPyTuple_Check
PyAPI_FUNC(int) PyPyTuple_Check(PyObject *arg0);
#define PyTuple_CheckExact PyPyTuple_CheckExact
PyAPI_FUNC(int) PyPyTuple_CheckExact(PyObject *arg0);
#define PyTuple_GetItem PyPyTuple_GetItem
PyAPI_FUNC(PyObject *) PyPyTuple_GetItem(PyObject *arg0, Py_ssize_t arg1);
#define PyTuple_GetSlice PyPyTuple_GetSlice
PyAPI_FUNC(PyObject *) PyPyTuple_GetSlice(PyObject *arg0, Py_ssize_t arg1, Py_ssize_t arg2);
#define PyTuple_New PyPyTuple_New
PyAPI_FUNC(PyObject *) PyPyTuple_New(Py_ssize_t arg0);
#define PyTuple_SetItem PyPyTuple_SetItem
PyAPI_FUNC(int) PyPyTuple_SetItem(PyObject *arg0, Py_ssize_t arg1, PyObject *arg2);
#define PyTuple_Size PyPyTuple_Size
PyAPI_FUNC(Py_ssize_t) PyPyTuple_Size(PyObject *arg0);
#define PyType_Check PyPyType_Check
PyAPI_FUNC(int) PyPyType_Check(PyObject *arg0);
#define PyType_CheckExact PyPyType_CheckExact
PyAPI_FUNC(int) PyPyType_CheckExact(PyObject *arg0);
#define PyType_GenericAlloc PyPyType_GenericAlloc
PyAPI_FUNC(PyObject *) PyPyType_GenericAlloc(PyTypeObject *arg0, Py_ssize_t arg1);
#define PyType_GenericNew PyPyType_GenericNew
PyAPI_FUNC(PyObject *) PyPyType_GenericNew(PyTypeObject *arg0, PyObject *arg1, PyObject *arg2);
#define PyType_IsSubtype PyPyType_IsSubtype
PyAPI_FUNC(int) PyPyType_IsSubtype(PyTypeObject *arg0, PyTypeObject *arg1);
#define PyType_Modified PyPyType_Modified
PyAPI_FUNC(void) PyPyType_Modified(PyTypeObject *arg0);
#define PyType_Ready PyPyType_Ready
PyAPI_FUNC(int) PyPyType_Ready(PyTypeObject *arg0);
#define PyUnicode_AS_DATA PyPyUnicode_AS_DATA
PyAPI_FUNC(char *) PyPyUnicode_AS_DATA(PyObject *arg0);
#define PyUnicode_AS_UNICODE PyPyUnicode_AS_UNICODE
PyAPI_FUNC(wchar_t *) PyPyUnicode_AS_UNICODE(PyObject *arg0);
#define PyUnicode_AsASCIIString PyPyUnicode_AsASCIIString
PyAPI_FUNC(PyObject *) PyPyUnicode_AsASCIIString(PyObject *arg0);
#define PyUnicode_AsEncodedObject PyPyUnicode_AsEncodedObject
PyAPI_FUNC(PyObject *) PyPyUnicode_AsEncodedObject(PyObject *arg0, const char *arg1, const char *arg2);
#define PyUnicode_AsEncodedString PyPyUnicode_AsEncodedString
PyAPI_FUNC(PyObject *) PyPyUnicode_AsEncodedString(PyObject *arg0, const char *arg1, const char *arg2);
#define PyUnicode_AsLatin1String PyPyUnicode_AsLatin1String
PyAPI_FUNC(PyObject *) PyPyUnicode_AsLatin1String(PyObject *arg0);
#define PyUnicode_AsUTF8String PyPyUnicode_AsUTF8String
PyAPI_FUNC(PyObject *) PyPyUnicode_AsUTF8String(PyObject *arg0);
#define PyUnicode_AsUnicode PyPyUnicode_AsUnicode
PyAPI_FUNC(wchar_t *) PyPyUnicode_AsUnicode(PyObject *arg0);
#define PyUnicode_AsUnicodeEscapeString PyPyUnicode_AsUnicodeEscapeString
PyAPI_FUNC(PyObject *) PyPyUnicode_AsUnicodeEscapeString(PyObject *arg0);
#define PyUnicode_AsWideChar PyPyUnicode_AsWideChar
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_AsWideChar(PyUnicodeObject *arg0, wchar_t *arg1, Py_ssize_t arg2);
#define PyUnicode_Check PyPyUnicode_Check
PyAPI_FUNC(int) PyPyUnicode_Check(PyObject *arg0);
#define PyUnicode_CheckExact PyPyUnicode_CheckExact
PyAPI_FUNC(int) PyPyUnicode_CheckExact(PyObject *arg0);
#define PyUnicode_Compare PyPyUnicode_Compare
PyAPI_FUNC(int) PyPyUnicode_Compare(PyObject *arg0, PyObject *arg1);
#define PyUnicode_Count PyPyUnicode_Count
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_Count(PyObject *arg0, PyObject *arg1, Py_ssize_t arg2, Py_ssize_t arg3);
#define PyUnicode_Decode PyPyUnicode_Decode
PyAPI_FUNC(PyObject *) PyPyUnicode_Decode(const char *arg0, Py_ssize_t arg1, const char *arg2, const char *arg3);
#define PyUnicode_DecodeASCII PyPyUnicode_DecodeASCII
PyAPI_FUNC(PyObject *) PyPyUnicode_DecodeASCII(const char *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_DecodeLatin1 PyPyUnicode_DecodeLatin1
PyAPI_FUNC(PyObject *) PyPyUnicode_DecodeLatin1(const char *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_DecodeUTF16 PyPyUnicode_DecodeUTF16
PyAPI_FUNC(PyObject *) PyPyUnicode_DecodeUTF16(char *arg0, Py_ssize_t arg1, char *arg2, int *arg3);
#define PyUnicode_DecodeUTF32 PyPyUnicode_DecodeUTF32
PyAPI_FUNC(PyObject *) PyPyUnicode_DecodeUTF32(char *arg0, Py_ssize_t arg1, char *arg2, int *arg3);
#define PyUnicode_DecodeUTF8 PyPyUnicode_DecodeUTF8
PyAPI_FUNC(PyObject *) PyPyUnicode_DecodeUTF8(const char *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_EncodeASCII PyPyUnicode_EncodeASCII
PyAPI_FUNC(PyObject *) PyPyUnicode_EncodeASCII(const wchar_t *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_EncodeDecimal PyPyUnicode_EncodeDecimal
PyAPI_FUNC(int) PyPyUnicode_EncodeDecimal(wchar_t *arg0, Py_ssize_t arg1, char *arg2, char *arg3);
#define PyUnicode_EncodeLatin1 PyPyUnicode_EncodeLatin1
PyAPI_FUNC(PyObject *) PyPyUnicode_EncodeLatin1(const wchar_t *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_EncodeUTF8 PyPyUnicode_EncodeUTF8
PyAPI_FUNC(PyObject *) PyPyUnicode_EncodeUTF8(const wchar_t *arg0, Py_ssize_t arg1, const char *arg2);
#define PyUnicode_Find PyPyUnicode_Find
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_Find(PyObject *arg0, PyObject *arg1, Py_ssize_t arg2, Py_ssize_t arg3, int arg4);
#define PyUnicode_Format PyPyUnicode_Format
PyAPI_FUNC(PyObject *) PyPyUnicode_Format(PyObject *arg0, PyObject *arg1);
#define PyUnicode_FromEncodedObject PyPyUnicode_FromEncodedObject
PyAPI_FUNC(PyObject *) PyPyUnicode_FromEncodedObject(PyObject *arg0, const char *arg1, const char *arg2);
#define PyUnicode_FromObject PyPyUnicode_FromObject
PyAPI_FUNC(PyObject *) PyPyUnicode_FromObject(PyObject *arg0);
#define PyUnicode_FromOrdinal PyPyUnicode_FromOrdinal
PyAPI_FUNC(PyObject *) PyPyUnicode_FromOrdinal(int arg0);
#define PyUnicode_FromString PyPyUnicode_FromString
PyAPI_FUNC(PyObject *) PyPyUnicode_FromString(const char *arg0);
#define PyUnicode_FromStringAndSize PyPyUnicode_FromStringAndSize
PyAPI_FUNC(PyObject *) PyPyUnicode_FromStringAndSize(const char *arg0, Py_ssize_t arg1);
#define PyUnicode_FromUnicode PyPyUnicode_FromUnicode
PyAPI_FUNC(PyObject *) PyPyUnicode_FromUnicode(const wchar_t *arg0, Py_ssize_t arg1);
#define PyUnicode_FromWideChar PyPyUnicode_FromWideChar
PyAPI_FUNC(PyObject *) PyPyUnicode_FromWideChar(const wchar_t *arg0, Py_ssize_t arg1);
#define PyUnicode_GET_DATA_SIZE PyPyUnicode_GET_DATA_SIZE
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_GET_DATA_SIZE(PyObject *arg0);
#define PyUnicode_GET_SIZE PyPyUnicode_GET_SIZE
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_GET_SIZE(PyObject *arg0);
#define PyUnicode_GetDefaultEncoding PyPyUnicode_GetDefaultEncoding
PyAPI_FUNC(char *) PyPyUnicode_GetDefaultEncoding(void);
#define PyUnicode_GetMax PyPyUnicode_GetMax
PyAPI_FUNC(wchar_t) PyPyUnicode_GetMax(void);
#define PyUnicode_GetSize PyPyUnicode_GetSize
PyAPI_FUNC(Py_ssize_t) PyPyUnicode_GetSize(PyObject *arg0);
#define PyUnicode_Join PyPyUnicode_Join
PyAPI_FUNC(PyObject *) PyPyUnicode_Join(PyObject *arg0, PyObject *arg1);
#define PyUnicode_Replace PyPyUnicode_Replace
PyAPI_FUNC(PyObject *) PyPyUnicode_Replace(PyObject *arg0, PyObject *arg1, PyObject *arg2, Py_ssize_t arg3);
#define PyUnicode_Resize PyPyUnicode_Resize
PyAPI_FUNC(int) PyPyUnicode_Resize(PyObject **arg0, Py_ssize_t arg1);
#define PyUnicode_SetDefaultEncoding PyPyUnicode_SetDefaultEncoding
PyAPI_FUNC(int) PyPyUnicode_SetDefaultEncoding(const char *arg0);
#define PyUnicode_Split PyPyUnicode_Split
PyAPI_FUNC(PyObject *) PyPyUnicode_Split(PyObject *arg0, PyObject *arg1, Py_ssize_t arg2);
#define PyUnicode_Splitlines PyPyUnicode_Splitlines
PyAPI_FUNC(PyObject *) PyPyUnicode_Splitlines(PyObject *arg0, int arg1);
#define PyUnicode_Tailmatch PyPyUnicode_Tailmatch
PyAPI_FUNC(int) PyPyUnicode_Tailmatch(PyObject *arg0, PyObject *arg1, Py_ssize_t arg2, Py_ssize_t arg3, int arg4);
#define PyWeakref_GET_OBJECT PyPyWeakref_GET_OBJECT
PyAPI_FUNC(PyObject *) PyPyWeakref_GET_OBJECT(PyObject *arg0);
#define PyWeakref_GetObject PyPyWeakref_GetObject
PyAPI_FUNC(PyObject *) PyPyWeakref_GetObject(PyObject *arg0);
#define PyWeakref_LockObject PyPyWeakref_LockObject
PyAPI_FUNC(PyObject *) PyPyWeakref_LockObject(PyObject *arg0);
#define PyWeakref_NewProxy PyPyWeakref_NewProxy
PyAPI_FUNC(PyObject *) PyPyWeakref_NewProxy(PyObject *arg0, PyObject *arg1);
#define PyWeakref_NewRef PyPyWeakref_NewRef
PyAPI_FUNC(PyObject *) PyPyWeakref_NewRef(PyObject *arg0, PyObject *arg1);
#define Py_AddPendingCall PyPy_AddPendingCall
PyAPI_FUNC(int) PyPy_AddPendingCall(int (*arg0)(void *), void *arg1);
#define Py_AtExit PyPy_AtExit
PyAPI_FUNC(int) PyPy_AtExit(void (*arg0)(void));
#define Py_CompileStringFlags PyPy_CompileStringFlags
PyAPI_FUNC(PyObject *) PyPy_CompileStringFlags(const char *arg0, const char *arg1, int arg2, PyCompilerFlags *arg3);
#define Py_DecRef PyPy_DecRef
PyAPI_FUNC(void) PyPy_DecRef(PyObject *arg0);
#define Py_FindMethod PyPy_FindMethod
PyAPI_FUNC(PyObject *) PyPy_FindMethod(PyMethodDef *arg0, PyObject *arg1, const char *arg2);
#define Py_GetProgramName PyPy_GetProgramName
PyAPI_FUNC(char *) PyPy_GetProgramName(void);
#define Py_GetVersion PyPy_GetVersion
PyAPI_FUNC(char *) PyPy_GetVersion(void);
#define Py_IncRef PyPy_IncRef
PyAPI_FUNC(void) PyPy_IncRef(PyObject *arg0);
#define Py_IsInitialized PyPy_IsInitialized
PyAPI_FUNC(int) PyPy_IsInitialized(void);
#define Py_MakePendingCalls PyPy_MakePendingCalls
PyAPI_FUNC(int) PyPy_MakePendingCalls(void);
#define Py_UNICODE_COPY PyPy_UNICODE_COPY
PyAPI_FUNC(void) PyPy_UNICODE_COPY(wchar_t *arg0, wchar_t *arg1, Py_ssize_t arg2);
#define Py_UNICODE_ISALNUM PyPy_UNICODE_ISALNUM
PyAPI_FUNC(int) PyPy_UNICODE_ISALNUM(wchar_t arg0);
#define Py_UNICODE_ISALPHA PyPy_UNICODE_ISALPHA
PyAPI_FUNC(int) PyPy_UNICODE_ISALPHA(wchar_t arg0);
#define Py_UNICODE_ISDECIMAL PyPy_UNICODE_ISDECIMAL
PyAPI_FUNC(int) PyPy_UNICODE_ISDECIMAL(wchar_t arg0);
#define Py_UNICODE_ISDIGIT PyPy_UNICODE_ISDIGIT
PyAPI_FUNC(int) PyPy_UNICODE_ISDIGIT(wchar_t arg0);
#define Py_UNICODE_ISLINEBREAK PyPy_UNICODE_ISLINEBREAK
PyAPI_FUNC(int) PyPy_UNICODE_ISLINEBREAK(wchar_t arg0);
#define Py_UNICODE_ISLOWER PyPy_UNICODE_ISLOWER
PyAPI_FUNC(int) PyPy_UNICODE_ISLOWER(wchar_t arg0);
#define Py_UNICODE_ISNUMERIC PyPy_UNICODE_ISNUMERIC
PyAPI_FUNC(int) PyPy_UNICODE_ISNUMERIC(wchar_t arg0);
#define Py_UNICODE_ISSPACE PyPy_UNICODE_ISSPACE
PyAPI_FUNC(int) PyPy_UNICODE_ISSPACE(wchar_t arg0);
#define Py_UNICODE_ISTITLE PyPy_UNICODE_ISTITLE
PyAPI_FUNC(int) PyPy_UNICODE_ISTITLE(wchar_t arg0);
#define Py_UNICODE_ISUPPER PyPy_UNICODE_ISUPPER
PyAPI_FUNC(int) PyPy_UNICODE_ISUPPER(wchar_t arg0);
#define Py_UNICODE_TODECIMAL PyPy_UNICODE_TODECIMAL
PyAPI_FUNC(int) PyPy_UNICODE_TODECIMAL(wchar_t arg0);
#define Py_UNICODE_TODIGIT PyPy_UNICODE_TODIGIT
PyAPI_FUNC(int) PyPy_UNICODE_TODIGIT(wchar_t arg0);
#define Py_UNICODE_TOLOWER PyPy_UNICODE_TOLOWER
PyAPI_FUNC(wchar_t) PyPy_UNICODE_TOLOWER(wchar_t arg0);
#define Py_UNICODE_TONUMERIC PyPy_UNICODE_TONUMERIC
PyAPI_FUNC(double) PyPy_UNICODE_TONUMERIC(wchar_t arg0);
#define Py_UNICODE_TOTITLE PyPy_UNICODE_TOTITLE
PyAPI_FUNC(wchar_t) PyPy_UNICODE_TOTITLE(wchar_t arg0);
#define Py_UNICODE_TOUPPER PyPy_UNICODE_TOUPPER
PyAPI_FUNC(wchar_t) PyPy_UNICODE_TOUPPER(wchar_t arg0);
#define _PyComplex_AsCComplex _PyPyComplex_AsCComplex
PyAPI_FUNC(int) _PyPyComplex_AsCComplex(PyObject *arg0, Py_complex *arg1);
#define _PyComplex_FromCComplex _PyPyComplex_FromCComplex
PyAPI_FUNC(PyObject *) _PyPyComplex_FromCComplex(Py_complex *arg0);
#define _PyDateTime_Import _PyPyDateTime_Import
PyAPI_FUNC(PyDateTime_CAPI *) _PyPyDateTime_Import(void);
#define _PyEval_SliceIndex _PyPyEval_SliceIndex
PyAPI_FUNC(int) _PyPyEval_SliceIndex(PyObject *arg0, Py_ssize_t *arg1);
#define _PyFloat_Unpack4 _PyPyFloat_Unpack4
PyAPI_FUNC(double) _PyPyFloat_Unpack4(const char *arg0, int arg1);
#define _PyFloat_Unpack8 _PyPyFloat_Unpack8
PyAPI_FUNC(double) _PyPyFloat_Unpack8(const char *arg0, int arg1);
#define _PyInstance_Lookup _PyPyInstance_Lookup
PyAPI_FUNC(PyObject *) _PyPyInstance_Lookup(PyObject *arg0, PyObject *arg1);
#define _PyLong_FromByteArray _PyPyLong_FromByteArray
PyAPI_FUNC(PyObject *) _PyPyLong_FromByteArray(unsigned char *arg0, Unsigned arg1, int arg2, int arg3);
#define _PyLong_NumBits _PyPyLong_NumBits
PyAPI_FUNC(Unsigned) _PyPyLong_NumBits(PyObject *arg0);
#define _PyLong_Sign _PyPyLong_Sign
PyAPI_FUNC(int) _PyPyLong_Sign(PyObject *arg0);
#define _PyObject_GC_New _PyPyObject_GC_New
PyAPI_FUNC(PyObject *) _PyPyObject_GC_New(PyTypeObject *arg0);
#define _PyObject_GetDictPtr _PyPyObject_GetDictPtr
PyAPI_FUNC(PyObject **) _PyPyObject_GetDictPtr(PyObject *arg0);
#define _PyObject_New _PyPyObject_New
PyAPI_FUNC(PyObject *) _PyPyObject_New(PyTypeObject *arg0);
#define _PyObject_NewVar _PyPyObject_NewVar
PyAPI_FUNC(PyObject *) _PyPyObject_NewVar(PyTypeObject *arg0, Py_ssize_t arg1);
#define _PyString_Eq _PyPyString_Eq
PyAPI_FUNC(int) _PyPyString_Eq(PyObject *arg0, PyObject *arg1);
#define _PyString_Join _PyPyString_Join
PyAPI_FUNC(PyObject *) _PyPyString_Join(PyObject *arg0, PyObject *arg1);
#define _PyString_Resize _PyPyString_Resize
PyAPI_FUNC(int) _PyPyString_Resize(PyObject **arg0, Py_ssize_t arg1);
#define _PyTuple_Resize _PyPyTuple_Resize
PyAPI_FUNC(int) _PyPyTuple_Resize(PyObject **arg0, Py_ssize_t arg1);
#define _PyType_Lookup _PyPyType_Lookup
PyAPI_FUNC(PyObject *) _PyPyType_Lookup(PyTypeObject *arg0, PyObject *arg1);
#define _PyUnicode_AsDefaultEncodedString _PyPyUnicode_AsDefaultEncodedString
PyAPI_FUNC(PyObject *) _PyPyUnicode_AsDefaultEncodedString(PyObject *arg0, const char *arg1);
#define _Py_Dealloc _PyPy_Dealloc
PyAPI_FUNC(void) _PyPy_Dealloc(PyObject *arg0);
#define _Py_HashPointer _PyPy_HashPointer
PyAPI_FUNC(Signed) _PyPy_HashPointer(void *arg0);
#define _Py_InitPyPyModule _PyPy_InitPyPyModule
PyAPI_FUNC(PyObject *) _PyPy_InitPyPyModule(const char *arg0, PyMethodDef *arg1, const char *arg2, PyObject *arg3, int arg4);
#define _Py_NewReference _PyPy_NewReference
PyAPI_FUNC(void) _PyPy_NewReference(PyObject *arg0);
PyAPI_DATA(PyObject) _Py_NoneStruct;
PyAPI_DATA(PyIntObject) _Py_TrueStruct;
PyAPI_DATA(PyIntObject) _Py_ZeroStruct;
PyAPI_DATA(PyObject) _Py_NotImplementedStruct;
PyAPI_DATA(PyObject) _Py_EllipsisObject;
PyAPI_DATA(PyDateTime_CAPI*) PyDateTimeAPI;
PyAPI_DATA(PyObject*) PyExc_ArithmeticError;
PyAPI_DATA(PyObject*) PyExc_AssertionError;
PyAPI_DATA(PyObject*) PyExc_AttributeError;
PyAPI_DATA(PyObject*) PyExc_BaseException;
PyAPI_DATA(PyObject*) PyExc_BufferError;
PyAPI_DATA(PyObject*) PyExc_BytesWarning;
PyAPI_DATA(PyObject*) PyExc_DeprecationWarning;
PyAPI_DATA(PyObject*) PyExc_EOFError;
PyAPI_DATA(PyObject*) PyExc_EnvironmentError;
PyAPI_DATA(PyObject*) PyExc_Exception;
PyAPI_DATA(PyObject*) PyExc_FloatingPointError;
PyAPI_DATA(PyObject*) PyExc_FutureWarning;
PyAPI_DATA(PyObject*) PyExc_GeneratorExit;
PyAPI_DATA(PyObject*) PyExc_IOError;
PyAPI_DATA(PyObject*) PyExc_ImportError;
PyAPI_DATA(PyObject*) PyExc_ImportWarning;
PyAPI_DATA(PyObject*) PyExc_IndentationError;
PyAPI_DATA(PyObject*) PyExc_IndexError;
PyAPI_DATA(PyObject*) PyExc_KeyError;
PyAPI_DATA(PyObject*) PyExc_KeyboardInterrupt;
PyAPI_DATA(PyObject*) PyExc_LookupError;
PyAPI_DATA(PyObject*) PyExc_MemoryError;
PyAPI_DATA(PyObject*) PyExc_NameError;
PyAPI_DATA(PyObject*) PyExc_NotImplementedError;
PyAPI_DATA(PyObject*) PyExc_OSError;
PyAPI_DATA(PyObject*) PyExc_OverflowError;
PyAPI_DATA(PyObject*) PyExc_PendingDeprecationWarning;
PyAPI_DATA(PyObject*) PyExc_ReferenceError;
PyAPI_DATA(PyObject*) PyExc_RuntimeError;
PyAPI_DATA(PyObject*) PyExc_RuntimeWarning;
PyAPI_DATA(PyObject*) PyExc_StandardError;
PyAPI_DATA(PyObject*) PyExc_StopIteration;
PyAPI_DATA(PyObject*) PyExc_SyntaxError;
PyAPI_DATA(PyObject*) PyExc_SyntaxWarning;
PyAPI_DATA(PyObject*) PyExc_SystemExit;
PyAPI_DATA(PyObject*) PyExc_SystemError;
PyAPI_DATA(PyObject*) PyExc_TabError;
PyAPI_DATA(PyObject*) PyExc_TypeError;
PyAPI_DATA(PyObject*) PyExc_UnboundLocalError;
PyAPI_DATA(PyObject*) PyExc_UnicodeDecodeError;
PyAPI_DATA(PyObject*) PyExc_UnicodeEncodeError;
PyAPI_DATA(PyObject*) PyExc_UnicodeError;
PyAPI_DATA(PyObject*) PyExc_UnicodeTranslateError;
PyAPI_DATA(PyObject*) PyExc_UnicodeWarning;
PyAPI_DATA(PyObject*) PyExc_UserWarning;
PyAPI_DATA(PyObject*) PyExc_ValueError;
PyAPI_DATA(PyObject*) PyExc_Warning;
PyAPI_DATA(PyObject*) PyExc_ZeroDivisionError;
PyAPI_DATA(PyTypeObject) PyType_Type;
PyAPI_DATA(PyTypeObject) PyString_Type;
PyAPI_DATA(PyTypeObject) PyUnicode_Type;
PyAPI_DATA(PyTypeObject) PyBaseString_Type;
PyAPI_DATA(PyTypeObject) PyDict_Type;
PyAPI_DATA(PyTypeObject) PyTuple_Type;
PyAPI_DATA(PyTypeObject) PyList_Type;
PyAPI_DATA(PyTypeObject) PySet_Type;
PyAPI_DATA(PyTypeObject) PyFrozenSet_Type;
PyAPI_DATA(PyTypeObject) PyInt_Type;
PyAPI_DATA(PyTypeObject) PyBool_Type;
PyAPI_DATA(PyTypeObject) PyFloat_Type;
PyAPI_DATA(PyTypeObject) PyLong_Type;
PyAPI_DATA(PyTypeObject) PyComplex_Type;
PyAPI_DATA(PyTypeObject) PyByteArray_Type;
PyAPI_DATA(PyTypeObject) PyMemoryView_Type;
PyAPI_DATA(PyTypeObject) PyBaseObject_Type;
PyAPI_DATA(PyTypeObject) PyNone_Type;
PyAPI_DATA(PyTypeObject) PyNotImplemented_Type;
PyAPI_DATA(PyTypeObject) PyCell_Type;
PyAPI_DATA(PyTypeObject) PyModule_Type;
PyAPI_DATA(PyTypeObject) PyProperty_Type;
PyAPI_DATA(PyTypeObject) PySlice_Type;
PyAPI_DATA(PyTypeObject) PyClass_Type;
PyAPI_DATA(PyTypeObject) PyStaticMethod_Type;
PyAPI_DATA(PyTypeObject) PyCFunction_Type;
PyAPI_DATA(PyTypeObject) PyWrapperDescr_Type;
PyAPI_DATA(PyTypeObject) PyArray_Type;
#undef Signed    /* xxx temporary fix */

#undef Unsigned  /* xxx temporary fix */
