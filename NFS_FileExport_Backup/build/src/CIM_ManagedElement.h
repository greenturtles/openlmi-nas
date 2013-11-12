/*
**==============================================================================
**
** CAUTION: This file generated by KonkretCMPI. Please do not edit.
**
**==============================================================================
*/

#ifndef _konkrete_CIM_ManagedElement_h
#define _konkrete_CIM_ManagedElement_h

#include <konkret/konkret.h>

#include <strings.h>

/*
**==============================================================================
**
** struct CIM_ManagedElementRef 
**
**==============================================================================
*/

/* classname=CIM_ManagedElement */
typedef struct _CIM_ManagedElementRef
{
    KBase __base;
    /* CIM_ManagedElement features */
}
CIM_ManagedElementRef;

static const unsigned char __CIM_ManagedElementRef_sig[] =
{
    0x12,0x43,0x49,0x4d,0x5f,0x4d,0x61,0x6e,0x61,0x67,0x65,0x64,0x45,0x6c,0x65,
    0x6d,0x65,0x6e,0x74,0x00,0x00,
};

KINLINE void CIM_ManagedElementRef_Init(
    CIM_ManagedElementRef* self,
    const CMPIBroker* cb,
    const char* ns)
{
    const unsigned char* sig = __CIM_ManagedElementRef_sig;
    KBase_Init(&self->__base, cb, sizeof(*self), sig, ns);
}

KINLINE CMPIStatus CIM_ManagedElementRef_InitFromInstance(
    CIM_ManagedElementRef* self,
    const CMPIBroker* cb,
    const CMPIInstance* x)
{
    CIM_ManagedElementRef_Init(self, cb, NULL);
    return KBase_FromInstance(&self->__base, x);
}

KINLINE CMPIStatus CIM_ManagedElementRef_InitFromObjectPath(
    CIM_ManagedElementRef* self,
    const CMPIBroker* cb,
    const CMPIObjectPath* x)
{
    CIM_ManagedElementRef_Init(self, cb, NULL);
    return KBase_FromObjectPath(&self->__base, x);
}

KINLINE void CIM_ManagedElementRef_Print(
    const CIM_ManagedElementRef* self,
    FILE* os)
{
    KBase_Print(os, &self->__base, 'r');
}

KINLINE CMPIInstance* CIM_ManagedElementRef_ToInstance(
    const CIM_ManagedElementRef* self,
    CMPIStatus* status)
{
    return KBase_ToInstance(&self->__base, status);
}

KINLINE CMPIObjectPath* CIM_ManagedElementRef_ToObjectPath(
    const CIM_ManagedElementRef* self,
    CMPIStatus* status)
{
    return KBase_ToObjectPath(&self->__base, status);
}

KINLINE const char* CIM_ManagedElementRef_NameSpace(
    CIM_ManagedElementRef* self)
{
    if (self && self->__base.magic == KMAGIC)
        return self->__base.ns ? KChars(self->__base.ns) : NULL;
    return NULL;
}

/*
**==============================================================================
**
** struct CIM_ManagedElement 
**
**==============================================================================
*/

/* classname=CIM_ManagedElement */
typedef struct _CIM_ManagedElement
{
    KBase __base;
    /* CIM_ManagedElement features */
    const KString InstanceID;
    const KString Caption;
    const KString Description;
    const KString ElementName;
    const KUint64 Generation;
}
CIM_ManagedElement;

static const unsigned char __CIM_ManagedElement_sig[] =
{
    0x12,0x43,0x49,0x4d,0x5f,0x4d,0x61,0x6e,0x61,0x67,0x65,0x64,0x45,0x6c,0x65,
    0x6d,0x65,0x6e,0x74,0x00,0x05,0x0c,0x0a,0x49,0x6e,0x73,0x74,0x61,0x6e,0x63,
    0x65,0x49,0x44,0x00,0x0c,0x07,0x43,0x61,0x70,0x74,0x69,0x6f,0x6e,0x00,0x0c,
    0x0b,0x44,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6f,0x6e,0x00,0x0c,0x0b,
    0x45,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x4e,0x61,0x6d,0x65,0x00,0x07,0x0a,0x47,
    0x65,0x6e,0x65,0x72,0x61,0x74,0x69,0x6f,0x6e,0x00,
};

KINLINE void CIM_ManagedElement_Init(
    CIM_ManagedElement* self,
    const CMPIBroker* cb,
    const char* ns)
{
    const unsigned char* sig = __CIM_ManagedElement_sig;
    KBase_Init(&self->__base, cb, sizeof(*self), sig, ns);
}

KINLINE CMPIStatus CIM_ManagedElement_InitFromInstance(
    CIM_ManagedElement* self,
    const CMPIBroker* cb,
    const CMPIInstance* x)
{
    CIM_ManagedElement_Init(self, cb, NULL);
    return KBase_FromInstance(&self->__base, x);
}

