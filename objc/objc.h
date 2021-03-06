#import "../Types.h"
#import "objcTypes.h"

id objc_autorelease(id value);
id objc_autoreleaseReturnValue(id value);
id objc_retain(id value);
id objc_retainAutorelease(id value);
id objc_retainAutoreleaseReturnValue(id value);
id objc_retainAutoreleasedReturnValue(id value);
id objc_unsafeClaimAutoreleasedReturnValue(id value);
id objc_msgSendSuper(struct objc_super *super, SEL op, ...);
id objc_msgSendSuper2(struct objc_super *super, SEL op, ...);
id objc_initWeak(id *object, id value);
id objc_loadWeakRetained(id *object);
id objc_loadWeak(id *object);
id objc_storeWeak(id *object, id value);
id objc_getClass(const char *name);
id objc_getAssociatedObject(id object, const void *key);
id objc_getProperty(id self, SEL _cmd, ptrdiff_t offset, BOOL atomic);
id objc_getMetaClass(const char *name);
id objc_retainBlock(id value);
id object_getIvar(id obj, Ivar ivar);
id method_invoke(id receiver, Method m, ...);

Class objc_lookUpClass(const char *name);
Class object_getClass(id obj);
Class class_getSuperclass(Class cls);

Protocol *objc_getProtocol(const char *name);
Protocol *objc_allocateProtocol(const char *name);

IMP method_getImplementation(Method m);
IMP method_setImplementation(Method m, IMP imp);
IMP class_replaceMethod(Class cls, SEL name, IMP imp, const char *types);
IMP class_getMethodImplementation(Class cls, SEL name);

char *method_copyArgumentType(Method m, unsigned int index);
char *method_copyReturnType(Method m);

const char *object_getClassName(id obj);
const char *protocol_getName(Protocol *proto);
const char *sel_getName(SEL sel);
const char *property_getAttributes(objc_property_t property);
const char *property_getName(objc_property_t property);
const char *method_getTypeEncoding(Method m);
const char *ivar_getName(Ivar v);
const char *ivar_getTypeEncoding(Ivar v);
const char *class_getName(Class cls);

SEL sel_registerName(const char *str);
SEL sel_getUid(const char *str);
SEL method_getName(Method m);

Ivar class_getInstanceVariable(Class cls, const char *name);
Ivar class_getClassVariable(Class cls, const char *name);
Ivar *class_copyIvarList(Class cls, unsigned int *outCount);

Method class_getInstanceMethod(Class cls, SEL name);
Method class_getClassMethod(Class cls, SEL name);
Method *class_copyMethodList(Class cls, unsigned int *outCount);

objc_property_t *protocol_copyPropertyList(Protocol *proto, unsigned int *outCount);
objc_property_t *class_copyPropertyList(Class cls, unsigned int *outCount);

objc_property_attribute_t *property_copyAttributeList(objc_property_t property, unsigned int *outCount);

struct objc_method_description protocol_getMethodDescription(Protocol *proto, SEL aSel, BOOL isRequiredMethod, BOOL isInstanceMethod);
struct objc_method_description *protocol_copyMethodDescriptionList(Protocol *proto, BOOL isRequiredMethod, BOOL isInstanceMethod, unsigned int *outCount);
struct objc_method_description *method_getDescription(Method m);

int objc_sync_enter(id obj);
int objc_sync_exit(id obj);

ptrdiff_t ivar_getOffset(Ivar v);

size_t class_getInstanceSize(Class cls);

unsigned int method_getNumberOfArguments(Method m);

BOOL protocol_conformsToProtocol(Protocol *proto, Protocol *other);
BOOL sel_isEqual(SEL lhs, SEL rhs);
BOOL class_addMethod(Class cls, SEL name, IMP imp, const char *types);
BOOL class_isMetaClass(Class cls);
BOOL class_addIvar(Class cls, const char *name, size_t size, uint8_t alignment, const char *types);

void objc_copyWeak(id *dest, id *src);
void objc_destroyWeak(id *object);
void objc_storeStrong(id *object, id value);
void objc_setAssociatedObject(id object, const void *key, id value, objc_AssociationPolicy policy);
void objc_setProperty_atomic(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_atomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_nonatomic(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_nonatomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_enumerationMutation(id obj);
void objc_autoreleasePoolPop(void *pool);
void objc_msgSend_stret(id self, SEL op, ...);
void objc_msgSendSuper2_stret(struct objc_super *super, SEL op,...);
void objc_moveWeak(id *dest, id *src);
void objc_registerProtocol(Protocol *proto);
void objc_release(id value);
void objc_terminate(void);
void objc_copyStruct(void *dest, const void *src, ptrdiff_t size, BOOL atomic, BOOL hasStrong);
void protocol_addMethodDescription(Protocol *proto, SEL name, const char *types, BOOL isRequiredMethod, BOOL isInstanceMethod);
void protocol_addProtocol(Protocol *proto, Protocol *addition);
void protocol_addProperty(Protocol *proto, const char *name, const objc_property_attribute_t *attributes, unsigned int attributeCount, BOOL isRequiredProperty, BOOL isInstanceProperty);
void method_invoke_stret(id receiver, Method m, ...);
void method_getReturnType(Method m, char *dst, size_t dst_len);
void method_getArgumentType(Method m, unsigned int index, char *dst, size_t dst_len);
void method_exchangeImplementations(Method m1, Method m2);

void *objc_autoreleasePoolPush(void);