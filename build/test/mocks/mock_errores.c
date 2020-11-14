/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_errores.h"

static const char* CMockString_RegistrarError = "RegistrarError";

typedef struct _CMOCK_RegistrarError_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_RegistrarError_CALL_INSTANCE;

static struct mock_erroresInstance
{
  char RegistrarError_IgnoreBool;
  char RegistrarError_CallbackBool;
  CMOCK_RegistrarError_CALLBACK RegistrarError_CallbackFunctionPointer;
  int RegistrarError_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE RegistrarError_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_errores_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.RegistrarError_CallInstance;
  if (Mock.RegistrarError_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_RegistrarError);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.RegistrarError_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_errores_Init(void)
{
  mock_errores_Destroy();
}

void mock_errores_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void RegistrarError(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_RegistrarError_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_RegistrarError);
  cmock_call_instance = (CMOCK_RegistrarError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.RegistrarError_CallInstance);
  Mock.RegistrarError_CallInstance = CMock_Guts_MemNext(Mock.RegistrarError_CallInstance);
  if (Mock.RegistrarError_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.RegistrarError_CallbackBool &&
      Mock.RegistrarError_CallbackFunctionPointer != NULL)
  {
    Mock.RegistrarError_CallbackFunctionPointer(Mock.RegistrarError_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.RegistrarError_CallbackFunctionPointer != NULL)
  {
    Mock.RegistrarError_CallbackFunctionPointer(Mock.RegistrarError_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void RegistrarError_CMockIgnore(void)
{
  Mock.RegistrarError_IgnoreBool = (char)1;
}

void RegistrarError_CMockStopIgnore(void)
{
  Mock.RegistrarError_IgnoreBool = (char)0;
}

void RegistrarError_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_RegistrarError_CALL_INSTANCE));
  CMOCK_RegistrarError_CALL_INSTANCE* cmock_call_instance = (CMOCK_RegistrarError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.RegistrarError_CallInstance = CMock_Guts_MemChain(Mock.RegistrarError_CallInstance, cmock_guts_index);
  Mock.RegistrarError_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void RegistrarError_AddCallback(CMOCK_RegistrarError_CALLBACK Callback)
{
  Mock.RegistrarError_IgnoreBool = (char)0;
  Mock.RegistrarError_CallbackBool = (char)1;
  Mock.RegistrarError_CallbackFunctionPointer = Callback;
}

void RegistrarError_Stub(CMOCK_RegistrarError_CALLBACK Callback)
{
  Mock.RegistrarError_IgnoreBool = (char)0;
  Mock.RegistrarError_CallbackBool = (char)0;
  Mock.RegistrarError_CallbackFunctionPointer = Callback;
}