KINLINE CMPIStatus CIM_ManagedElement_InitFromObjectPath(
    CIM_ManagedElement* self,
    const CMPIBroker* cb,
    const CMPIObjectPath* x)
{
    CIM_ManagedElement_Init(self, cb, NULL);
    return KBase_FromObjectPath(&self->__base, x);
}

KINLINE void CIM_ManagedElement_Print(
    const CIM_ManagedElement* self,
    FILE* os)
{
    KBase_Print(os, &self->__base, 'i');
}

KINLINE CMPIInstance* CIM_ManagedElement_ToInstance(
    const CIM_ManagedElement* self,
    CMPIStatus* status)
{
    return KBase_ToInstance(&self->__base, status);
}

KINLINE CMPIObjectPath* CIM_ManagedElement_ToObjectPath(
    const CIM_ManagedElement* self,
    CMPIStatus* status)
{
    return KBase_ToObjectPath(&self->__base, status);
}

KINLINE const char* CIM_ManagedElement_NameSpace(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
        return self->__base.ns ? KChars(self->__base.ns) : NULL;
    return NULL;
}

KINLINE void CIM_ManagedElement_SetString_InstanceID(
    CIM_ManagedElement* self,
    CMPIString* x)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->InstanceID;
        KString_SetString(field, x);
    }
}

KINLINE void CIM_ManagedElement_Set_InstanceID(
    CIM_ManagedElement* self,
    const char* s)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->InstanceID;
        KString_Set(field, self->__base.cb, s);
    }
}

KINLINE void CIM_ManagedElement_Null_InstanceID(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->InstanceID;
        KString_Null(field);
    }
}

KINLINE void CIM_ManagedElement_Clr_InstanceID(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->InstanceID;
        KString_Clr(field);
    }
}

KINLINE void CIM_ManagedElement_SetString_Caption(
    CIM_ManagedElement* self,
    CMPIString* x)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Caption;
        KString_SetString(field, x);
    }
}

KINLINE void CIM_ManagedElement_Set_Caption(
    CIM_ManagedElement* self,
    const char* s)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Caption;
        KString_Set(field, self->__base.cb, s);
    }
}

KINLINE void CIM_ManagedElement_Null_Caption(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Caption;
        KString_Null(field);
    }
}

KINLINE void CIM_ManagedElement_Clr_Caption(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Caption;
        KString_Clr(field);
    }
}

KINLINE void CIM_ManagedElement_SetString_Description(
    CIM_ManagedElement* self,
    CMPIString* x)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Description;
        KString_SetString(field, x);
    }
}

KINLINE void CIM_ManagedElement_Set_Description(
    CIM_ManagedElement* self,
    const char* s)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Description;
        KString_Set(field, self->__base.cb, s);
    }
}

KINLINE void CIM_ManagedElement_Null_Description(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Description;
        KString_Null(field);
    }
}

KINLINE void CIM_ManagedElement_Clr_Description(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->Description;
        KString_Clr(field);
    }
}

KINLINE void CIM_ManagedElement_SetString_ElementName(
    CIM_ManagedElement* self,
    CMPIString* x)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->ElementName;
        KString_SetString(field, x);
    }
}

KINLINE void CIM_ManagedElement_Set_ElementName(
    CIM_ManagedElement* self,
    const char* s)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->ElementName;
        KString_Set(field, self->__base.cb, s);
    }
}

KINLINE void CIM_ManagedElement_Null_ElementName(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->ElementName;
        KString_Null(field);
    }
}

KINLINE void CIM_ManagedElement_Clr_ElementName(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KString* field = (KString*)&self->ElementName;
        KString_Clr(field);
    }
}

KINLINE void CIM_ManagedElement_Set_Generation(
    CIM_ManagedElement* self,
    CMPIUint64 x)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KUint64* field = (KUint64*)&self->Generation;
        KUint64_Set(field, x);
    }
}

KINLINE void CIM_ManagedElement_Null_Generation(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KUint64* field = (KUint64*)&self->Generation;
        KUint64_Null(field);
    }
}

KINLINE void CIM_ManagedElement_Clr_Generation(
    CIM_ManagedElement* self)
{
    if (self && self->__base.magic == KMAGIC)
    {
        KUint64* field = (KUint64*)&self->Generation;
        KUint64_Clr(field);
    }
}

/*
**==============================================================================
**
** CIM_ManagedElement methods
**
**==============================================================================
*/

KINLINE CMPIStatus CIM_ManagedElement_DispatchMethod(
    const CMPIBroker* cb,
    CMPIMethodMI* mi,
    const CMPIContext* cc,
    const CMPIResult* cr,
    const CMPIObjectPath* cop,
    const char* meth,
    const CMPIArgs* in,
    CMPIArgs* out)
{
    CIM_ManagedElementRef self;

    KReturnIf(CIM_ManagedElementRef_InitFromObjectPath(&self, cb, cop));


    KReturn(ERR_METHOD_NOT_FOUND);
}

#define CIM_ManagedElement_ClassName "CIM_ManagedElement"

#endif /* _konkrete_CIM_ManagedElement_h */