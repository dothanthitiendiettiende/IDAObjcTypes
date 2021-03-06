#import "../Types.h"
#import "CoreFoundationTypes.h"

CFTypeRef CFRetain(CFTypeRef cf);
CFTypeRef CFAutorelease(CFTypeRef arg);
CFTypeRef CFGetTypeID(CFTypeRef cf);
CFTypeRef CFBooleanGetTypeID(void);
CFTypeRef CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);

void CFRelease(CFTypeRef cf);
void CFDataGetBytes(CFDataRef theData, CFRange range, UInt8 *buffer);
void CFArrayAppendValue(CFMutableArrayRef mDict, const void *value);
void CFPreferencesSetAppValue(CFStringRef key, CFPropertyListRef value, CFStringRef applicationID);
void CFArrayRemoveValueAtIndex(CFMutableArrayRef theArray, CFIndex idx);
void CFNotificationCenterAddObserver(CFNotificationCenterRef center, const void *observer, CFNotificationCallback callBack, CFStringRef name, const void *object, CFNotificationSuspensionBehavior suspensionBehavior);
void CFNotificationCenterPostNotification(CFNotificationCenterRef center, CFNotificationName name, const void *object, CFDictionaryRef userInfo, Boolean deliverImmediately);

CFAbsoluteTime CFAbsoluteTimeGetCurrent(void);

CFNotificationCenterRef CFNotificationCenterGetDarwinNotifyCenter(void);

CFPropertyListRef CFPreferencesCopyAppValue(CFStringRef key, CFStringRef applicationID);
CFPropertyListRef CFPropertyListCreateDeepCopy(CFAllocatorRef allocator, CFPropertyListRef propertyList, CFOptionFlags mutabilityOption);

CFMutableArrayRef CFArrayCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFArrayCallBacks *callBacks);

CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding);

const void *CFArrayGetValueAtIndex(CFArrayRef theArray, CFIndex idx);

Boolean CFBooleanGetValue(CFBooleanRef boolean);
Boolean CFArrayContainsValue(CFArrayRef theArray, CFRange range, const void *value);
Boolean CFPreferencesAppSynchronize(CFStringRef appID);
Boolean CFPreferencesGetAppBooleanValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);

CFIndex CFArrayGetCount(const void *dict);
CFIndex CFPreferencesGetAppIntegerValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);