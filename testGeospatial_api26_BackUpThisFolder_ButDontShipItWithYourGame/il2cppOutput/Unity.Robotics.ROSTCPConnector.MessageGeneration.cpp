#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct KeyCollection_t909EF6A32DBCF06256C5355994E42A862EF01855;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct ValueCollection_t2C1F0CEA83A34BC065556E04218B28AC9C817A40;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct EntryU5BU5D_tAE5F05A8A738A615F5B69A97CCC7AA36B2E9F294;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralAA85FF4E5A7BD42CAFF8E40C42EF0FDF21AF42E2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDE955F76E376B593C215D78CBD1C4F2A40E60B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_DeserializeLength_mBCD0B3BF130352A33BDEFB2B95CCF189FB42BC87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_DeserializeString_mC11D9941F81D2639F521123FFCB61D30C0DB7E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Deserialize_m946621BABCD98E2533F5C29B707B4EB0D6404490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_SerializationStatements_m45534D94993CC2C6615ADE004B3CA5E1A381F04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_SerializeString_m6E366D0CBA9FA035555FCF2236D5AAAD1F868074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_SerializeTo_mC64C939239BACD2E5C07AF751A3F623CAD42DA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Serialize_m4D998D4A0875C0AF83A8AA96347E4162B431D8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_get_RosMessageName_m14E754F6CF15594CD26BD56211D3853D15A2D050_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6675E429C3816EFFEB3537C181640A4066CC13DA 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAE5F05A8A738A615F5B69A97CCC7AA36B2E9F294* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t909EF6A32DBCF06256C5355994E42A862EF01855* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2C1F0CEA83A34BC065556E04218B28AC9C817A40* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF  : public RuntimeObject
{
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF  : public RuntimeObject
{
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_0;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::offset
	int32_t ___offset_1;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry
struct MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC  : public RuntimeObject
{
};

struct MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::s_DeserializeFunctionsByName
	Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* ___s_DeserializeFunctionsByName_0;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7  : public RuntimeObject
{
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_AlignmentOffset
	int32_t ___m_AlignmentOffset_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_LengthCorrection
	int32_t ___m_LengthCorrection_4;
	// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_ListOfSerializations
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_ListOfSerializations_5;
};

struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields
{
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_Ros2Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_Ros2Header_0;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_NullByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_NullByte_1;
	// System.Byte[][] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_PaddingBytes
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___k_PaddingBytes_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* m_Items[1];

	inline Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;

// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::InitWithBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_InitWithBuffer_m9C2A66B791803A036AAF8CF2D7158D8F4826A9BC (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::GetDeserializeFunction(System.String,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* MessageRegistry_GetDeserializeFunction_m28404A00D23F4A4C56429F1DFD945D0E23E3643F (String_t* ___rosMessageName0, int32_t ___subtopic1, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::Invoke(T)
inline Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* Func_2_Invoke_m507EB44CA2289CAA484C3F3E4A6D9A5B565075C0_inline (Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___arg0, const RuntimeMethod* method)
{
	return ((  Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* (*) (Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61*, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int32_t ___dataSize0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m745DF4DCC23461AB3035A92BC0C4D59AE12E6880 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mDCE4631751431B8D76CB214E6DFEC2645EF19AF9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_mC4F4FF7F02DC025F64047372BD5B25540F3EFC62 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m133E286BF0B721DD973FD966F61CB171F70F3E32 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m385AA8335F6A788C1AD54295BA8352FFADD91F36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_mEE089DB60AD05ED4B0F2670D8313E17668ECC289 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m7EFCF9D77ACD0F2DA29F69587DDF6130391E6164 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_m1CDA079BFD3222894DB58B69449E0110ED37AB1C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mD74DF4F6535FC635EB8697FC5175A7D99E3C62BF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::ReadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDeserializer_ReadLength_m47A54D7FD84C930D0315E11F398F3AEEDB749099 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, String_t** ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDE955F76E376B593C215D78CBD1C4F2A40E60B58 (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* __this, String_t* ___key0, Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*, String_t*, Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::.ctor()
inline void Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85 (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_mBEB2FF00C912C23469C5BE356B3AD57B9B49CA35 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_mC4CE2BF559DBB25D23A5894B617BD917B1622549 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* ___message0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
inline void List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___index0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m08CA71887E2D9E192FF05695EF245125CD722341 (bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int32_t ___dataSize0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m28C9BCF1B7814E4E5283164D6E6A35FF789E4249 (int16_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436 (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF (int64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m09C53C38A03A747E74A953608BA2C8EBD17B9B7B (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mF81EC757AE0524E72956BA027AE9F862A0156997 (float ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mFE50C0D81EE08BAF3D2E6E4D16B45E967C8A2006 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, String_t* ___inputString0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SerializeTo_mC64C939239BACD2E5C07AF751A3F623CAD42DA3A (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___state0, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException("Your message class needs to be rebuilt");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA85FF4E5A7BD42CAFF8E40C42EF0FDF21AF42E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_SerializeTo_mC64C939239BACD2E5C07AF751A3F623CAD42DA3A_RuntimeMethod_var)));
	}
}
// System.String Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_get_RosMessageName_m14E754F6CF15594CD26BD56211D3853D15A2D050 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, const RuntimeMethod* method) 
{
	{
		// public virtual string RosMessageName => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_get_RosMessageName_m14E754F6CF15594CD26BD56211D3853D15A2D050_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializationStatements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Message_SerializationStatements_m45534D94993CC2C6615ADE004B3CA5E1A381F04E (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, const RuntimeMethod* method) 
{
	{
		// public virtual List<byte[]> SerializationStatements() => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_SerializationStatements_m45534D94993CC2C6615ADE004B3CA5E1A381F04E_RuntimeMethod_var)));
	}
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::Deserialize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_Deserialize_m946621BABCD98E2533F5C29B707B4EB0D6404490 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, const RuntimeMethod* method) 
{
	{
		// public virtual int Deserialize(byte[] data, int offset) => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Deserialize_m946621BABCD98E2533F5C29B707B4EB0D6404490_RuntimeMethod_var)));
	}
}
// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::Serialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Message_Serialize_m4D998D4A0875C0AF83A8AA96347E4162B431D8DA (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, bool ___omitMessageSize0, const RuntimeMethod* method) 
{
	{
		// public byte[] Serialize(bool omitMessageSize = true) => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Serialize_m4D998D4A0875C0AF83A8AA96347E4162B431D8DA_RuntimeMethod_var)));
	}
}
// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Message_SerializeString_m6E366D0CBA9FA035555FCF2236D5AAAD1F868074 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	{
		// public byte[] SerializeString(string s) => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_SerializeString_m6E366D0CBA9FA035555FCF2236D5AAAD1F868074_RuntimeMethod_var)));
	}
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::DeserializeLength(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_DeserializeLength_mBCD0B3BF130352A33BDEFB2B95CCF189FB42BC87 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, const RuntimeMethod* method) 
{
	{
		// public int DeserializeLength(byte[] data, int offset) => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_DeserializeLength_mBCD0B3BF130352A33BDEFB2B95CCF189FB42BC87_RuntimeMethod_var)));
	}
}
// System.String Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::DeserializeString(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_DeserializeString_mC11D9941F81D2639F521123FFCB61D30C0DB7E07 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		// public string DeserializeString(byte[] data, int offset, int length) => throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_DeserializeString_mC11D9941F81D2639F521123FFCB61D30C0DB7E07_RuntimeMethod_var)));
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::DeserializeMessage(System.String,System.Byte[],Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* MessageDeserializer_DeserializeMessage_m4AE1973900CB0B23C7DDBED4BC31E516794B2673 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, String_t* ___rosMessageName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___subtopic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitWithBuffer(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data1;
		MessageDeserializer_InitWithBuffer_m9C2A66B791803A036AAF8CF2D7158D8F4826A9BC(__this, L_0, NULL);
		// return MessageRegistry.GetDeserializeFunction(rosMessageName, subtopic)(this);
		String_t* L_1 = ___rosMessageName0;
		int32_t L_2 = ___subtopic2;
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* L_3;
		L_3 = MessageRegistry_GetDeserializeFunction_m28404A00D23F4A4C56429F1DFD945D0E23E3643F(L_1, L_2, NULL);
		NullCheck(L_3);
		Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* L_4;
		L_4 = Func_2_Invoke_m507EB44CA2289CAA484C3F3E4A6D9A5B565075C0_inline(L_3, __this, NULL);
		return L_4;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::InitWithBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_InitWithBuffer_m9C2A66B791803A036AAF8CF2D7158D8F4826A9BC (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// this.data = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		__this->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_0), (void*)L_0);
		// this.offset = 0;
		__this->___offset_1 = 0;
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int32_t ___dataSize0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::ReadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDeserializer_ReadLength_m47A54D7FD84C930D0315E11F398F3AEEDB749099 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 4, NULL);
		// int result = BitConverter.ToInt32(data, offset);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___data_0;
		int32_t L_1 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m745DF4DCC23461AB3035A92BC0C4D59AE12E6880(L_0, L_1, NULL);
		// offset += sizeof(int);
		int32_t L_3 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// return result;
		return L_2;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m338A3F887A313FE384D694F69076D380AF1DBAC3 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, bool* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value = BitConverter.ToBoolean(data, offset);
		bool* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BitConverter_ToBoolean_mDCE4631751431B8D76CB214E6DFEC2645EF19AF9(L_1, L_2, NULL);
		*((int8_t*)L_0) = (int8_t)L_3;
		// offset += sizeof(bool);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mEEAD6E6C07F305AA07365B8C0BAD1E32E9F1473F (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// value = data[offset];
		uint8_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		// offset += sizeof(byte);
		int32_t L_5 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m324D8D40A6127DE02070F2AD6FF7FAE09F98713A (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// value = (sbyte)data[offset];
		int8_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)((int8_t)L_4);
		// offset += sizeof(sbyte);
		int32_t L_5 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m7FB47D4658173E32C0FD36D216285690F4ACB18B (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int16_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(short));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 2, NULL);
		// value = BitConverter.ToInt16(data, offset);
		int16_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_3;
		L_3 = BitConverter_ToInt16_mC4F4FF7F02DC025F64047372BD5B25540F3EFC62(L_1, L_2, NULL);
		*((int16_t*)L_0) = (int16_t)L_3;
		// offset += sizeof(short);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m7053AFC46AA8A067F1A54C03AA3D52589E6B8A35 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, uint16_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ushort));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 2, NULL);
		// value = BitConverter.ToUInt16(data, offset);
		uint16_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_3;
		L_3 = BitConverter_ToUInt16_m133E286BF0B721DD973FD966F61CB171F70F3E32(L_1, L_2, NULL);
		*((int16_t*)L_0) = (int16_t)L_3;
		// offset += sizeof(ushort);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, float* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(float));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 4, NULL);
		// value = BitConverter.ToSingle(data, offset);
		float* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = BitConverter_ToSingle_m385AA8335F6A788C1AD54295BA8352FFADD91F36(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		// offset += sizeof(float);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m54046CE4111177676176E0439518460B18D06453 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, double* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(double));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 8, NULL);
		// value = BitConverter.ToDouble(data, offset);
		double* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = BitConverter_ToDouble_mEE089DB60AD05ED4B0F2670D8313E17668ECC289(L_1, L_2, NULL);
		*((double*)L_0) = (double)L_3;
		// offset += sizeof(double);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m74D981E7B6EE6B47E3FDCC7928F60CD4418F7061 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, uint32_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(uint));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 4, NULL);
		// value = BitConverter.ToUInt32(data, offset);
		uint32_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BitConverter_ToUInt32_m7EFCF9D77ACD0F2DA29F69587DDF6130391E6164(L_1, L_2, NULL);
		*((int32_t*)L_0) = (int32_t)L_3;
		// offset += sizeof(uint);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 4, NULL);
		// value = BitConverter.ToInt32(data, offset);
		int32_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m745DF4DCC23461AB3035A92BC0C4D59AE12E6880(L_1, L_2, NULL);
		*((int32_t*)L_0) = (int32_t)L_3;
		// offset += sizeof(int);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m5DA63273533BCCF5CEFE961DA7D808B958F6DA24 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int64_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(long));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 8, NULL);
		// value = BitConverter.ToInt64(data, offset);
		int64_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = BitConverter_ToInt64_m1CDA079BFD3222894DB58B69449E0110ED37AB1C(L_1, L_2, NULL);
		*((int64_t*)L_0) = (int64_t)L_3;
		// offset += sizeof(long);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m75F61F1809C6A8901D1BF7C42F22C2B1C07068A8 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, uint64_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ulong));
		MessageDeserializer_Align_m840A9B65071FAE2F15E8DB704475590D25BA02BF(__this, 8, NULL);
		// value = BitConverter.ToUInt64(data, offset);
		uint64_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_0;
		int32_t L_2 = __this->___offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = BitConverter_ToUInt64_mD74DF4F6535FC635EB8697FC5175A7D99E3C62BF(L_1, L_2, NULL);
		*((int64_t*)L_0) = (int64_t)L_3;
		// offset += sizeof(ulong);
		int32_t L_4 = __this->___offset_1;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, String_t** ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var length = ReadLength();
		int32_t L_0;
		L_0 = MessageDeserializer_ReadLength_m47A54D7FD84C930D0315E11F398F3AEEDB749099(__this, NULL);
		V_0 = L_0;
		// value = System.Text.Encoding.UTF8.GetString(data, offset, length);
		String_t** L_1 = ___value0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___data_0;
		int32_t L_4 = __this->___offset_1;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		String_t* L_6;
		L_6 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_6);
		// offset += length;
		int32_t L_7 = __this->___offset_1;
		int32_t L_8 = V_0;
		__this->___offset_1 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m17C4D39EABA12E946B208A6A57C1B17B2A7D1357 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___values0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// values = new string[length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_0 = ___values0;
		int32_t L_1 = ___length1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// for (var i = 0; i < length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// Read(out values[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_3 = ___values0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = *((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**)L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7(__this, ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		// for (var i = 0; i < length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (var i = 0; i < length; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = ___length1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer__ctor_m28F8BD45C8B3C8EC0EEFCDA822ECBD796897989F (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::GetDeserializeFunction(System.String,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* MessageRegistry_GetDeserializeFunction_m28404A00D23F4A4C56429F1DFD945D0E23E3643F (String_t* ___rosMessageName0, int32_t ___subtopic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDE955F76E376B593C215D78CBD1C4F2A40E60B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* V_0 = NULL;
	{
		// s_DeserializeFunctionsByName[(int)subtopic].TryGetValue(rosMessageName, out result);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_0 = ((MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0;
		int32_t L_1 = ___subtopic1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___rosMessageName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mDE955F76E376B593C215D78CBD1C4F2A40E60B58(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_mDE955F76E376B593C215D78CBD1C4F2A40E60B58_RuntimeMethod_var);
		// return result;
		Func_2_t0B9AE122B87C6F7B2A9654A7B4BD357367C9BD61* L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageRegistry__cctor_m2883A7BFA6F6EA65456EC8E3857F73DFA8C195E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<string, Func<MessageDeserializer, Message>>[] s_DeserializeFunctionsByName = new Dictionary<string, Func<MessageDeserializer, Message>>[]{
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // default
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // response
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // goal
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // feedback
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // result
		// };
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_0 = (Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51*)(Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51*)SZArrayNew(Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51_il2cpp_TypeInfo_var, (uint32_t)5);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_1 = L_0;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_2 = (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)il2cpp_codegen_object_new(Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85(L_2, Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)L_2);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_3 = L_1;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_4 = (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)il2cpp_codegen_object_new(Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85(L_4, Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)L_4);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_5 = L_3;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_6 = (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)il2cpp_codegen_object_new(Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85(L_6, Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)L_6);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_7 = L_5;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_8 = (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)il2cpp_codegen_object_new(Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85(L_8, Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)L_8);
		Dictionary_2U5BU5D_tF043A54D93A67689869C28C9BADEFD0CAADD3B51* L_9 = L_7;
		Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2* L_10 = (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)il2cpp_codegen_object_new(Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85(L_10, Dictionary_2__ctor_m50CFF23A7254CCCD3A1320D359DA0AD906247E85_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Dictionary_2_tABE95D7A3327DAB6E0FEEE812FDFC0CA5360D9B2*)L_10);
		((MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_mBEB2FF00C912C23469C5BE356B3AD57B9B49CA35 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => m_AlignmentOffset + m_LengthCorrection;
		int32_t L_0 = __this->___m_AlignmentOffset_3;
		int32_t L_1 = __this->___m_LengthCorrection_4;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__ctor_m728038C7A1727A6E96451976CB0CDD7EF37F6908 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> m_ListOfSerializations = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_ListOfSerializations_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ListOfSerializations_5), (void*)L_0);
		// public MessageSerializer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Clear_m8DF3A14E104AA5088A23A8036E8228FB065537A7 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AlignmentOffset = 0;
		__this->___m_AlignmentOffset_3 = 0;
		// m_LengthCorrection = 0;
		__this->___m_LengthCorrection_4 = 0;
		// m_ListOfSerializations.Clear();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline(L_0, List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessageWithLength(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessageWithLength_mA0684C7A158796DD8F5BF43D6246A1E90F9F751F (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int lengthIndex = m_ListOfSerializations.Count;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_0, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		V_0 = L_1;
		// m_ListOfSerializations.Add(null);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = __this->___m_ListOfSerializations_5;
		NullCheck(L_2);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_2, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_LengthCorrection += 4;
		int32_t L_3 = __this->___m_LengthCorrection_4;
		__this->___m_LengthCorrection_4 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// int preambleLength = Length;
		int32_t L_4;
		L_4 = MessageSerializer_get_Length_mBEB2FF00C912C23469C5BE356B3AD57B9B49CA35(__this, NULL);
		V_1 = L_4;
		// SerializeMessage(message);
		Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* L_5 = ___message0;
		MessageSerializer_SerializeMessage_mC4CE2BF559DBB25D23A5894B617BD917B1622549(__this, L_5, NULL);
		// m_ListOfSerializations[lengthIndex] = BitConverter.GetBytes(Length - preambleLength);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = MessageSerializer_get_Length_mBEB2FF00C912C23469C5BE356B3AD57B9B49CA35(__this, NULL);
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		NullCheck(L_6);
		List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16(L_6, L_7, L_10, List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_mC4CE2BF559DBB25D23A5894B617BD917B1622549 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* ___message0, const RuntimeMethod* method) 
{
	{
		// m_LengthCorrection += m_AlignmentOffset;
		int32_t L_0 = __this->___m_LengthCorrection_4;
		int32_t L_1 = __this->___m_AlignmentOffset_3;
		__this->___m_LengthCorrection_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// m_AlignmentOffset = 0; // header doesn't affect alignment
		__this->___m_AlignmentOffset_3 = 0;
		// message.SerializeTo(this);
		Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* L_2 = ___message0;
		NullCheck(L_2);
		VirtualActionInvoker1< MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_2, __this);
		// }
		return;
	}
}
// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageSerializer_GetBytes_mFA5E11897173FB1B8FA4A5AB5573F0A74C862372 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_2;
	memset((&V_2), 0, sizeof(V_2));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// byte[] serializedMessage = new byte[Length];
		int32_t L_0;
		L_0 = MessageSerializer_get_Length_mBEB2FF00C912C23469C5BE356B3AD57B9B49CA35(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// int writeIndex = 0;
		V_1 = 0;
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = __this->___m_ListOfSerializations_5;
		NullCheck(L_2);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_3;
		L_3 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_2, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_2), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_001c_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
				L_4 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_2), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_3 = L_4;
				// if (statement == null)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_3;
				if (!L_5)
				{
					goto IL_0035_1;
				}
			}
			{
				// statement.CopyTo(serializedMessage, writeIndex);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
				int32_t L_8 = V_1;
				NullCheck((RuntimeArray*)L_6);
				Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, L_8, NULL);
				// writeIndex += statement.Length;
				int32_t L_9 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
				NullCheck(L_10);
				V_1 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length))));
			}

IL_0035_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				bool L_11;
				L_11 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_2), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// return serializedMessage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytesSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* MessageSerializer_GetBytesSequence_m61729B751207E3EC9868129F0D9F0D6B2DF80E9B (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> result = new List<byte[]>(m_ListOfSerializations);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E(L_1, L_0, List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		// return result;
		return L_1;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SendTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SendTo_mAEA1CD180F562D6809E3AB6A28CB9FDBBA3D43CA (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_1;
		L_1 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_0, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_0), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_000e_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
				L_2 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_0), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_1 = L_2;
				// stream.Write(statement, 0, statement.Length);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
				NullCheck(L_5);
				NullCheck(L_3);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
			}

IL_0021_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				bool L_6;
				L_6 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_0), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int32_t ___dataSize0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* ___message0, const RuntimeMethod* method) 
{
	{
		// message.SerializeTo(this);
		Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* L_0 = ___message0;
		NullCheck(L_0);
		VirtualActionInvoker1< MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_0, __this);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mCE38AE0340B808C27B28795946DE64DBDB319A3A (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		bool L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m08CA71887E2D9E192FF05695EF245125CD722341(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(bool);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mCFB1B5B2844DC7A2589EDC9D11FF9F306981617A (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { value });
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(byte);
		int32_t L_4 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m46DC483AE61EFD959F04DE5580DD84A96684ABD3 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { (byte)value });
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(sbyte);
		int32_t L_4 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m589A0672E7E02A27E01F164E9136D3CE32C88786 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(short));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 2, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int16_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m28C9BCF1B7814E4E5283164D6E6A35FF789E4249(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(short);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mE1E9AEEF5E2236A9BA31ABEE46B4EE6854F44E77 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 2, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint16_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ushort);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(int);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mA8A5F77841480A762255B304DA5AF45F3CF94D46 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(uint);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mEF8C88E3A504F9A6AACEE6EFFF5BB696A534AFB6 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(long));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(long);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mB2429CB37627E241E3F3419B9A129A178EAF113C (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m09C53C38A03A747E74A953608BA2C8EBD17B9B7B(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ulong);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(float));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mF81EC757AE0524E72956BA027AE9F862A0156997(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(float);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m638B6A51624E443C227F596971EEECA0BBC045CB (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(double));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		double L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mFE50C0D81EE08BAF3D2E6E4D16B45E967C8A2006(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(double);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mACFA334E0052A0F8DA1A6CCC5B09836CD33567A1 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// byte[] buffer = new byte[values.Length];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += values.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___values0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0630C15D372A317E20C391155D4D0D955A728FFA (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (values.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// m_ListOfSerializations.Add(values);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___values0;
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += values.Length;
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___values0;
		NullCheck(L_4);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mB4723DE42458A2E2E829A92888EEDC5B144B2718 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// byte[] buffer = new byte[values.Length];
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m5E826A6241B8BFEB64BB7A62BDF81006B08B0464 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(short));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 2, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(short)];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m84BDDE83D4FFAD06D53C96804B4BB35B1985DC1F (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 2, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ushort)];
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m4FD7966965554BCF7A8DF54AAFA8D55139261A85 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(int));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(int)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF1C6DB0D1236C681DFDA14F7E5C5119E27ED4B1F (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(uint)];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF281FED15CDA48967F52949B5885CA43EB9455EE (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(float));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(float)];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mE62A6A28F6FB1C84304CCB2B1E18C4D211F04C74 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(double));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(double)];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m45812E854EE150F3A33288E94935D1D153468D77 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(long));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(long)];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m9E00AAB7E33DF9276D9B6B4E46E4B63318B72831 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_mA0937D1D85F64B0E995AC382913D4D1FA0DC0B14(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ulong)];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, String_t* ___inputString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::WriteUnaligned(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_WriteUnaligned_m906625DE58CAAD2A2D8B958D629F7014BE83C5B2 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, String_t* ___inputString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0FA0D2770B7015DE5DB5BC45F5D034866D92DC94 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string entry in values)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (string entry in values)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Write(entry);
		String_t* L_5 = V_2;
		MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C(__this, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0015:
	{
		// foreach (string entry in values)
		int32_t L_7 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__cctor_m5CF41866FB71A3D62230B8AF771357DD1C2DD262 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly byte[] k_Ros2Header = new byte[] { 0, 1, 0, 0 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_Ros2Header_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_Ros2Header_0), (void*)L_1);
		// static readonly byte[] k_NullByte = new byte[] { 0 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_NullByte_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_NullByte_1), (void*)L_2);
		// static readonly byte[][] k_PaddingBytes = new byte[][]
		// {
		//     null,
		//     new byte[]{ 0 },
		//     new byte[]{ 0, 0 },
		//     new byte[]{ 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0, 0 },
		// };
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_7);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_9);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_10 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_12 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_13);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_14 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_15);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)7);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_17);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_19);
		((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_PaddingBytes_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_il2cpp_TypeInfo_var))->___k_PaddingBytes_2), (void*)L_18);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
